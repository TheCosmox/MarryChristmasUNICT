#include <iostream>
using namespace std;
#include <string>

/*Scrivere un metodo che prenda in input tre matrici
A, B e C di boolean con le stesse dimensioni, e
restituisca un boolean che indichi se una diagonale in
A, soprastante la diagonale principale, è presente
anche in B e C (nella stessa posizione e con  la stessa
sequenza di valori!). */

#define n 3
#define m 3
bool metodo(bool *A[n][m], bool *B[n][m], bool *C[n][m])
{

    int contatore = 0;
    for (int i = 0; i < n; i++)
    {

        bool A1 = *A[i][i + 1];
        bool B1 = *B[i][i + 1];
        bool C1 = *C[i][i + 1];

        if (A1 == B1 && A1 == C1)
        {
            contatore++;
        }
    }
    if (contatore == (m - 1))
    {
        return true;
    }

    return false;
}

int main()
{

    bool *A[n][m];
    bool *B[n][m];
    bool *C[n][m];
    /*------------------*/
    A[0][0] = new bool(0);
    A[0][1] = new bool(1);
    A[0][2] = new bool(0);

    A[1][0] = new bool(0);
    A[1][1] = new bool(0);
    A[1][2] = new bool(1);

    A[2][0] = new bool(0);
    A[2][1] = new bool(0);
    A[2][2] = new bool(0);
    /*------------------*/
    B[0][0] = new bool(0);
    B[0][1] = new bool(1);
    B[0][2] = new bool(0);

    B[1][0] = new bool(0);
    B[1][1] = new bool(0);
    B[1][2] = new bool(1);

    B[2][0] = new bool(0);
    B[2][1] = new bool(0);
    B[2][2] = new bool(0);
    /*------------------*/
    C[0][0] = new bool(0);
    C[0][1] = new bool(1);
    C[0][2] = new bool(0);

    C[1][0] = new bool(0);
    C[1][1] = new bool(0);
    C[1][2] = new bool(1);

    C[2][0] = new bool(0);
    C[2][1] = new bool(0);
    C[2][2] = new bool(0);
    /*------------------*/

    cout << metodo(A, B, C);
}


//@_mr.teo