package Java.Matrizes;

import java.util.Locale;
import java.util.Scanner;



public class Soma_linha {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int M, N, i, j;
        double somalinha;
        
        System.out.print("Qual a quantidade de linhas da matriz? ");
        M = sc.nextInt();
        System.out.print("Qual a quantidade de colunas da matriz? ");
        N = sc.nextInt();


        double [][] mat = new double[M][N];

        for (i = 0; i < M; i++) {
            System.out.println("Digite os elementos da " + (i + 1) + "a linha:");
            for (j = 0; j < N; j++) {
                mat[i][j]= sc.nextDouble();
            }
        }

        double [] soma = new double[M];
        
        for (i = 0; i < M; i++) {
            somalinha = 0;
            for (j = 0; j < N; j++) {
                somalinha = somalinha + mat[i][j];
            }
            soma[i] = somalinha;
        }
        
        System.out.println("VETOR GERADO: ");

        for (i = 0; i < M; i++) {
            System.out.println(String.format("%.1f", soma[i]));
        }


     
        sc.close();
    }
}
