#include <iostream>
using namespace std;
#include <string>

/*Scrivere un metodo che prenda come parametri
formali una matrice quadrata A n×n di puntatori a char
e restituisca in output un bool che indichi se esiste una
colonna in A identica alla diagonale principale di A.*/

#define n 3
bool metodo(char *A[n][n])
{

    int contatore;
    for (int i = 0; i < n; i++)
    {
        contatore = 0;

        for (int j = 0; j < n; j++)
        {

            char attuale = *A[j][i];
            char diag = *A[j][j];
            if (attuale == diag)
            {
                contatore++;
            }
        }
        if (contatore == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char *A[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = new char;
            cin >> *A[i][j];
        }
    }

    cout << metodo(A);
}


//@_mr.teo