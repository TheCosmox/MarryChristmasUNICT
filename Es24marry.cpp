#include <iostream>
using namespace std;
#include <cmath>
#include <string>

/*.Scrivere un metodo che prenda in input una
matrice di stringhe S di dimensioni n m, uno short k,
ed una stringa w. Il metodo restituisca il valore
booleano true se esiste almeno una riga in P tale che
la stringa w sia sottostringa di un numero di stringhe
della riga stessa che sia minore o uguale a k.*/

#define n 3
#define m 3

bool metodo(string S[n][m], short k, string w)
{
    string attuale = "";

    int contatoreS;

    for (int i = 0; i < n; i++)
    {
        int contatore = 0;

        for (int j = 0; j < m; j++)
        {
            attuale = S[i][j];

            if (attuale.find(w) != string ::npos)
            {
                cout << attuale <<" " << "posizione " <<i << " " << j <<" " <<endl;
                contatore++;
            }
        }
       

        if (contatore != 0)
        {

            if (contatore <= k)
            {
                cout<<"risultato: ";
                return true;
            }
        }
    }
    return false;
}

int main()
{

    string P[n][m];
    short k = 3;
    string w = "xa";

    P[0][0] = string("x");
    P[0][1] = string("x");
    P[0][2] = string("x");

    P[1][0] = string("x");
    P[1][1] = string("x");
    P[1][2] = string("x");

    P[2][0] = string("xa");
    P[2][1] = string("xa");
    P[2][2] = string("xa");

    cout << metodo(P, k, w);
}
//@_mr.teo