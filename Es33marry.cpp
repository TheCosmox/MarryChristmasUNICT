
#include <iostream>
using namespace std;
#include <string>
/*.Scrivere un metodo che prenda in input una
matrice quadrata A di puntatori ad interi e restituisca
un double calcolato come il rapporto tra la somma
degli elementi della diagonale principale di A e la
somma degli elementi della diagonale secondaria diA
stessa. NB: Si presti attenzione ai numeri mancanti!.*/

double metodo(int ***A, int n, int m)
{
    double rapporto = 0.0;
    int principale = 0;
    int secondaria = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i][i])
        {
            principale += *A[i][i];
        }
        if (A[i][n - i - 1])
        {
            secondaria += *A[i][n - i - 1];
        }
    }
    rapporto = static_cast<double>(principale) / secondaria;

    cout << principale << " / " << secondaria << "= ";
    return rapporto;
}

int main()
{

    int n = 2;
    int m = 3;
    int ***A = new int **[n];
    for (int i = 0; i < m; i++)
    {
        A[i] = new int *[m];
        for (int j = 0; j < m; j++)
        {
            A[i][j] = new int();
            cin >> *A[i][j];
        }
    }

    cout << metodo(A, n, m);
}



//_@mr.teo