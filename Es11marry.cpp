#include <iostream>
using namespace std;
#include <string>

/*Scrivere un metodo che prenda come parametri
formali una matrice quadrata A n×n di puntatori ad int
e restituisca in output un bool che indichi se la somma
degli elementi puntati dalla diagonale sottostante la
diagonale secondaria è divisibile per n.*/

#define n 3

bool metodo(int ***A)
{

    int sommaDiagSott = 0;

    for (int i = 1; i < n; i++)
    {
        if (A[i][n - i])
        {
                sommaDiagSott += *A[i][n - i];
        }
    }

    cout << "somma: " << sommaDiagSott << " / " << n << endl;
    if (sommaDiagSott % n == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    int ***A = new int **[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = new int *[n];
        for (int j = 0; j < n; j++)
        {
            A[i][j] = new int;
            *A[i][j] = 1;
        }
    }
        *A[1][2]=3;
        *A[2][1]=3;
    for (int i = 0; i < n; i++)
    {
       
        for (int j = 0; j < n; j++)
        {
            cout<<*A[i][j]<<" ";
        }
        cout<<endl;}
        

    cout << metodo(A);
}



//@_mr.teo