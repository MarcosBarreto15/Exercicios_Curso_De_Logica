using System;
using System.Globalization;



namespace Glicose
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            double medida;

            System.Console.Write("Digite a medida da glicose: ");
            medida = double.Parse(Console.ReadLine(), CI);

            if (medida <= 100.00) {
                System.Console.WriteLine("Classificacao: normal");
            }
            else if (medida <=140.00){
                System.Console.WriteLine("Classificacao: elevado");
            }
            else {
                System.Console.WriteLine("Classificacao: diabetes");
            }
            

        }
    }
}
