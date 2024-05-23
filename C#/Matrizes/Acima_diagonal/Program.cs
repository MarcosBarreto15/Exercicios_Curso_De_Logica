using System;
using System.Globalization;



namespace Acima_diagonal
{
    class Program
    {
        static void Main(string[] args)
        {
            CultureInfo CI = CultureInfo.InvariantCulture;

            int N;

            System.Console.Write("Qual a ordem da matriz? ");
            N = int.Parse(Console.ReadLine());

            int[,]mat = new int[N,N];

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    System.Console.Write("Elemento [" + i + "," + j + "]: ");
                    mat[i,j] = int.Parse(Console.ReadLine()); 
                }
            }

            int soma = 0;

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                   if (j > i)
                   {
                        soma = soma + mat[i,j];
                   }
                }
            } 

            System.Console.WriteLine("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " + soma);


        }
    }
}
