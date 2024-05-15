﻿using System;
using System.Globalization;


namespace Idades
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;
            
            int idade1, idade2;
            string nome1, nome2;
            double idadeMedia;

            Console.WriteLine("Dados da primeira pessoa: ");
            Console.Write("Nome: ");
            nome1 = Console.ReadLine();
            Console.Write("Idade: ");
            idade1 = int.Parse(Console.ReadLine());


            
            Console.WriteLine("Dados da segunda pessoa: ");
            Console.Write("Nome: ");
            nome2 = Console.ReadLine();
            Console.Write("Idade: ");
            idade2 = int.Parse(Console.ReadLine());

            idadeMedia = (idade1 + idade2) / 2.0;

            Console.WriteLine("A idade media de  " + nome1 + " e " + nome2 + " é de " + idadeMedia.ToString("F1", CI) + " anos");


        }
    }
}