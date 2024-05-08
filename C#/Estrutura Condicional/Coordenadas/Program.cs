using System;
using System.Globalization;


namespace Coordenadas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double x, y;

            System.Console.Write("Valor de X:");
            x = double.Parse(Console.ReadLine());
            System.Console.Write("Valor de Y:");
            y = double.Parse(Console.ReadLine());

            if (x > 0 && y > 0) {
                System.Console.WriteLine("Q1");
            }
            else if (x < 0 && y > 0) {
                System.Console.WriteLine("Q2");
            }
            else if (x < 0 && y < 0) {
                System.Console.WriteLine("Q3");
            }
            else if (x > 0 && y < 0) {
                System.Console.WriteLine("Q4");
            }
            else if (x == 0 && y == 0){
               System.Console.WriteLine("Origem");
            }
            else if(x == 0){
                System.Console.WriteLine("Eixo Y");
            }
            else if(y == 0){
                System.Console.WriteLine("Eixo X");
            }
           

        }
    }
}