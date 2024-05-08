package Java.Vetores;

import java.util.Locale;
import java.util.Scanner;


public class Media_pares {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);


        int N, i;
        
        
        System.out.print("Quantos elementos vai ter 0 vetor? ");
        N = sc.nextInt();

        int[] vet = new int[N];


        for (i = 0; i < N; i++) {
        	System.out.print("Digite um numero: ");
        	vet[i] = sc.nextInt();
        }
        
        int cont = 0;
        int soma = 0;
        double media = 0;
        
        for (i = 0; i < N; i++) {
        	if (vet[i] % 2 == 0) {
        		cont++;
        		soma = soma + vet[i];
        	}	
        }
        
        	if (cont == 0) {
        		System.out.println("NENHUM NUMERO PAR");
        	}
        	else {
        		 media = (double) soma / cont;
        		System.out.println("MEDIA DOS PARES = " + String.format("%.1f", media));
        	}
        
        sc.close();

    }
}
