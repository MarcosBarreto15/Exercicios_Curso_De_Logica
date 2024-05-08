import java.util.Locale;
import java.util.Scanner;

public class Tempo_de_jogo {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int hi, hf, duracao;

        System.out.print("Hora inicial: ");
        hi = sc.nextInt();
        System.out.print("Hora final: ");
        hf = sc.nextInt();

        if (hi > hf) {
            duracao = 24 + hf - hi;
        } else if (hf > hi) {
            duracao = hf - hi;
        } else {
            duracao = 24;
        }

        System.out.println("O JOGO DUROU " + duracao + " HORA(S)");

        sc.close();

    }
}

