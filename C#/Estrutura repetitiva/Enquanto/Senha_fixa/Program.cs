using System;
using System.Globalization;



namespace Senha_fixa
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int senha;

            System.Console.Write("Digite a senha:");
            senha = int.Parse(Console.ReadLine());

            while (senha != 2002) {
                System.Console.Write("Senha Invalida! Tente novamente:");
                senha = int.Parse(Console.ReadLine());
            }

            System.Console.WriteLine("Acesso permitido!");


            }

        }
    }
