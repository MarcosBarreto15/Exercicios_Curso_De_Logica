import java.util.Locale;
import java.util.Scanner;


public class Media_ponderada {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int i, N;
        double a, b, c, media;

        System.out.print("Quantos casos voce vai digitar? ");
        N = sc.nextInt();

        for (i = 1; i <= N; i++) {
            System.out.println("Digite tres numeros:");
            a = sc.nextDouble();
            b = sc.nextDouble();
            c = sc.nextDouble();

            a = a * 2;
            b = b * 3;
            c = c * 5;
            media = (a + b + c) / 10;
            System.out.println("MEDIA = " + String.format("%.1f", media));
            
        }

        sc.close();

    }
}
