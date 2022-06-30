#include <iostream>
#include <string>
using namespace std;

/*Scrivere un metodo che prenda in input una matrice
di puntatori a stringhe P di dimensioni nm, due short a
e b, ed una stringa s. Il metodo restituisca il valore
booleano true se esiste almeno una colonna in P tale
che la stringa s sia sottostringa di un numero
compreso tra a e b (inclusi) di stringhe della colonna
stessa. PS: Si assuma 0 < a b < n */

#define n 3
#define m 3

bool metodo(string *P[n][m], short a, short b, string s)
{
    string attuale = "";
    int contatore;
    for (int i = 0; i < n; i++)
    {

        contatore = 0;
        for (int j = 0; j < m; j++)
        {
            attuale = *P[j][i];

            if (attuale.find(s) != string::npos)
            {
                contatore++;
            }
        }

        if (contatore >= a && contatore <= b)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    string *P[n][m];
    short a = 2;
    short b = 3;
    string s = "ia";

    P[0][0] = new string("cxo");
    P[0][1] = new string("cane");
    P[0][2] = new string("gatto");

    P[1][0] = new string("cxo");
    P[1][1] = new string("tiaone");
    P[1][2] = new string("pippo");

    P[2][0] = new string("cxo");
    P[2][1] = new string("nxs");
    P[2][2] = new string("aabbcc");

    bool risp = metodo(P, a, b, s);
    cout << risp;
}


//@_mr.teo