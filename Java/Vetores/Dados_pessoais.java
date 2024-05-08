package Java.Vetores;

import java.util.Locale;
import java.util.Scanner;



public class Dados_pessoais {
    public static void main(String[] args) throws Exception {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int N, i;
        
        System.out.print("Quantas pessoas serao digitadas? ");
        N = sc.nextInt();

        double[] altura = new double[N];
        char[] sexo = new char[N];
        

        for (i = 0; i < N; i++) {
            System.out.print("Altura da " + (i + 1) + "a pessoa: " );
            altura[i] = sc.nextDouble();
            System.out.print("Sexo da " + (i + 1) + "a pessoa: ");
            sexo[i] = sc.next().charAt(0);
        }

        double menor = altura[0];

        for (i = 0; i < N; i++) {
            if (altura[i] < menor) {
                menor = altura[i];
            }
        }

        System.out.println("Menor altura = " + String.format("%.2f", menor));

        double maior = altura[0];

        for (i = 0; i < N; i++) {
            if (altura[i] > maior) {
                maior = altura[i];
            }
        }

        System.out.println("Maior altura = " + String.format("%.2f", maior));

        double somaF = 0;
        int contF = 0;
        double mediaF = 0;

        for (i = 0; i < N; i++) {
            if (sexo[i] == 'F') {
                contF++;
                somaF = somaF + altura[i];
            }
        }

        mediaF = somaF / contF;

        System.out.println("Media das alturas das mulhores = " + String.format("%.2f", mediaF));

        int contM = 0;

        for (i = 0; i < N; i++) {
            if (sexo[i] == 'M') {
                contM++;
            }
        }

        System.out.println("Numero de homens = " + contM);


        sc.close();
    }
}
