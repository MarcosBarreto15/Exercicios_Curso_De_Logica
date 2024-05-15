using System;
using System.Globalization;



namespace Experiencias
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N, qtde, coelho, rato, sapo, total;
            char tipo;
            double perC, perR, perS;

            System.Console.Write("Quantos casos de teste serao digitados?");
            N = int.Parse(Console.ReadLine());


                coelho = 0;
                rato = 0;
                sapo = 0;

                for (int i = 1; i <= N; i++)
                {
                    System.Console.Write("Quantidade de cobaias: ");
                    qtde = int.Parse(Console.ReadLine());

                    System.Console.Write("Tipo de cobaia: ");
                    tipo = char.Parse(Console.ReadLine());

                    if (tipo == 'C')
                    {
                        coelho = coelho + qtde;
                    }
                    else if (tipo == 'R')
                    {
                        rato = rato + qtde;
                    }
                    else if (tipo == 'S')
                    {
                        sapo = sapo + qtde;
                    }

                }

                total = coelho + sapo + rato;
                perC = (double)coelho / total * 100;
                perR = (double)rato / total * 100;
                perS = (double)sapo / total * 100;

                System.Console.WriteLine("Total: " + total + " cobaias");
                System.Console.WriteLine("Total de coelhos: " + coelho);
                System.Console.WriteLine("Total de ratos: " + rato);
                System.Console.WriteLine("Total de sapos: " + sapo);
                System.Console.WriteLine("Percentual de coelhos: " + perC.ToString("F2", CI));
                System.Console.WriteLine("Percentual de ratos: " + perR.ToString("F2", CI));
                System.Console.WriteLine("Percentual de sapos: " + perS.ToString("F2", CI));



            }

        }
    }
