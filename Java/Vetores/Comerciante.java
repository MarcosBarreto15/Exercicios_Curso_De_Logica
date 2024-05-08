package Java.Vetores;

import java.util.Locale;
import java.util.Scanner;



public class Comerciante {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N, i;
        
        System.out.print("Serao digitados dados de quantos produtos? ");
        N = sc.nextInt();

        double[] venda = new double[N];
        double[] compra = new double[N];
        String[]nome = new String[N];
        

        for (i = 0; i < N; i++) {
            System.out.println("Produto " + (i + 1) + " :");
            System.out.print("Nome: ");
            sc.nextLine();
            nome[i] = sc.nextLine();
            System.out.print("Preco de compra: ");
            compra[i] = sc.nextDouble();
            System.out.print("Preco de venda: ");
            venda[i] = sc.nextDouble();
        }

        double[] lucro = new double[N];

        int menor = 0;
        int entre = 0;
        int acima = 0;

        for (i = 0; i < N; i++) {
            lucro[i] = (venda[i] - compra[i]) / compra[i] * 100.00;
            if (lucro[i] < 10) {
                menor++;
            }
            else if (lucro[i] <= 20) {
                entre++;
            }
            else {
                acima++;
            } 
        }

        System.out.println();
        System.out.println("RELATORIO:");
        System.out.println("Lucro abaixo de 10%: " + menor);
        System.out.println("Lucro entre 10% e 20%: " + entre);
        System.out.println("Lucro acima de 20%: " + acima);

        double totvenda = 0;
        double totcompra = 0;
        double lucrotot = 0;
        
        for (i = 0; i < N; i++) {
            totcompra = totcompra + compra[i];
            totvenda = totvenda + venda[i];
            lucrotot = lucrotot + (venda[i] - compra[i]);
        }

        System.out.println("Valor total de compra: " + String.format("%.2f", totcompra));
        System.out.println("Valor total de venda: " + String.format("%.2f", totvenda));
        System.out.println("Lucro total: " + String.format("%.2f", lucrotot));


        sc.close();
    }
}
