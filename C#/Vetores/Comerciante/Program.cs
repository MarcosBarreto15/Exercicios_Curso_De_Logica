using System;
using System.Globalization;



namespace Comerciante
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;

            System.Console.Write("Serao digitados dados d quantos produtos? ");
            N = int.Parse(Console.ReadLine());

                string[] nome = new string[N];
                double[] venda = new double[N];
                double[] compra = new double[N];

                    for (int i = 0; i < N; i++)
                    {
                        System.Console.WriteLine("Produto " + (i + 1));
                        System.Console.Write("Nome: ");
                        nome[i] = Console.ReadLine();
                        System.Console.Write("Preco de compra: ");
                        compra[i] = double.Parse(Console.ReadLine(), CI);
                        System.Console.Write("Preco de venda: ");
                        venda[i] = double.Parse(Console.ReadLine(), CI);
                    }

                    double[] lucro = new double[N];
                    
                    int abaixo = 0;
                    int entre = 0;
                    int acima = 0;

                    for (int i = 0; i < N; i++)
                    {
                        lucro[i] = (venda[i] - compra[i]) / compra[i] * 100.00;
                        if (lucro[i] < 10.0)
                        {
                            abaixo++;
                        }
                        else if (lucro[i] <= 20.0)
                        {
                            entre++;
                        }
                        else
                        {
                            acima++;
                        }
                    }

                    double TotCompra = 0;
                    double TotVenda = 0;
                    double LucroTot = 0;
                    
                    for (int i = 0; i <N; i++)
                    {
                        TotCompra = TotCompra + compra[i];
                        TotVenda = TotVenda + venda[i];
                        LucroTot = LucroTot + (venda[i] - compra[i]);
                    }

                    System.Console.WriteLine();
                    System.Console.WriteLine("RELATORIO: ");
                    System.Console.WriteLine("Lucro abaixo de 10%: " + abaixo);
                    System.Console.WriteLine("Lucro entre 10% e 20%: " + entre);
                    System.Console.WriteLine("Lucro acima de 20%: " + acima);
                    System.Console.WriteLine("Valor total de compra: " + TotCompra.ToString("F2", CI));
                    System.Console.WriteLine("Valor total de venda: " + TotVenda.ToString("F2", CI));
                    System.Console.WriteLine("Lucro total: " + LucroTot.ToString("F2", CI));


            }
        }
    }
