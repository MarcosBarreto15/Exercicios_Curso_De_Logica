import java.util.Locale;
import java.util.Scanner;

public class Sequencia_impares {
        public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int x, i;

        System.out.print("Digite o valor de x: ");
        x = sc.nextInt();


        for (i = 1 ; i <= x; i++) {
            if (i % 2 != 0) {
                System.out.println(i);
            }
        }


        sc.close();

    }
}
