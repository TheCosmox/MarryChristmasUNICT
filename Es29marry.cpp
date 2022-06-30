#include <iostream>
using namespace std;
#include <cmath>
#include <string>

/*.Scrivere un metodo che prenda in input una
matrice quadrata A di numeri interi ed un double w, e
restituisca il valore booleano true se il rapporto tra il
minimo ed il massimo valore della diagonale
secondaria di A e minore o uguale a w. */

int metodo(int **A, int n, int m, double w)
{

    int maggiore = A[n - 1][0];
    int minore = A[n - 1][0];

    for (int i = 0; i < n; i++)
    {

        if (A[i][n - i - 1] > maggiore)
        {
            maggiore = A[i][n - i - 1];
        }
        if (A[i][n - i - 1] < minore)
        {
            minore = A[i][n - i - 1];
        }
    }
    double rapporto = static_cast<double>(maggiore) / minore;
    cout << "maggiore: " << maggiore << " "
         << "minore: " << minore << endl;

    if (rapporto >= w)
    {
        return true;
    }
    return false;
}

int main()
{
    int n = 3;
    int m = 3;
    double w = 1.8;

    int **A = new int *[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> A[j][i];
        }
    }
    cout << metodo(A, n, m, w);
}
//@_mr.teo