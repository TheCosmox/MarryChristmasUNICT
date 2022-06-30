#include <iostream>
using namespace std;
#include <cmath>
#include <string>

/*.Scrivere un metodo che prenda in input una
matrice di double D ed un intero a, e restituisca il
valore booleano true se esiste almeno una colonna in
D nella quale la somma di una qualsiasi coppia di
elementi adiacenti, approssimata all'intero piu vicino,
sia uguale ad a*/

bool metodo(double ***D, int n, int m, int a)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {

            if (D[j - 1][i] && D[j][i])
            {
                double attuale = *D[j - 1][i];
                double successivo = *D[j][i];

                double somma = attuale + successivo;
                if (round(somma) == a)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    int n = 3;
    int m = 3;

    double a = 2;

    double ***D = new double **[n];
    for (int i = 0; i < n; i++)
    {
        D[i] = new double *[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            D[j][i] = new double();
            cin >> *D[j][i];
        }
    }

    cout << metodo(D, n, m, a);
}
//@_mr.teo