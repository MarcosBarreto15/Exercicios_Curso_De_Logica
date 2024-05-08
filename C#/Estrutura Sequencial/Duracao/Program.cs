using System;
using System.Globalization;



namespace Duracao
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
       int duracao, segundos, minutos, horas;

        System.Console.Write("Digite a duracao em segundos: ");
        duracao = int.Parse(Console.ReadLine());

        horas = duracao / 3600;
        minutos = (duracao % 3600) / 60;
        segundos = (duracao % 3600) % 60;

        System.Console.WriteLine(horas + ":" + minutos + ":" + segundos);




        }
    }
}
