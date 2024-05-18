using System;
using System.Globalization;



namespace Media_pares
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;

            System.Console.Write("Quantos elementos vai ter o vetor? ");
            N = int.Parse(Console.ReadLine());

            int[] vet = new int[N];

                for (int i = 0; i < N; i++)
                {
                    System.Console.Write("Ditie um numero: ");
                    vet[i] = int.Parse(Console.ReadLine());
                }

                int soma = 0;
                int cont = 0;

                for (int i = 0; i < N; i++)
                {
                    if (vet[i] % 2 == 0)
                    {
                        soma = soma + vet[i];
                        cont++;
                    }
                }

                double media = (double)soma / cont;

                System.Console.Write("MEDIA DOS PARES: " + media.ToString("F1", CI));

            }

        }
    }
