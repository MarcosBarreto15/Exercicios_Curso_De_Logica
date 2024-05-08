package Java.Vetores;

import java.util.Locale;
import java.util.Scanner;

public class Mais_velho {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N, i, maior, posicao;
        
        
        System.out.print("Quantas pessoas voce vai digitar ");
        N = sc.nextInt();

        int[] idade = new int[N];
        String[] nome = new String[N];
        

        for (i = 0; i < N; i++) {
            System.out.println("Dadosda " + (i + 1) + "a pessoa:");
        	System.out.print("Nome: ");
            sc.nextLine();
        	nome[i] = sc.nextLine();
            System.out.print("Idade: ");
            idade[i] = sc.nextInt();
        }

        maior = idade[0];
        posicao = 0;
    
        for (i = 1; i < N; i++) {
            if (idade[i] > maior) {
                 maior = idade[i];
                 posicao = i;
            }
        }

        System.out.println("PESSOA MAIS VELHA: " + nome[posicao]);


        sc.close();
    }
}
