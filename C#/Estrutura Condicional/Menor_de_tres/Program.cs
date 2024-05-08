using System;
using System.Globalization;


namespace Menor_de_tres
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            int a, b, c, menor;

            Console.Write("Primeiro valor: ");
            a = int.Parse(Console.ReadLine());
            
            Console.Write("Segundo valor: ");
            b = int.Parse(Console.ReadLine());

            Console.Write("Terceirao valor: ");
            c = int.Parse(Console.ReadLine());


            if (a < b && a < c) {
                menor = a;
            }
            else if (b < a && b < c) {
                menor = b;
            }
            else {
                menor = c;
            }

            System.Console.WriteLine("MENOR = " + menor);

        }
    }
}
