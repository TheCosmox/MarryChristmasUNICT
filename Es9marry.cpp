#include <iostream>
#include <string>
using namespace std;

/*Scrivere un metodo che prenda in input un
parametro formale matrice A di interi di dimensioni
nxn ed un double w, e restituisca un valore booleano
true se esiste almeno una colonna della matrice A per
cui il rapporto tra la somma degli elementi della
colonna stessa e la somma degli elementi della
diagonale principale di A sia maggiore di w.*/

#define n 3

bool metodo(int A[n][n], double w)
{

    int sommaDiag = 0;
    int sommaCol = 0;
    double rapporto = 0.0;

    for (int i = 0; i < n; i++)
    {
        rapporto = 0.0;
        sommaDiag += A[i][i];

        for (int i = 0; i < n; i++)
        {
            sommaCol = 0;
            for (int j = 0; j < n; j++)
            {
                sommaCol = A[j][i];
            }
        }
        rapporto = sommaCol / sommaDiag;

        if (rapporto > w)
        {
            return true;
        }
    }
    return false;
}
int main() {}



//@_mr.teo