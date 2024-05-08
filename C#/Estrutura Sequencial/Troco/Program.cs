using System;
using System.Globalization;


namespace Troco
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
        int qtde;
        double preco, din, troco;

            
            Console.Write("Preco unitario do produto : ");
            preco = double.Parse(Console.ReadLine(), CI);
            Console.Write("Quantidade comprada: ");
            qtde = int.Parse(Console.ReadLine());
            Console.Write("Dinheiro: ");
            din = double.Parse(Console.ReadLine(), CI);

            troco = din - (preco * qtde);

            System.Console.WriteLine("TROCO = " + troco.ToString("F2" , CI));


        }
    }
}
