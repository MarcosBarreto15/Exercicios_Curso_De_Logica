using System;
using System.Globalization;



namespace Numeros_pares
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

                System.Console.WriteLine();
                System.Console.WriteLine("NUMEROS PARES: ");

                int cont = 0;

                for (int i = 0; i < N; i++)
                {
                    if (vet[i] % 2 == 0)
                    {
                        System.Console.Write(vet[i] + "  ");
                        cont++;
                    }
                }

                System.Console.WriteLine();
                System.Console.WriteLine();
                System.Console.WriteLine("QUANTIDADE DE PARES = " + cont);


            }

        }
    }
