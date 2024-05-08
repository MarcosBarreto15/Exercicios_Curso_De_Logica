import java.util.Locale;
import java.util.Scanner;


public class Dentro_fora {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
    
        int x, i, N, dentro, fora;

        System.out.print("Quantos numeros voce vai digitar? ");
        N = sc.nextInt();
        
        
        dentro = 0; 
        fora = 0;

        for (i = 1 ; i <= N; i++) {
            System.out.print("Digite um numero: ");
            x = sc.nextInt();
            

            if (x >= 10 && x <= 20) {
                dentro = dentro + 1;
            }
            else {
                fora = fora + 1;
            }
           
        }

        

        System.out.println(dentro + " DENTRO");
        System.out.println(fora + " FORA");

        sc.close();
        

    }
}

