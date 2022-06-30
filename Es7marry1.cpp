#include <iostream>
using namespace std;
#include <cmath>
#include <string>

/*.Scrivere un metodo che prenda in input una
matrice di double D ed un intero a, e restituisca il
valore booleano true se esiste almeno una colonna in
D nella quale la somma di una qualsiasi coppia di
elementi adiacenti, approssimata all'intero piu vicino,
sia uguale ad a*/

#define n 3
#define m 3

bool metodo(int D[n][m],int a){
    
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            int attuale = D[j-1][i];
            int successivo =D[j][i];

            if(round(attuale+successivo) == a){return true;}

        }
    }
    return false;
}


int main()
{
  

    double a = 4;
    int D[n][m];
   
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            D[i][j]= 2;
        }
    }

    cout << metodo(D,a);
}
//@_mr.teo