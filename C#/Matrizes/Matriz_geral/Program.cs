using System;
using System.Globalization;



namespace Matriz_geral
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, linha, coluna;

            System.Console.Write("Qual a ordem da matriz? ");
            N = int.Parse(Console.ReadLine());

            double[,]mat = new double[N,N];

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    System.Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i,j] = double.Parse(Console.ReadLine(), CI);
                }
            }

            double somaPositivos = 0;

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (mat[i,j] >= 0)
                    {
                        somaPositivos = somaPositivos + mat[i,j];
                    }
                }
            }

            System.Console.WriteLine();
            System.Console.WriteLine("SOMA DOS POSITIVOS: " + somaPositivos.ToString("F1", CI));

            System.Console.WriteLine();
            System.Console.Write("Escolha uma linha: ");
            linha = int.Parse(Console.ReadLine());
            System.Console.Write("LINHA ESCOLHIDA: ");

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (linha == i)
                    {
                        System.Console.Write(mat[i,j].ToString("F1", CI) + " ");
                    }
                }
            }
            System.Console.WriteLine();
            System.Console.WriteLine();
            System.Console.Write("Escolha uma coluna: ");
            linha = int.Parse(Console.ReadLine());
            System.Console.Write("COLUNA ESCOLHIDA: ");

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (linha == j)
                    {
                        System.Console.Write(mat[i,j].ToString("F1", CI) + " ");
                    }
                }
            }

            System.Console.WriteLine();
            System.Console.WriteLine();
            System.Console.Write("DIAGONAL PRINCIPAL: ");

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (i == j)
                    {
                        System.Console.Write(mat[i,j].ToString("F1", CI) + " ");
                    }
                }
            }

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (mat[i,j] < 0)
                    {
                        mat[i,j] = mat[i,j] * mat[i,j];
                    }
                }
            }
            
            System.Console.WriteLine();
            System.Console.WriteLine();
            System.Console.WriteLine("MATRIZ ALTERADA:");

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    System.Console.Write(mat[i,j].ToString("F1", CI) + " ");
                }
                System.Console.WriteLine();
            }



        }
    }
}
