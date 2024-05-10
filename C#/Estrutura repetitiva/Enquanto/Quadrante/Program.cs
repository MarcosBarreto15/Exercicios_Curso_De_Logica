using System;
using System.Globalization;



namespace Quadrante
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int x, y;

            System.Console.WriteLine("Digite os valores das coordenadas X e Y:");
            x = int.Parse(Console.ReadLine());
            y = int.Parse(Console.ReadLine());

            while (x != 0 && y != 0) {
                if (x > 0 && y > 0)
                    {
                         System.Console.WriteLine ( "QUADRANTE Q1");
                     }
                 else if (x < 0 && y > 0)
                    {
                        System.Console.WriteLine ( "QUADRANTE Q2");
                    }
                else if (x < 0 && y < 0)
                    {
                         System.Console.WriteLine ( "QUADRANTE Q3");
                     }
                else if (x > 0 && y < 0)
                    {
                        System.Console.WriteLine ( "QUADRANTE Q4");
                    }

                System.Console.WriteLine("Digite os valores das coordenadas X e Y:");
                x = int.Parse(Console.ReadLine());
                y = int.Parse(Console.ReadLine());

            }


            }

        }
    }
