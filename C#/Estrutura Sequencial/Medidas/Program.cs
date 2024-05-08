using System;
using System.Globalization;


namespace Medidas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
        double a, b, c, quadrado, triangulo, trapezio;

        System.Console.Write("Digite a media A: ");
        a = double.Parse(Console.ReadLine(), CI);
         System.Console.Write("Digite a media B: ");
        b = double.Parse(Console.ReadLine(), CI);
         System.Console.Write("Digite a media C: ");
        c = double.Parse(Console.ReadLine(), CI);

        quadrado = Math.Pow(a, 2.0);
        triangulo = (a * b) / 2;
        trapezio = ((a + b) * c) / 2;

        System.Console.WriteLine("AREA DO QUADRADO = " + quadrado.ToString("F4", CI));
        System.Console.WriteLine("AREA DO TRIANGULO = " + triangulo.ToString("F4", CI));
        System.Console.WriteLine("AREA DO TRAPEZIO = " + trapezio.ToString("F4", CI));


        }
    }
}
