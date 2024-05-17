using System;
using System.Globalization;



namespace Soma_vetores
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;

            System.Console.WriteLine("Quantos valores vai ter cada vetor: ");
            N = int.Parse(Console.ReadLine());

            int[] A = new int[N];
            int[] B = new int[N];
            int[] C = new int[N];
                
                System.Console.WriteLine("Digite os valores do vetor A: ");

                for (int i = 0; i < N; i++)
                {
                    A[i] = int.Parse(Console.ReadLine());
                }

                System.Console.WriteLine("Digite os valores do vetor B: ");

                for (int i = 0; i < N; i++)
                {
                    B[i] = int.Parse(Console.ReadLine());
                }

                System.Console.WriteLine("VETOR RESULTANTE:");

                for (int i = 0; i < N; i++)
                {
                    C[i] = A[i] + B[i];
                }

                for (int i = 0; i < N; i++)
                {
                    System.Console.WriteLine(C[i]);
                }



            }

        }
    }
