using System;
using System.Globalization;

namespace Aumento
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            double sal, novosal, aumento; 
            int porcentagem;

            System.Console.Write("Digite o salario da pessoa: ");
            sal = double.Parse(Console.ReadLine(), CI);

            if (sal <= 1000.00) {
                porcentagem = 20;
            }
            else if (sal <= 3000.00) {
                porcentagem = 15;
            }
            else if (sal <= 8000.00) {
                porcentagem = 10;
            }
            else {
                porcentagem = 5;
            }

            aumento = sal * porcentagem / 100.00;
            novosal = sal + aumento;

        System.Console.WriteLine("Novo salario = R$ " + novosal.ToString("F2", CI));
        System.Console.WriteLine("Aumento = R$ " + aumento.ToString("F2", CI) );
        System.Console.WriteLine("Porcentagem = " + porcentagem + " %");



        }
    }
}
