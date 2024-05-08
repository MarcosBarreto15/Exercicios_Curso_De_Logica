#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i, qtde, coelho, rato, sapo, total;
    char tipo;
    double percC, percR, percS;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> N;

    coelho = 0;
    rato = 0;
    sapo = 0;
    for (i = 1; i <= N; i++)
    {
        cout << "Quantidade de cobaias? ";
        cin >> qtde;
        cout << "Tipo da cobaia: ";
        cin >> tipo;
        if (tipo == 'C')
        {
            coelho = coelho + qtde;
        }
        else if (tipo == 'R')
        {
            rato = rato + qtde;
        }
        else
        {
            sapo = sapo + qtde;
        }
    }

    cout << endl;
    total = coelho + rato + sapo;
    percC = (double)coelho / total * 100;
    percS = (double)sapo / total * 100;
    percR = (double)rato / total * 100;

    cout << "RELATORIO FINAL: " << endl;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhoe: " << coelho << endl;
    cout << "Total de ratos: " << rato << endl;
    cout << "Total de sapos: " << sapo << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percC << endl;
    cout << "Percentual de ratos: " << percR << endl;
    cout << "Percentual de sapos: " << percS << endl;
    

    return 0;
}