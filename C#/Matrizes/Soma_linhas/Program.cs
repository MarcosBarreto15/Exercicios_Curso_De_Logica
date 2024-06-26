﻿using System;
using System.Globalization;



namespace Soma_linhas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int M, N;
            double somalinha;

            System.Console.Write("Qual a quantidade de linhas da matriz? ");
            M = int.Parse(Console.ReadLine());
            System.Console.Write("Qual a quantidade de colunas da matriz? ");
            N = int.Parse(Console.ReadLine());

            double [,] mat = new double[M, N];
            double[] vet = new double[M];

                for (int i = 0; i < M; i++)
                {
                    System.Console.WriteLine("Digite os elementos da " + (i + 1) +  "a. linha:" );
                    for (int j = 0; j < N; j++)
                    {
                        mat[i,j] = double.Parse(Console.ReadLine(), CI);
                    }
                }


                for (int i = 0; i < M; i++)
                {
                    somalinha = 0;
                    for (int j = 0; j < N; j++)
                    {
                        somalinha = somalinha + mat[i,j];
                    }
                    vet[i] = somalinha;
                }

                System.Console.WriteLine("VETOR GERADO: ");

                for (int i = 0; i < M; i++)
                {
                    System.Console.WriteLine(vet[i].ToString("F1", CI));
                }

        }
    }
}
