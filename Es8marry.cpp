#include <iostream>
#include <string>
using namespace std;

/*Scrivere un metodo che prenda in input una matrice
quadrata di puntatori a stringhe Q ed una stringa s. Il
metodo restituisca il valore booleano true se e solo se
il numero di stringhe che contengono s, presenti nella
diagonale principale di Q, e maggiore del numero di
stringhe che contengono s presenti nella diagonale
secondaria di Q. */

#define n 3

bool metodo(string *Q[n][n], string s)
{

    int contPrin = 0;
    int contSeco = 0;
    for (int i = 0; i < n; i++)
    {
        string x = *Q[i][i];

        if (x.find(s) != string ::npos)
        {
            contPrin++;
        }
    }

    for (int i = 0; i < n; i++)
    {

        string y = *Q[i][n - i - 1];

        if (y.find(s) != string ::npos)
        {
            contSeco++;
        }
    }
    if (contPrin > contSeco)
    {
        return true;
    }
    return false;
}

int main()
{

    string *P[n][n];

    string s = "ia";

    P[0][0] = new string("ciao");
    P[0][1] = new string("cane");
    P[0][2] = new string("gatto");

    P[1][0] = new string("cxo");
    P[1][1] = new string("tiaone");
    P[1][2] = new string("pippo");

    P[2][0] = new string("cxo");
    P[2][1] = new string("nxs");
    P[2][2] = new string("asc");

    cout << metodo(P, s);
}
