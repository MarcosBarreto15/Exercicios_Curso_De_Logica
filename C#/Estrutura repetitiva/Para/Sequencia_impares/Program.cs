using System;
using System.Globalization;



namespace Sequencia_impares
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int x;

            System.Console.Write("Digite o valor de x: ");
            x = int.Parse(Console.ReadLine());

            for (int i = 1; i <=  x; i++)
            {
                if (i % 2 != 0)
                {
                    System.Console.WriteLine(i);
                }
            }


            }

        }
    }