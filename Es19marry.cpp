#include <iostream>
using namespace std;
#include <string>

/*.Scrivere un metodo che prenda in input una
matrice quadrata M di short e restituisca il valore
booleano true se M e una matrice triangolare inferiore
o superiore. */

bool metodo(short **M, int n, int m)
{

    int cont;
    int contI;
    int contRiga = 0;
    int contRigaI = 0;

    for (int i = 0; i < n; i++)
    {
        cont = 0;
        contI = 0;
        for (int j = i + 1; j < m; j++)
        {

            if (M[i][j] == 0)
            {

                cont++;
            }

            if (M[j][i] == 0)
            {

                contI++;
            }
        }
        if (cont == m - i - 1 && cont != 0)
        {
            contRiga++;
        }
        if (contI == m - i - 1 && contI != 0)
        {
            contRigaI++;
        }
    }
    if (contRiga == n - 1)
    {
        return true;
    }

    if (contRigaI == n - 1)
    {
        return true;
    }

    return false;
}

int main()
{
    int n = 3;
    int m = 3;

    short **M = new short *[n];
    for (int i = 0; i < n; i++)
    {
        M[i] = new short[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> M[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    cout << metodo(M, n, m);
}
//@_mr.teo