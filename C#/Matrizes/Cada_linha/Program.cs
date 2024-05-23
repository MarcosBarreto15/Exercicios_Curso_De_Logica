using System;
using System.Globalization;



namespace Cada_linha
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int M;

            System.Console.Write("Qual a ordem da matriz? ");
            M = int.Parse(Console.ReadLine());

            int[,]mat = new int[M,M];

            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    System.Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i,j] = int.Parse(Console.ReadLine());
                }
            }

            System.Console.WriteLine("MAIOR ELEMENTO DE CADA LINHA:");

            

            for (int i = 0; i < M; i++)
            {
                int maior = 0;

                for (int j = 0; j < M; j++)
                {
                    if (mat[i,j] > maior)
                    {
                        maior = mat[i,j];
                    }
                }

                System.Console.WriteLine(maior);
            }


        }
    }
}
