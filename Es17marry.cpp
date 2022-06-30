#include <iostream>
using namespace std;
#include <string>
/*.Scrivere un metodo che prenda in input una
matrice A di numeri interi e due double w e v, e
restituisca il valore booleano true se esiste almeno una
colonna di A in cui la media dei suoi elementi e
compresa tra w e v. NB: Si assuma che w <=v.*/

#define n 3
#define m 3
bool metodo(int A[n][m], double w, double v)
{

    int sommaCol;
    double media;
    int contatore;
    for (int i = 0; i < n; i++)
    {

        media = 0.0;
        sommaCol = 0;
        contatore = 0;

        for (int j = 0; j < m; j++)
        {

            sommaCol += A[j][i];
            contatore++;
        }
        media = static_cast<double>(sommaCol) / contatore;

        if (media >= w && media <= v)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    double w = 2;
    double v = 5;
    int A[n][m];

    A[0][0] = 3;
    A[0][1] = 3;
    A[0][2] = 3;

    A[1][0] = 3;
    A[1][1] = 3;
    A[1][2] = 3;

    A[2][0] = 3;
    A[2][1] = 3;
    A[2][2] = 3;

    cout << metodo(A, w, v);
}

//@_mr.teo