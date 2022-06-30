#include <iostream>
#include <string>
using namespace std;

/*Scrivere un metodo che prenda in input una matrice
di puntatori a stringhe P di dimensioni nm, due short a
e b, ed una stringa s. Il metodo restituisca il valore
booleano true se esiste almeno una colonna in P tale
che la stringa s sia sottostringa di un numero
compreso tra a e b (inclusi) di stringhe della colonna
stessa. PS: Si assuma 0 < a b < n*/

bool metodo(string ***P, int n, int m, short a, short b, string s)
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
    short a = 1;
    short b = 6;
    int n = 3;
    int m = 3;
    string s = "aia";
    string input;

    string ***Matrice = new string **[n];
    for (int i = 0; i < n; i++)
    {
        Matrice[i] = new string *[m];

        for (int j = 0; j < m; j++)
        {
            Matrice[i][j] = new string;

            cin >> *(Matrice[i][j]);
        }
    }

    cout << metodo(Matrice, n, m, a, b, s);
    cout << "ciao";
}


//@_mr.teo