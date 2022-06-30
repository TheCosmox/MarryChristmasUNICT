#include <iostream>
using namespace std;
#include <string>

/*Scrivere un metodo che prenda come parametri
formali una matrice A di stringhe ed uno short w, e
restituisca in output un bool che indichi se esiste una
riga di A in cui siano presenti almeno due stringhe
consecutive in cui i primi w caratteri della prima
stringa siano uguali agli ultimi w caratteri della
seconda stringa (nello stesso ordine).*/

#define n 2
#define m 2
bool metodo(string **A, short w)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {

            string attuale = A[i][j - 1];
            string successiva = A[i][j];

            if (attuale.substr(0, w) == successiva.substr(successiva.length() - w, w))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    short w = 3;

    string **A = new string *[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = new string[m];
    }

    A[0][0] = string("ciao");
    A[0][1] = string("xiaocia");
    A[1][0] = string("turi");
    A[1][1] = string("ciambella");

    cout << metodo(A, w);
}


//@_mr.teo