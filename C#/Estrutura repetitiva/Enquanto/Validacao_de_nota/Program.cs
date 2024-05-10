using System;
using System.Globalization;



namespace Validacao_de_nota
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            double nota1, nota2, media;

            System.Console.Write("Digite a primeira nota: ");
            nota1 = double.Parse(Console.ReadLine(), CI);
            while (nota1 < 0.0 || nota1 > 10.0) {
                System.Console.Write("Valor invalido! Tente novamente:");
                nota1 = double.Parse(Console.ReadLine(), CI);
            }

            System.Console.Write("Digite a segunda nota: ");
            nota2 = double.Parse(Console.ReadLine(), CI);
            while (nota2 < 0.0 || nota2 > 10.0) {
                System.Console.Write("Valor invalido! Tente novamente:");
                nota2 = double.Parse(Console.ReadLine(), CI);
            }  

            media =  (nota1 + nota2)/ 2.0;

            System.Console.Write("MEDIA = " + media.ToString("F2", CI));        


            }

        }
    }
