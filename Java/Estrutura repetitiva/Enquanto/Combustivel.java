import java.util.Locale;
import java.util.Scanner;

public class Combustivel {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int codigo, alcool, gasolina, diesel;

        System.out.print("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        codigo = sc.nextInt();

        alcool = 0;
        gasolina = 0;
        diesel = 0;
        while (codigo != 4) {
            switch (codigo) {
                case 1:
                    alcool = alcool + 1;
                    break;
            
                case 2:
                    gasolina = gasolina + 1;
                    break;

                case 3:
                    diesel = diesel + 1;
                    break;
            }
            System.out.print("Informe um codigo (1, 2, 3) ou 4 para parar: ");
            codigo = sc.nextInt();
        }

        System.out.println("Alcool: " + alcool);
        System.out.println("Gasolina: " + gasolina);
        System.out.println("Diesel: " + diesel);


        sc.close();

    }
}
