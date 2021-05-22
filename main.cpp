#include <iostream>

using namespace std;

int main()
{
    int cont = 0;
    double numero;
    cin >> numero;
    while (cont < 100){
        cout.precision(4);
        cout << "N[" << cont << "] = ";
        cout << fixed << numero <<endl;
        numero = numero / 2;
        cont++;
    }
    return 0;
}
