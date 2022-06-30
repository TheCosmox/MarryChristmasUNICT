#include <iostream>
using namespace std;
#include <string>
/*Due stringhe si dicono c-equivalenti se esse
risultano uguali dopo aver eliminato da ambedue tutte
le occorrenze del carattere c. Scrivere un metodo che
prenda in input una matrice A di puntatori a stringhe
ed un carattere c, e restituisca un boolean che indichi
se esistono in A due stringhe c-equivalenti.*/

#define n 3
#define m 3
bool metodo(string *A[n][m], char c)
{
    int cont = 0;

    string attuale = "";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            attuale = *A[i][j];

            for (int k = 0; k < attuale.length(); k++)
            {
                if (attuale[k] == c)
                {
                    (*A[i][j]).erase(k, 1);
                }
            }
        }
    }
    /*
            for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<< *A[i][j]<<" ";
            }
            cout<<endl;
        }
    */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            string attuale = *A[i][j];

            for (int l = 0; l < n; l++)
            {
                for (int h = 0; h < m; h++)
                {

                    string successiva = *A[l][h];

                    if (attuale == successiva)
                    {
                        cont++;
                    }
                }
            }
            cont--;
        }
    }
    if (cont >= 2)
    {
        return true;
    }
    else
    {

        return false;
    }
}

int main()
{
    string *A[n][m];
    char c = 'c';

    /*------------------*/
    A[0][0] = new string("ciao");
    A[0][1] = new string("xb");
    A[0][2] = new string("xc");

    A[1][0] = new string("xd");
    A[1][1] = new string("ciao");
    A[1][2] = new string("xm");

    A[2][0] = new string("xq");
    A[2][1] = new string("xo");
    A[2][2] = new string("xp");
    /*------------------*/
    /*
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<< *A[i][j]<<" ";
            }
            cout<<endl;
        }
    */

    cout << metodo(A, c);
}

//@_mr.teo