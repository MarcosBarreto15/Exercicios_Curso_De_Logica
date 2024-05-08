using System;
using System.Globalization;


namespace Dardo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            double d1, d2, d3, maior;

            System.Console.Write("Digite as tres distancias: ");
            d1 = double.Parse(Console.ReadLine(), CI);
            d2 = double.Parse(Console.ReadLine(), CI);
            d3= double.Parse(Console.ReadLine(), CI);

            maior = 0;

            if (d1 > d2 && d1 > d3) {
                maior = d1;
            }
            else if (d2 > d1 && d2 > d3) {
                maior = d2;
            }
            else {
                maior = d3;
            }

            System.Console.WriteLine("MAIOR DISTANCIA = " + maior.ToString("F2", CI));


        }
    }
}