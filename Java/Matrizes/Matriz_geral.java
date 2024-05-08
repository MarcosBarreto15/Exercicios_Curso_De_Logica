package Java.Matrizes;

import java.util.Locale;
import java.util.Scanner;



public class Matriz_geral {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int M, i, j, linha, coluna;
        double somaPositivos;
        
        
        System.out.print("Qual a ordem da matriz? ");
        M = sc.nextInt();



        double [][] mat = new double[M][M];


        System.out.println("Digite os valores da matriz A:");

        for (i = 0; i < M; i++) {
            for (j = 0; j < M; j++) {
                System.out.print("Elemento [" + i + "," + j + "]: ");
                mat[i][j]= sc.nextDouble();
            }
        }
        somaPositivos = 0;

        for (i = 0; i < M; i++) {
            
            for (j = 0; j < M; j++) {
                if (mat[i][j] >= 0) {
                    somaPositivos = somaPositivos + mat[i][j];
                }
            }
        }

        System.out.println();
        System.out.println("SOMA DOS POSITIVOS = " + String.format("%.1f", somaPositivos));

        System.out.println();
        System.out.print("Escolha uma linha: ");
        linha = sc.nextInt();
        System.out.print("LINHA ESCOLHIDA:");

        for (i = 0; i < M; i++) {
            
            for (j = 0; j < M; j++) {
                if (linha == i){
                    System.out.print(mat[i][j] + "  ");
                }
            }
        }

        System.out.println();
        System.out.println();
        System.out.print("Escolha uma coluna: ");
        coluna = sc.nextInt();
        System.out.print("COLUNA ESCOLHIDA:");

        for (i = 0; i < M; i++) {
            
            for (j = 0; j < M; j++) {
                if (coluna == j){
                    System.out.print(mat[i][j] + "  ");
                }
            }
        }

        System.out.println();
        System.out.println();
        System.out.print("DIAGONAL PRINCIPAL: ");


        for (i = 0; i < M; i++) {
            
            for (j = 0; j < M; j++) {
                if (i == j){
                    System.out.print(mat[i][j] + "  ");
                }
            }
        }

        for (i = 0; i < M; i++) {
            
            for (j = 0; j < M; j++) {
                if (mat[i][j] < 0){
                    mat[i][j] = mat[i][j] * mat[i][j]; 
                }
            }
        }


        System.out.println();
        System.out.println();
        System.out.println("MATRIZ ALTERADA: ");


        for (i = 0; i < M; i++) {
            
            for (j = 0; j < M; j++) {
                System.out.print(mat[i][j] + "  ");
            }
            System.out.println();
        }
      


        sc.close();
    }
}