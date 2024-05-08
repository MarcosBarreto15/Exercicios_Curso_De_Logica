package Java.Matrizes;

import java.util.Locale;
import java.util.Scanner;



public class Soma_matrizes {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int M, N, i, j;
        
        
        System.out.print("Quantas linhas vai ter cada matriz? ");
        M = sc.nextInt();
        System.out.print("Quantas linhas vai ter cada matriz? ");
        N = sc.nextInt();


        int [][] A = new int[M][N];
        int [][] B = new int[M][N];
        int [][] C = new int[M][N];

        System.out.println("Digite os valores da matriz A:");

        for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                A[i][j]= sc.nextInt();
            }
        }

            System.out.println("Digite os valores da matriz B:");

            for (i = 0; i < M; i++) {
                for (j = 0; j < N; j++) {
                    System.out.print("Elemento [" + i + "," + j + "]: ");
                    B[i][j]= sc.nextInt();
                }
            }

                for (i = 0; i < M; i++) {
                    for (j = 0; j < N; j++) {
                        C[i][j]= A[i][j] + B[i][j];
                    } 
                }  
                
                System.out.println("MATRIZ SOMA: ");

                for (i = 0; i < M; i++) {
                    for (j = 0; j < N; j++) {
                        System.out.print(C[i][j] + " ");
                    } 
                    System.out.println();
                }  


        sc.close();
    }
}