using System;
using System.Globalization;


namespace Operadora
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            int minutos, excedido;
            double valor, acrescimo;

            Console.Write("Digite a quantidade de minutos: ");
            minutos = int.Parse(Console.ReadLine());
            
            if (minutos <= 100) {
                valor = 50.00;
            }
            else {
                excedido = minutos - 100;
                acrescimo = excedido * 2.00;
                valor = 50.00 + acrescimo;
            }

            System.Console.WriteLine("Valor a pagar: R$ " + valor.ToString("F2", CI));


        }
    }
}
