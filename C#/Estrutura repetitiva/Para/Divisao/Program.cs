using System;
using System.Globalization;



namespace Divisao
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, numerador, denominador;
            double divisao;

            System.Console.Write("Quantos casos voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            for (int i = 1; i <= N; i++)
            {
                System.Console.Write("Entre com o numerador: ");
                numerador = int.Parse(Console.ReadLine());
                System.Console.Write("Entre com o denominador: ");
                denominador = int.Parse(Console.ReadLine());

                if (denominador == 0)
                {
                    System.Console.WriteLine("DIVISAO IMPOSSIVEL");
                }
                else
                {
                    divisao = (double)numerador/denominador;
                    System.Console.WriteLine("DIVISAO = " + divisao.ToString("F2", CI));
                }
            }


            }
        }
    }