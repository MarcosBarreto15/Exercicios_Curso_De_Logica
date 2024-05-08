package Java.Vetores;

import java.util.Locale;
import java.util.Scanner;


public class Aprovados {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N, i;
        
        System.out.print("Quantos alunos serao digitados? ");
        N = sc.nextInt();

        double[] nota1 = new double[N];
        double[] nota2 = new double[N];
        String[] nome = new String[N];
        

        for (i = 0; i < N; i++) {
            System.out.println("Digite nome, primeira e segunda nota do " + (i + 1) + "o aluno: ");
            sc.nextLine();
        	nome[i] = sc.nextLine();
            nota1[i] = sc.nextDouble();
            nota2[i] = sc.nextDouble();
        }

        double[] media = new double[N];

        for (i = 0; i < N; i++) {
            media[i] = (nota1[i] + nota2[i]) / 2;
        }

        System.out.println("Alunos aprovados:");

        for (i = 0; i < N; i++) {
            if (media[i] >= 6.0) {
                System.out.println(nome[i]);
            }
        }

        sc.close();
    }
}
