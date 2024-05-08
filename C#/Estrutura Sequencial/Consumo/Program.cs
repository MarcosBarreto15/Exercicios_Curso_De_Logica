using System;
using System.Globalization;


namespace Consumo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
        double combustivel, consumo;
        int distancia;

        System.Console.Write("Distancia percorrida: ");
        distancia = int.Parse(Console.ReadLine());
        System.Console.Write("Combustivel gasto: ");
        combustivel = double.Parse(Console.ReadLine(), CI);

        consumo = (double)distancia / combustivel;

        System.Console.WriteLine("Consumo medio: " + consumo.ToString("F3", CI));


        }
    }
}
