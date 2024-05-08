import java.util.Locale;
import java.util.Scanner;

public class Duracao {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int duracao, hora, minutos, segundos;

        System.out.print("Digite a duracao em segundos: ");
        duracao = sc.nextInt();

        hora = duracao / 3600;
        minutos = (duracao % 3600) / 60;
        segundos = (duracao % 3600) % 60;

        System.out.println(hora + ":" + minutos + ":" + segundos);

        sc.close();

    }
}
