package Java.Matrizes;

import java.util.Locale;
import java.util.Scanner;



public class Acima_diagonal {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int M, i, j, soma;
        
        
        System.out.print("Qual a ordem da matriz? ");
        M = sc.nextInt();



        int [][] mat = new int[M][M];


        System.out.println("Digite os valores da matriz A:");

        for (i = 0; i < M; i++) {
            for (j = 0; j < M; j++) {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j]= sc.nextInt();
            }
        }
        soma = 0;

        for (i = 0; i < M; i++) {
            
            for (j = 0; j < M; j++) {
                if (j > i) {
                    soma = soma + mat[i][j];
                }
            }
        }

        System.out.println("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " + soma);


        sc.close();
    }
}
