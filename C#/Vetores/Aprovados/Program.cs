using System;
using System.Globalization;



namespace Aprovados
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;
            double media;

            System.Console.Write("Quantos alunos serao digitados? ");
            N = int.Parse(Console.ReadLine());

                string[] nome = new string[N];
                double[] nota1 = new double[N];
                double[] nota2 = new double[N];


                for (int i = 0; i < N; i++)
                {
                    System.Console.WriteLine("Digite nome, primeira e segunda nota do " + (i + 1) + "o aluno: ");
                    nome[i] = Console.ReadLine();
                    nota1[i] = double.Parse(Console.ReadLine(), CI);
                    nota2[i] = double.Parse(Console.ReadLine(), CI);
                }

                System.Console.WriteLine("Alunos aprovados: ");

                for (int i = 0; i < N; i++)
                {
                     media = (nota1[i] + nota2[i]) / 2.0;
                     if (media >= 6.0)
                    {
                        System.Console.WriteLine(nome[i]);
                    }
                }
                
            }
        }
    }
