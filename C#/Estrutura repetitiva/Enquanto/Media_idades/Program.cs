﻿using System;
using System.Globalization;


namespace Media_idades
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int idade, cont, soma;
            double media;

            System.Console.WriteLine("Digite as idades:");
            idade = int.Parse(Console.ReadLine());
            if (idade < 0) {
                System.Console.WriteLine("IMPOSSIVEL CALCULAR");
            }
            else {
                cont = 0;
                soma = 0;
                while (idade >= 0) {
                    cont++;
                    soma = soma + idade;
                    idade = int.Parse(Console.ReadLine());
                }
                media = (double)soma / cont;
                System.Console.WriteLine("MEDIA = " + media.ToString("F2", CI));
            }


            }

        }
    }
