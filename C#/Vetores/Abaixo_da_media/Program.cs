using System;
using System.Globalization;



namespace Abaixo_da_media
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;

            System.Console.Write("Quantos elementos vai ter o vetor? ");
            N = int.Parse(Console.ReadLine());

                double[] vet = new double[N];

                for (int i = 0; i < N; i++)
                {
                    System.Console.Write("Digite um numero :");
                    vet[i] = double.Parse(Console.ReadLine(), CI);
                }

                double soma = 0;
                for (int i = 0; i < N; i++)
                {
                    soma = soma + vet[i];
                }

                double media = soma / N;

                System.Console.WriteLine();
                System.Console.WriteLine("MEDIA DO VETOR = " + media.ToString("F3", CI));
                System.Console.WriteLine("ELEMENTOS ABAIXO DA MEDIA: ");
                
                for (int i = 0; i < N; i++)
                {
                    if (vet[i] < media)
                    {
                        System.Console.WriteLine(vet[i]);
                    }
                }


            }

        }
    }
