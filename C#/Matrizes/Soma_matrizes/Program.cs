using System;
using System.Globalization;



namespace Soma_matrizes
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int M, N;

            System.Console.Write("Quantas linhas vai ter cada matriz? ");
            M = int.Parse(Console.ReadLine());
            System.Console.Write("Quantas colunas vai ter cada matriz? ");
            N = int.Parse(Console.ReadLine());

            int[,]A = new int[M,N];
            int[,]B = new int[M,N];
            int[,]C = new int[M,N];

            System.Console.WriteLine("Digite os valores da matriz A:");

            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    System.Console.Write("Elemento [" + i + "," + j + "]: ");
                    A[i,j] = int.Parse(Console.ReadLine()); 
                }
            }

            System.Console.WriteLine("Digite os valores da matriz B:");

            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    System.Console.Write("Elemento [" + i + "," + j + "]: ");
                    B[i,j] = int.Parse(Console.ReadLine()); 
                }
            }

            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    C[i,j] = A[i,j] + B[i,j];
                }
            }

            System.Console.WriteLine("MATRIZ SOMA: ");

            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    System.Console.Write(C[i,j] + " ");
                }
                
                System.Console.WriteLine();
            }  


        }
    }
}
