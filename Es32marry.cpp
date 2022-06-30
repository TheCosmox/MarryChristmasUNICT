
#include <iostream>
using namespace std;
#include <string>
/*.Scrivere un metodo che prenda in input una
matrice quadrata di puntatori a stringhe A e due caratteri
c1 e c2. Calcolare O1 come numero di occorrenze del
carattere c1 che figurano nella diagonale principale.
CalcolareO2 come numero di occorrenze del carattere
c2 che che figurano nella secondaria. Restituire il
rapportoO1/O2. NB: si faccia attenzione alle stringhe
mancante.*/

double metodo(string ***A, int n, int m, char c1, char c2)
{
    int O1 = 0;
    int O2 = 0;
    double rapporto = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (A[i][i])
        {
            string attuale1 = *A[i][i];
            for (int j = 0; j < attuale1.length(); j++)
            {
                if (attuale1[j] == c1)
                {
                    O1++;
                }
            }
        }
        if (A[i][n - i - 1])
        {
            string attuale2 = *A[i][n - i - 1];
            for (int j = 0; j < attuale2.length(); j++)
            {
                if (attuale2[j] == c2)
                {
                    O2++;
                }
            }
        }
    }
    cout << O1 << "/" << O2 << " = ";
    rapporto = static_cast<double>(O1) / O2;

    return rapporto;
}

int main()
{

    int n = 3;
    int m = 3;

    char c1 = 'a';
    char c2 = 'e';

    string ***S = new string **[n];
    for (int i = 0; i < n; i++)
    {
        S[i] = new string *[m];
    }

    S[0][0] = new string("a");
    S[0][1] = new string("x");
    S[0][2] = new string("e");

    S[1][0] = new string("x");
    S[1][1] = new string("a");
    S[1][2] = new string("x");

    S[2][0] = new string("e");
    S[2][1] = new string("x");
    S[2][2] = new string("a");

    cout << metodo(S, n, m, c1, c2);
}

//_@mr.teo