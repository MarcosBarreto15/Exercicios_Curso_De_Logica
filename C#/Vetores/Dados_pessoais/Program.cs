using System;
using System.Globalization;



namespace Dados_pessoais
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, nHomens;
            double menor, maior, mediaMulheres, somaMulheres, contMulheres, contHomens;

            System.Console.Write("Quantas pessoas serao digitadas? ");
            N = int.Parse(Console.ReadLine());

                double[] altura = new double[N];
                char[] genero = new char[N];

                for (int i = 0; i < N; i++)
                {
                    System.Console.Write("Altura da " + (i + 1) + "a pessoa: ");
                    altura[i] = double.Parse(Console.ReadLine(), CI);
                    System.Console.Write("Genero da " + (i+ 1) + "a pessoa: ");
                    genero[i] = char.Parse(Console.ReadLine());
                }

                menor = altura[0];
                maior = altura[0];

                for (int i = 0; i < N; i++)
                {
                    if (altura[i] < menor)
                    {
                        menor = altura[i];
                    }
                    if (altura[i] > maior)
                    {
                        maior = altura[i];
                    }
                }

                System.Console.WriteLine("Menor altura = " + menor.ToString("F2", CI));
                System.Console.WriteLine("Maior altura = " + maior.ToString("F2", CI));

                somaMulheres = 0;
                contMulheres = 0;
                mediaMulheres = 0;
                contHomens = 0;

                for (int i = 0; i < N; i++)
                {
                    if (genero[i] == 'F')
                    {
                        somaMulheres = somaMulheres + altura[i];
                        contMulheres++;
                        mediaMulheres = (double)somaMulheres / contMulheres;
                    }
                    else
                    {
                        contHomens++;
                    }
                }

                System.Console.WriteLine("Media de altura das mulheres: " + mediaMulheres.ToString("F2", CI));
                System.Console.WriteLine("Numero de homens: " + contHomens);


            }
        }
    }
