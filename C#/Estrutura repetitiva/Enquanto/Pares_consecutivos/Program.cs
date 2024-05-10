using System;
using System.Globalization;



namespace Pares_consecutivos
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int x, soma, cont;

            System.Console.Write("Digite um numero inteiro: ");  
            x = int.Parse(Console.ReadLine()); 

            while (x != 0) {
                if (x % 2 != 0) {
                x = x + 1;
                }

                cont = 1;
                soma = x;

                while (cont <= 4) {
                x = x + 2;
                soma = soma + x;
                cont = cont + 1;
                }

            System.Console.WriteLine("SOMA = " + soma);
            System.Console.Write("Digite um numero inteiro: ");  
            x = int.Parse(Console.ReadLine()); 

            }


            }

        }
    }
