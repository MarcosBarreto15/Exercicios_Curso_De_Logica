using System;
using System.Globalization;



namespace Soma_vetor
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;

            System.Console.Write("Quantos numeros voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            double[] vet = new double[N];

                for (int i = 0; i < N; i++)
                {
                    System.Console.Write("Digite um numero: ");
                    vet[i] = double.Parse(Console.ReadLine(), CI);
                } 

                System.Console.WriteLine();
                System.Console.Write("VALORES = ");

                for (int i = 0; i < N; i++)
                {
                    System.Console.Write(vet[i].ToString("F2", CI) + " ");
                }

                 double soma = 0;

                for (int i = 0; i < N; i++)
                {
                    soma = soma + vet[i];
                    
                }

                System.Console.WriteLine();
                System.Console.WriteLine("SOMA = " + soma.ToString("F2", CI));

                double media = soma / N;

                System.Console.WriteLine("MEDIA = "  + media.ToString("F2", CI));


            }

        }
    }
