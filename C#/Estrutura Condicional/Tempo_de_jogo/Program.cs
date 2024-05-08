using System;
using System.Globalization;


namespace Tempo_de_jogo
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int hi, hf, duracao;

            System.Console.Write("Hora inicial: ");
            hi = int.Parse(Console.ReadLine());
            
            System.Console.Write("Hora final: ");
            hf = int.Parse(Console.ReadLine());

            if (hi > hf) {
                duracao = 24 - hi + hf;
            }
            else if (hi == hf) {
                duracao = 24;
            }
            else {
                duracao = hf - hi;
            }

            System.Console.WriteLine("O JOGO DUROU " + duracao + " HORA(S)");

            

        }
    }
}
