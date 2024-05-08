package Java.Matrizes;

import java.util.Locale;
import java.util.Scanner;



public class Cada_linha {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int M, i, maior, j;
        
        
        System.out.print("Qual a ordem da matriz?  ");
        M = sc.nextInt();



        int [][] mat = new int[M][M];

        for (i = 0; i < M; i++) {
            for (j = 0; j < M; j++) {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j]= sc.nextInt();
            }
        }

        System.out.println("MAIOR ELEMENTO DE CADA LINHA:");

        for (i = 0; i < M; i++) {
            maior = 0;
            for (j = 0; j < M; j++) {
                if (mat[i][j] > maior) {
                    maior = mat[i][j];
                }
            }
            System.out.println(maior);
        }


        sc.close();
    }
}
