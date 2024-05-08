import java.util.Locale;
import java.util.Scanner;

public class Par_impar {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int x, i, N;

        System.out.print("Quantos numeros voce vai digitar? ");
        N = sc.nextInt();

        for (i = 1; i <= N; i++) {
            System.out.print("Digite um numero: ");
            x = sc.nextInt();
            if (x == 0) {
                System.out.println("NULO");
            }

            else if (x % 2 == 0) {
                if(x > 0){
                    System.out.println("PAR POSITIVO");
                }
                else {
                    System.out.println("PAR NEGATIVO");
                }
            }

            else if (x % 2 != 0) {
                if (x > 0) {
                    System.out.println("IMPAR POSITIVO");
                }
                else {
                    System.out.println("IMPAR NEGATIVO");
                }
            }
        }


        sc.close();

    }
}