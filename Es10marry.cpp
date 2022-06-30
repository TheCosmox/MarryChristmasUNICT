#include <iostream>
#include <string>
using namespace std;

/*Scrivere un metodo che prenda in input tre
parametri formali: una matrice di puntatori a stringhe
A di dimensioni nxm, uno short k ed una stringa s. Il
metodo restituisca un array di bool di dimensione n in
cui il singolo elemento di indice i assume valore true se
la stringa s e sottostringa di almeno k stringhe della
riga i-esima della matrice A.*/

#define n 3
#define m 3
bool *metodo(string *A[n][m], short k, string s)
{

    bool *array = new bool[n];
    int contatore = 0;

    for (int i = 0; i < n; i++)
    {
        contatore = 0;
        for (int j = 0; j < m; j++)
        {

            string attuale = *A[i][j];

            if (attuale.find(s) != string::npos)
            {
                contatore++;
            }
        }
        if (contatore > k)
        {
            array[i] = true;
        }
        else
        {
            array[i] = false;
        }
    }
    return array;
}
int main() {}

//@_mr.teo