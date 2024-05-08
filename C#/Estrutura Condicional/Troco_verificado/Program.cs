using System;
using System.Globalization;


namespace Troco_verificado
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            int qtde;
            double preco, dinheiro, troco, falta, total;

            Console.Write("Preço unitário do produto: ");
            preco = double.Parse(Console.ReadLine(), CI);

            System.Console.Write("Quantidade comprada: ");
            qtde = int.Parse(Console.ReadLine());

            System.Console.Write("Dinheiro recebido: ");
            dinheiro = double.Parse(Console.ReadLine(), CI);

            total = (double)preco * qtde;
            if (dinheiro < total) {
                falta = total - dinheiro;
                System.Console.WriteLine("DINHEIRO INSUFICIENTE. FALTAM " +falta.ToString("F2", CI) + " REAIS");
            }
            else {
                troco = dinheiro - total;
                System.Console.WriteLine("TRCO = " + troco.ToString("F2" , CI));
            }
        }
    }
}
