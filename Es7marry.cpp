#include <iostream>
#include <string>
using namespace std;

/*Scrivere un metodo che prenda in input un
parametro formale matrice A di puntatori ad interi di
dimensione nxm, due double d1 e d2 ed uno short s, e
restituisca il numero di colonne di A nelle quali
esistano almeno s coppie di elementi contigui (ES:
A[1][1] e A[2][1]) tali che il rapporto tra il primo ed il
secondo elemento sia compreso tra d1 e d2. NB: Si
assuma a priori che s<=n-1 e che d1 < d2. Si presti
attenzione ai numeri "mancanti"nella matrice A.*/

#define n 3
#define m 3

int metodo(int *A[n][m], double d1, double d2, short s)
{
    double rapporto;
    int contatore;
    int contatoreCol = 0;
    for (int i = 0; i < n; i++)
    {
        rapporto = 0.0;
        contatore = 0;
        for (int j = 1; j < n; j++)
        {

            if (A[i][j - 1] && A[i][j])
            {
                int attuale = *A[i][j - 1];
                int successivo = *A[i][j];
                rapporto = static_cast<double>(attuale) / successivo;

                if (rapporto > d1 && rapporto < d2)
                {
                    contatore++;
                }
            }
        }
        if (contatore >= s)
        {
            contatoreCol++;
        };
    }
    return contatoreCol;
}

int main()
{

    int *Q[n][m];

    Q[0][0] = new int(2);
    Q[0][1] = new int(10);
    Q[0][2] = new int(2);

    Q[1][0] = new int(2);
    Q[1][1] = new int(10);
    Q[1][2] = new int(2);

    Q[2][0] = new int(2);
    Q[2][1] = new int(10);
    Q[2][2] = new int(2);

    double d1 = 2;
    double d2 = 10;
    short s = 1;

    cout << metodo(Q, d1, d2, s);
}

//@_mr.teo