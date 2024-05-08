import java.util.Locale;
import java.util.Scanner;



public class Experiencias {
    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        int i, N, qtde, rato, coelho, sapo, total;
        char tipo;
        double perC, perR, perS;
        
        System.out.print("Quantos casos de testes serao digitados? ");
        N = sc.nextInt();


        rato = 0;
        coelho = 0;
        sapo = 0;
        total = 0;

        for (i = 1; i <= N; i ++) {
            System.out.print("Quantidade de cobaias: ");  
            qtde = sc.nextInt();
            System.out.print("Tipo de cobaia: "); 
            tipo =  sc.next().charAt(0);

            if (tipo == 'C') {
                coelho = coelho + qtde;
            }
            else if (tipo == 'S') {
                sapo = sapo + qtde;
            }
            else if (tipo == 'R'){
                rato = rato + qtde;
            }

            total = total + qtde;

            }

            perC = ((double)coelho / total) * 100.0;
            perS = ((double)sapo / total) * 100.0;
            perR = ((double)rato  / total) * 100.0;

            System.out.println("\n");
            System.out.println("RELATORIO FINAL:");
            System.out.println("Total: " + total + " cobaias");
            System.out.println("Total de coelhos: " + coelho);
            System.out.println("Total de ratos: " + rato);
            System.out.println("Total de sapos: " + sapo );
            System.out.println("Percentual de coelhos: " + String.format("%.2f", perC ));
            System.out.println("Percentual de ratos: " + String.format("%.2f", perR ));
            System.out.println("Percentual de sapos: " + String.format("%.2f", perS ));

    

        sc.close();

    }
}
