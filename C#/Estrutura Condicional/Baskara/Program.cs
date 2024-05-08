using System;
using System.Globalization;

namespace Baskara
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            double a, b, c, x1, x2, delta;

            Console.Write("Coeficiente a: ");
            a = double.Parse(Console.ReadLine(), CI);
            
            Console.Write("Coeficiente b: ");
            b = double.Parse(Console.ReadLine(), CI);

            Console.Write("Coeficiente c: ");
            c = double.Parse(Console.ReadLine(), CI);

            delta = Math.Pow(b, 2.0) - 4 * a * c;

            if (a == 0 || delta < 0) {
                System.Console.WriteLine("Essa equação não possui raízes reais");
            }
            else {
                x1 = (-b + Math.Sqrt(delta)) / (2 * a);
                x2 = (-b - Math.Sqrt(delta)) / (2 * a);

                System.Console.WriteLine("X1 = " + x1.ToString("F4", CI));
                System.Console.WriteLine("X2 = " + x2.ToString("F4", CI));
            }
            

        }
    }
}