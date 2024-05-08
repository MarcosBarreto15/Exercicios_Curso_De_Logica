package Java.Vetores;

import java.util.Locale;
import java.util.Scanner;

import javax.print.DocFlavor.STRING;

public class Alturas {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N, i;
        
        
        System.out.print("Quantos pessoas serao digitadas ? ");
        N = sc.nextInt();

        int[] idade = new int[N];
        double[] altura = new double[N];
        String[] nome = new String[N];



        for (i = 0; i < N; i++) {
            System.out.println("Dados da " + (i + 1) + "a pessoa: ");
            System.out.print("Nome: ");
            sc.nextLine();
            nome[i] = sc.nextLine();
            System.out.print("Idade: ");
            idade[i] = sc.nextInt();
            System.out.print("Altura: ");
            altura[i] = sc.nextDouble();

        }

        double soma = 0;

         for (i = 0; i < N; i++) {
            soma = soma + altura[i];
         }

         double media = (double)soma / N;

         System.out.println();
         System.out.println("Altura media: " + String.format("%.2f", media));

         int cont = 0;

         for (i = 0; i < N; i++) {
            if (idade[i] < 16) {
                cont++;
            }
         }

         double perc = (double)cont / N * 100.00;

         System.out.println("Pessoas com menos de 16 anos: " + String.format("%.1f", perc) + "%");


         for(i = 0; i < N; i++) {
            if (idade[i] < 16) {
                System.out.println(nome[i]);
            } 
         }


        sc.close();

    }
}
