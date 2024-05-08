using System;
using System.Globalization;


namespace Lanchonete
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            int codigo, qtde;
            double  valor;

            System.Console.Write("Codigo do produto comprado: ");
            codigo = int.Parse(Console.ReadLine());
            System.Console.Write("Quantidade comprada: ");
            qtde  = int.Parse(Console.ReadLine());

            valor = 0;

            switch (codigo) {
                case 1:
                    valor = (double)5.00 * qtde;
                    break;

                case 2:
                    valor = (double)3.50 * qtde;
                    break;

                case 3:
                    valor = (double)4.80 * qtde;
                    break;

                case 4:
                    valor = (double)8.90 * qtde;
                    break;
                
                case 5:
                    valor = (double)7.32 * qtde;
                    break;
            }

            System.Console.WriteLine("Valor a pagar:  R$ " + valor.ToString("F2", CI));


        }
    }
}
