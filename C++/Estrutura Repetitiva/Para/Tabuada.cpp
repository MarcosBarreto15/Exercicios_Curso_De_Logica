#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

int main()
{

    int N, i;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> N;

    for (i = 1; i <= 10; i++)
    {
        cout << N << " X " << i << " = " << N * i << endl;
    }

    return 0;
}
