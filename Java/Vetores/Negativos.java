package Java.Vetores;

import java.util.Locale;
import java.util.Scanner;


public class Negativos {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N, i;

        System.out.print("Quantos numeros voce vai digitar? ");
        N = sc.nextInt();

        int[] vet = new int[N];

        for (i = 0; i < N; i++) {
            System.out.print("Digite um numero: ");
            vet[i] = sc.nextInt();
        }

        System.out.println();
        System.out.println("NUMEROS NEGATIVOS:");

        for (i = 0; i < N; i++) {
            if (vet[i] < 0) {
                System.out.println(vet[i]);
            }
        }

        sc.close();

    }
}
