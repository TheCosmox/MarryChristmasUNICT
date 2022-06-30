#include <iostream>
#include <string>
using namespace std;

/*Scrivere un metodo che prenda come parametri
formali una matrice A n×m di long ed un long x, e
restituisca in output l’indice della colonna di A con il
maggior numero di occorrenze di x.*/

#define n 3
#define m 3
int metodo(long A[n][m], long x)
{
    int colmax = 0;
    int contatore;
    int colScelta = 0;

    for (int i = 0; i < n; i++)
    {
        contatore = 0;
        for (int j = 0; j < m; j++)
        {

            if (A[j][i] == x)
            {
                contatore++;
            }
        }
        if (contatore > colmax)
        {
            colScelta = i;
            colmax = contatore;
        }
    }
    return colScelta;
}

int main()
{
    long x = 3;
    long A[n][m];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cin >> A[j][i];
        }
    }
    cout << metodo(A, x);
}


//@_mr.teo