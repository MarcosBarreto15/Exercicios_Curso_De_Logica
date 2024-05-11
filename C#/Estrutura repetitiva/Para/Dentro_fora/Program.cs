using System;
using System.Globalization;



namespace Dentro_fora
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, x, dentro, fora;

            System.Console.Write("Quantos numeros voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            dentro = 0;
            fora = 0;

            for (int i = 1; i <= N; i++)
            {
                System.Console.Write("Digite um numero: ");
                x = int.Parse(Console.ReadLine());
                if (x >= 10 && x <= 20 )
                {
                    dentro++;
                }
                else {
                    fora++;
                }
            }

            System.Console.WriteLine(dentro + " DENTRO");
            System.Console.WriteLine(fora + " FORA");


            }

        }
    }
