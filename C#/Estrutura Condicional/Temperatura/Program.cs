using System;
using System.Globalization;


namespace Temperatura
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            char escala;
            double Fahrenheit, Celsius;

            System.Console.Write("Voce vai digitar a temperatura em qual escala (C/F)? ");
            escala = char.Parse(Console.ReadLine());

            if (escala == 'F') {
                System.Console.Write("Digite a temperatura em Fahrenheit: ");
                Fahrenheit = double.Parse(Console.ReadLine(), CI);
                Celsius = (Fahrenheit - 32) / 1.8;
                System.Console.WriteLine("Temperatura equivalente em Celsius: " + Celsius.ToString("F2", CI)); 
            }
            else {
                System.Console.Write("Digite a temperatura em Celsius: ");  
                Celsius = double.Parse(Console.ReadLine(), CI);
                Fahrenheit = Celsius * 9 / 5 + 32;
                System.Console.WriteLine("Temperatura equivalente em Fahrenheit: " + Fahrenheit.ToString("F2", CI));
            }

        }
    }
}
