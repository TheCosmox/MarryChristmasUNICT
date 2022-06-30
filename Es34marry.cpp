
#include <iostream>
using namespace std;
#include <string>
/*.Scrivere un metodo che prenda in input una
matrice di puntatori a stringhe S di dimensioni n×m,
una stringa x ed un array di double W di dimensione
m; il metodo restituisca un array di bool R di
dimensione m tale che l’i-esimo elemento di R sarà
true se e solo se il rapporto tra il numero di stringhe
della i-esima colonna di S delle quali x è sottostringa ,
ed il numero n è minore o uguale dello i-esimo
elemento di W. NB: Si presti attenzione alle stringhe
mancanti!*/

#define n 3
#define m 3

bool *metodo(string *S[n][m], string x, double W[m])
{

    bool *R = new bool[m];

    for (int i = 0; i < n; i++)
    {
        int conTrovato = 0;
        for (int j = 0; j < m; j++)
        {

            if (S[j][i])
            {
                string attuale = *S[j][i];

                if (attuale.find(x) != string::npos)
                {
                    if (static_cast<double>(n) <= W[i])
                    {
                        conTrovato++;
                    }
                }
            }
            if (conTrovato > 0)
            {
                R[i] = true;
            }
            else
            {
                R[i] = false;
            }
        }
    }
    return R;
}
int main()
{
    string *S[n][m];
    double W[m] = {3.1, 4.3, 2.4};
    string x = "ciao";

    S[0][0] = new string("aciao");
    S[0][1] = new string("a");
    S[0][2] = new string("a");

    S[1][0] = new string("aciao");
    S[1][1] = new string("a");
    S[1][2] = new string("a");

    S[2][0] = new string("aciao");
    S[2][1] = new string("a");
    S[2][2] = new string("a");

    bool *R = metodo(S, x, W);

    for (int i = 0; i < m; i++)
    {
        cout << R[i] << " ";
    }
}


//_@mr.teo