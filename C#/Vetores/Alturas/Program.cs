using System;
using System.Globalization;



namespace Alturas
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;
            

            System.Console.Write("Quantas pessoas serao digitadas? ");
            N = int.Parse(Console.ReadLine());

                string[] nome = new string[N];
                int[] idade = new int[N];
                double[] altura = new double[N];

                for (int i = 0; i < N; i++)
                {
                    System.Console.WriteLine("Dados da " + (i + 1) + "a pessoa: ");
                    System.Console.Write("Nome: ");
                    nome[i] = Console.ReadLine();
                    System.Console.Write("Idade: ");
                    idade[i] = int.Parse(Console.ReadLine());
                    System.Console.Write("Altura: ");
                    altura[i] = double.Parse(Console.ReadLine(), CI);
                }

                double soma = 0;

                for (int i = 0; i < N; i++)
                {
                    soma = soma + altura[i];
                }

                double media = (double)soma / N;
                System.Console.WriteLine();
                System.Console.WriteLine("Altura média: " + media.ToString("F2", CI));

                int menor = 0;

                for (int i = 0; i < N; i++)
                {
                    if (idade[i] < 16)
                    {
                        menor++;
                    }
                }

                double percMenor = (double)menor * 100 / N;

                System.Console.WriteLine("Pessoas com menos de 16 anos: " + percMenor.ToString("F1", CI) + "%");

                for (int i = 0; i <N; i++)
                {
                    if (idade[i] < 16)
                    {
                        System.Console.WriteLine(nome[i]);
                    }
                }


            }

        }
    }
