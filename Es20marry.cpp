#include <iostream>
using namespace std;
#include <string>

/*.Scrivere un metodo che prenda in input una
matrice di puntatori a stringhe S di dimensione nm,
una stringa s1 ed uno short k, e restituisca la
percentuale di stringhe, tra quelle presenti nelle prime
k colonne di S, che siano piu lunghe di s1. NB: si
assuma k<=m.  */

#define n 3
#define m 3
double metodo(string *S[n][m], string s1, short k)
{

    int contatore = 0;
    int contatoreSM = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {

            if (S[j][i])
            {
                string attuale = *S[i][j];
                contatore++;
                if (attuale.length() > s1.length())
                {
                    contatoreSM++;
                }
            }
        }
    }
   // cout << "contsm: " << contatoreSM << " cont: " << contatore << endl;

    double percentuale = contatoreSM * 100 / contatore;
    return percentuale;
}

int main()
{

    string *P[n][n];
    short k = 2;
    string s1 = "xx";

    P[0][0] = new string("x");
    P[0][1] = new string("x");
    P[0][2] = new string("xxx");

    P[1][0] = new string("x");
    P[1][1] = new string("x");
    P[1][2] = new string("xxx");

    P[2][0] = new string("x");
    P[2][1] = new string("x");
    P[2][2] = new string("xxx");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << *P[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << metodo(P, s1, k);
}
//@_mr.teo