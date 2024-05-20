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

            System.Console.WriteLine("Qual a ordem da matriz? ");
            M = int.Parse(Console.ReadLine());

            int [][] mat = new int[M][M];

                for (int i = 0; i < M; i++)
                {
                    for (int i = 0; i < M; J++)
                    {
                        System.Console.WriteLine("Elemento [" + i + "," + j + "]: ");
                        mat[i][j] = int.Parse(Console.ReadLine());
                    }
                }




            }
        }
    }
