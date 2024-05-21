using System;
using System.Globalization;



namespace Soma_linhas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int M, N;

            System.Console.Write("Qual a quantidade de linhas da matriz? ");
            M = int.Parse(Console.ReadLine());
            System.Console.WriteLine("Qual a quantidade de colunas da matriz? ");
            N = int.Parse(Console.ReadLine());

            double [,] = new double [M, N];

                for (int i = 0; i < M; i++)
                System.Console.WriteLine("Digite os elementos da " + (i+1) + "linha:" );
                {
                    for (int j = 0; j < N; j++)
                    {
                        System.Console.Write("Elemento [" + i + "," + j + "]: ");
                        mat[i,j] = double.Parse(Console.ReadLine(), CI);
                    }
                }

                




        }
    }
}
