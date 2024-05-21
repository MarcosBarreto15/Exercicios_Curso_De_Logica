using System;
using System.Globalization;



namespace Diagonal_negativos
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int M;

            System.Console.Write("Qual a ordem da matriz? ");
            M = int.Parse(Console.ReadLine());

                int [,] mat = new int[M, M];

                for (int i = 0; i < M; i++)
                {
                    for (int j = 0; j < M; j++)
                    {
                        System.Console.Write("Elemento [" + i + "," + j + "]: ");
                        mat[i,j] = int.Parse(Console.ReadLine());
                    }
                }
                
                System.Console.WriteLine("DIAGONAL PRINCIPAL: ");

                for (int i = 0; i < M; i++)
                {
                    for (int j = 0; j < M; j++)
                    {
                        if (i == j)
                        {
                            System.Console.Write(mat[i,j] + " ");
                        }
                    }
                }

                int cont = 0;

                for (int i = 0; i < M; i++)
                {
                    for (int j = 0; j < M; j++)
                    {
                        if (mat[i,j] < 0)
                        {
                            cont++;
                        }
                    }
                }
                System.Console.WriteLine();
                System.Console.WriteLine("QUANTIDADE DE NEGATIVOS: " + cont);


        }
    }
}
