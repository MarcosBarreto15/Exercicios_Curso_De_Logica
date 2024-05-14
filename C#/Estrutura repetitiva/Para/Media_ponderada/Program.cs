using System;
using System.Globalization;



namespace Media_ponderada
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;
            double a, b, c, media;

            System.Console.Write("Quantos casos voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

            for (int i = 1; i <= N; i++)
            {
                System.Console.WriteLine("Digite tres numeros: ");
                a = double.Parse(Console.ReadLine(), CI);
                b = double.Parse(Console.ReadLine(), CI);
                c = double.Parse(Console.ReadLine(), CI);

                media = ((a * 2) + (b * 3) + (c * 5)) / 10;
                System.Console.WriteLine("MEDIA = " + media.ToString("F1", CI));

            }


            }

        }
    }
