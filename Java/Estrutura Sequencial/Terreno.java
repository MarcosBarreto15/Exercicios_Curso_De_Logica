import java.util.Locale;
import java.util.Scanner;

public class Terreno {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double largura, comprimento, area, valor, preco;

        System.out.print("Digite a largura do terreno:");
        largura = sc.nextDouble();

        System.out.print("Digite o comprimento do terreno: ");
        comprimento = sc.nextDouble();

        System.out.print("Digite o valor do metro quadrado: ");
        valor = sc.nextDouble();

        area = largura * comprimento;

        preco = valor * area;

        System.out.println("Area do terreno = " + String.format("%.2f", area));
        System.out.println("Preco do terreno = " + String.format("%.2f", preco));

        sc.close();

    }
}
