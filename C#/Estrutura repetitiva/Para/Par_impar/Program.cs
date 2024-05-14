using System;
using System.Globalization;



namespace Par_impar
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, x;

            System.Console.Write("Quantos numeros voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            for (int i = 1; i <= N; i++)
            {
                System.Console.Write("Digite um numero: ");
                x = int.Parse(Console.ReadLine());
                
                if (x == 0)
                {
                    System.Console.WriteLine("NULO");
                }
                else  
                {
                    if (x % 2 == 0) 
                    {
                        System.Console.Write("PAR ");
                    }
                    else
                    {
                        System.Console.Write("IMPAR ");
                    }
                    if (x > 0)
                    {
                        System.Console.WriteLine("POSITIVO");
                    }
                    else 
                    {
                        System.Console.WriteLine("NEGATIVO");
                    } 
                }

            
            }

        }
    }
}
