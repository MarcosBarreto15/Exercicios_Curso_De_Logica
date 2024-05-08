using System;
using System.Globalization;
using System.Runtime.Intrinsics.Arm;



namespace Circulo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
    
        double raio, area;

            
            Console.Write("Digite o valor do raio do circulo: ");
            raio = double.Parse(Console.ReadLine(), CI);

            area = 3.14159 * Math.Pow(raio, 2.0);


            System.Console.WriteLine("AREA = " + area.ToString("F3" , CI));


        }
    }
}
