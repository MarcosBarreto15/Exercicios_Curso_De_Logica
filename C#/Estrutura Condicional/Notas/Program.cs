﻿using System;
using System.Globalization;


namespace Notas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            double nota1, nota2, notafinal;

            Console.Write("Digite a primeira nota: ");
            nota1 = double.Parse(Console.ReadLine(), CI);
            
            Console.Write("Digite a segunda nota: ");
            nota2 = double.Parse(Console.ReadLine(), CI);

            notafinal = nota1 + nota2;

            Console.WriteLine("NOTA FINAL = " + notafinal.ToString("F1", CI));

            if (notafinal < 60.00) {
                Console.WriteLine("REPROVADO");
            }


        }
    }
}
