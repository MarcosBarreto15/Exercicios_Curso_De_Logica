package Java.Vetores;

import java.util.Locale;
import java.util.Scanner;


public class Abaixo_da_media {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);


        int N, i;
        
        
        System.out.print("Quantos elementos vai ter 0 vetor? ");
        N = sc.nextInt();

        double[] vet = new double[N];


        for (i = 0; i < N; i++) {
            System.out.print("Digite um numero: ");
            vet[i] = sc.nextDouble();
        }
        
        double soma = 0;
        
        for (i = 0; i < N; i++) {
        	soma = soma + vet[i];
        }
        
        double media = (double) soma / N;
        
        System.out.println();
        System.out.println("MEDIA DO VETOR: " + String.format("%.3f", media));
        
        for (i = 0; i < N; i++) {
        	if (vet[i] < media) {
        		System.out.println(vet[i]);
        	}
        }

    }

}