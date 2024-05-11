using System;
using System.Globalization;



namespace Tabuada
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, multi;

            System.Console.Write("Deseja a tabuada para qual valor? ");
            N = int.Parse(Console.ReadLine());

            for (int i = 1; i <= 10; i++)
            {
               multi = N * i;
               System.Console.WriteLine(N + " X " + i + " = " + multi ); 
            }
            

            }

        }
    }
