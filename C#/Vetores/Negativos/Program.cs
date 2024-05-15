using System;
using System.Globalization;



namespace Negativos
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;

            System.Console.Write("Quantos numeros voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            int[] vet = new int[N];

                for (int i = 0; i < N; i++)
                {
                    System.Console.Write("Digite um numero: ");
                    vet[i] = int.Parse(Console.ReadLine());
                } 

                System.Console.WriteLine("NUMEROS NEGATIVOS: ");  

                for (int i = 0; i < N; i++)
                {
                    if (vet[i] < 0)
                    {
                        System.Console.WriteLine(vet[i]);
                    }
                }



            }

        }
    }
