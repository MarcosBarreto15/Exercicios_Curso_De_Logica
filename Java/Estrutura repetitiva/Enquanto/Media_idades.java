import java.util.Locale;
import java.util.Scanner;

public class Media_idades {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int idade, cont, soma;
        double media;

        System.out.println("Digite as idades: ");
        idade = sc.nextInt();

        cont = 0;
        soma = 0;
        if (idade < 0) {
            System.out.println("IMPOSSIVEL CALCULAR");
        } else {
            while (idade >= 0) {
                cont = cont + 1;
                soma = soma + idade;
                idade = sc.nextInt();
            }
            media = (double) soma / cont;

            System.out.println("MEDIA = " + String.format("%.2f", media));
        }

        sc.close();

    }
}

