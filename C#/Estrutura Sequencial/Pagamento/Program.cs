using System;
using System.Globalization;


namespace Pagamento
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            string nome;  
            int hrTrab;
            double valorHr, pagamento;

            System.Console.Write("Nome: ");
            nome = Console.ReadLine();
            System.Console.Write("Valor por hora: ");
            valorHr = double.Parse(Console.ReadLine(), CI);
            System.Console.Write("Horas trabalhadas: ");
            hrTrab = int.Parse(Console.ReadLine());

            pagamento = valorHr * hrTrab;


            System.Console.WriteLine("O pagamento para " + nome + " deve ser " + pagamento.ToString("F2", CI));


        }
    }
}

