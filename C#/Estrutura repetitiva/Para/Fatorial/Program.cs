using System;
using System.Globalization;



namespace Fatorial
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, fatorial, i;

            System.Console.Write("Digite o valor de N: ");
            N = int.Parse(Console.ReadLine());

                fatorial = 1;
                
                for ( i = N; i > 0; i--)
                {
                    fatorial = fatorial * i;
                }

                System.Console.WriteLine("FATORIAL = " + fatorial);




            }

        }
    }
