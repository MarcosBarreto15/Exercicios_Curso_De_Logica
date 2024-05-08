package Java.Matrizes;

import java.util.Locale;
import java.util.Scanner;



public class Diagonal_negativos {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int M, i, j;
        
        System.out.print("Qual a ordem da matriz? ");
        M = sc.nextInt();


        int [][] mat = new int[M][M];

        for (i = 0; i < M; i++) {
            for (j = 0; j < M; j++) {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j]= sc.nextInt();
            }
        }

        System.out.println("DIAGONAL PRINCIPAL:");

        for (i = 0; i < M; i++) {
            for (j = 0; j < M; j++) {
                if (i == j) {
                    System.out.print(mat[i][j] + " ");
                }
            }
        } 

        int cont = 0;

        for (i = 0; i < M; i++) {
            for (j = 0; j < M; j++) {
                if (mat[i][j] < 0) {
                    cont++;
                }
            }
        } 

        System.out.println();
        System.out.println("QUANTIDADE DE NEGATIVOS = " + cont);
    

        sc.close();
    }
}
