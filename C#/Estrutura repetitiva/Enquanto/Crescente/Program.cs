using System;
using System.Globalization;


namespace Crescente
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int x, y;

            System.Console.WriteLine("Digite dois numeros:");
            x = int.Parse(Console.ReadLine());
            y = int.Parse(Console.ReadLine());

            while (x != y) {
                if (x > y) {
                    System.Console.WriteLine("DECRESCENTE!");
                }
                else {
                    System.Console.WriteLine("CRESCENTE!");
                }
                        System.Console.WriteLine("Digite outros dois numeros:");
            x = int.Parse(Console.ReadLine());
            y = int.Parse(Console.ReadLine());

            }

        }
    }
}
