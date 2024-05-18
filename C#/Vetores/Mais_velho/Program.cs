using System;
using System.Globalization;



namespace Mais_velho
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;

            System.Console.Write("Quantas pessoas voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

                string[] nome = new string[N];
                int[] idade = new int[N];

                for (int i = 0; i < N; i++)
                {
                    System.Console.WriteLine("Dados da " + (i + 1) + "a pessoa:");
                    System.Console.Write("Nome:");
                    nome[i] = Console.ReadLine();
                    System.Console.Write("Idade: ");
                    idade[i] = int.Parse(Console.ReadLine());

                }

                int maior = idade[0];
                int maiorposicao = 0;

                for (int i = 0; i < N; i++)
                {
                    if (idade[i] > maior)
                    {
                        maior = idade[i];
                        maiorposicao = i;
                    }
                }

                System.Console.WriteLine("PESSOA MAIS VELHA: " + nome[maiorposicao]);


            }

        }
    }