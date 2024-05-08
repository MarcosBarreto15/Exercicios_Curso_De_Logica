package Java.Vetores;

import java.util.Locale;
import java.util.Scanner;


public class Numeros_pares {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);


        int N, i;
        
        
        System.out.print("Quantos numeros vc vai digitar? ");
        N = sc.nextInt();

        int[] vet = new int[N];

        for (i = 0; i < N; i++) {
            System.out.print("Digite um numero: ");
            vet[i] = sc.nextInt();
        }

        System.out.println();
        System.out.println("NUMEROS PARES:");

        int cont = 0;

        for (i = 0; i < N; i++) {
            if (vet[i] % 2 == 0) {
                cont++;
                System.out.print(vet[i] + "  ");
            }
        }

        System.out.println();
        System.out.println();
        System.out.println("QUANTIDADE DE PARES = " + cont);


        sc.close();


    }
}
