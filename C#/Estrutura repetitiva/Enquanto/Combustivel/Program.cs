using System;
using System.Globalization;



namespace Combustivel
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int alcool, gasolina, diesel, codigo;

            System.Console.Write("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            codigo = int.Parse(Console.ReadLine());

            alcool = 0;
            gasolina = 0;
            diesel = 0;

            while (codigo != 4)
            {
                switch (codigo)
                {
                    case 1:
                        alcool++;
                        break;
                    case 2:
                        gasolina++;
                        break;
                    case 3: 
                        diesel++;
                        break;
                }

            System.Console.Write("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            codigo = int.Parse(Console.ReadLine());    
                
            }

            System.Console.WriteLine("Alcool: " + alcool);
            System.Console.WriteLine("Gasolina: " + gasolina);
            System.Console.WriteLine("Diesel: " + diesel);


            }

        }
    }
