#include <iostream>
using namespace std;
#include <cmath>
#include <string>

/*..Scrivere un metodo che prenda in input una
matrice quadrata Q di dimensioni n x n di puntatori a
stringhe e due short m e k e restituisca il valore
booleano true se la diagonale secondaria di Q contiene
almeno m stringhe con un numero di vocali minore o
uguale a k. NB: Si assuma m<=n.*/

#define n 3

bool metodo(string *Q[n][n], short m, short k)
{
    int contStringhe = 0;
    for (int i = 0; i < n; i++)
    {
        int contatore = 0;
        string attDig = *Q[i][n - i - 1];
        for (int j = 0; j < attDig.length(); j++)
        {
            if (attDig[j] == 'a' || attDig[j] == 'e' || attDig[j] == 'i' || attDig[j] == 'o' || attDig[j] == 'u')
            {
                contatore++;
            }
        }
        if (contatore <= k)
        {
            contStringhe++;
        }
    }
    if (contStringhe >= m)
    {
        return true;
    }

    return false;
}

int main()
{

    string *Q[n][n];
    short m = 2;
    short k = 3;

    Q[0][0] = new string("x");
    Q[0][1] = new string("x");
    Q[0][2] = new string("xaaa");

    Q[1][0] = new string("x");
    Q[1][1] = new string("xaaa");
    Q[1][2] = new string("x");

    Q[2][0] = new string("xaaa");
    Q[2][1] = new string("x");
    Q[2][2] = new string("x");

    cout << metodo(Q, m, k);
}
//@_mr.teo