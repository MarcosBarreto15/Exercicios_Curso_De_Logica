using System;
using System.Globalization;



namespace Maior_posicao
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, posicao;

            System.Console.Write("Quantos numeros voce vai digitar? ");
            N = int.Parse(Console.ReadLine());

                double[] vet = new double[N];

                for (int i = 0; i < N; i++)
                {
                    System.Console.Write("Digite um numero: ");
                    vet[i] = double.Parse(Console.ReadLine(), CI);
                }

                double maior = 0;
                posicao = 0;

                for (int i = 0; i < N; i++)
                {
                    if (vet[i] > maior)
                    {
                        maior = vet[i];
                        posicao = i;
                    }
                }

                System.Console.WriteLine();
                System.Console.WriteLine("MAIOR VALOR = " + maior.ToString("F1", CI));
                System.Console.WriteLine("POSICAO DO MAIOR VALOR = " + posicao);



            }

        }
    }
