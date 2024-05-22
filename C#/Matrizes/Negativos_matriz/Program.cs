﻿using System;
using System.Globalization;



namespace Negativos_matriz
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int M, N;

            System.Console.Write("Qual a quantidade de linhas da matriz? ");
            M = int.Parse(Console.ReadLine());
            System.Console.Write("Qual a quantidade de colunas da matriz? ");
            N = int.Parse(Console.ReadLine());

                int [,] mat = new int[M, N];

                for (int i = 0; i < M; i++)
                {
                    for (int j = 0; j < N; j++)
                    {
                        System.Console.Write("Elemento [" + i + "," + j + "]: ");
                        mat[i,j] = int.Parse(Console.ReadLine());
                    }
                }

                System.Console.WriteLine("VALORES NEGATIVOS: ");

                for (int i = 0; i < M; i++)
                {
                    for (int j = 0; j < N; j++)
                    {
                        if (mat[i,j] < 0)
                        {
                            System.Console.WriteLine(mat[i,j]);
                        }
                    }
                }

        }
    }
}
