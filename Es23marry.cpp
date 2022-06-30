#include <iostream>
using namespace std;
#include <cmath>
#include <string>

/*..Scrivere un metodo che prenda in input un 
parametro formale matrice K di double di dimensioni n 
x m e due interi a e b, e restituisca un array A di short 
di dimensione m, in cui l'elemento A[i] e calcolato 
come il numero di elementi della colonna i-esima di K 
tali che, approssimati all'intero più vicino, siano 
compresi tra a e b (inclusi). NB: si assuma a < b.*/


#define n 3
#define m 3

short * metodo (double K[n][m],int a,int b){
    short * Arr = new short [m];

    double elemento;
    for(int i=0;i<n;i++){
        elemento=0;
            for(int j=0;j<m;j++){
                elemento += K[j][i];
            }

            if(round(elemento) >= a && round(elemento) <= b){
                Arr[i] = round(elemento);
            }
            else {Arr[i] = 0;}

    }
    return Arr;

}

int main(){
    double K [n][m];
    int a=1;
    int b=5;
    
    K [0][0] = double (0);
    K [0][1] = double (1);
    K [0][2] = double (2);

    K [1][0] = double (0);
    K [1][1] = double (1);
    K [1][2] = double (2);

    K [2][0] = double (0);
    K [2][1] = double (1);
    K [2][2] = double (2);

    short * Arr = metodo(K,a,b);

    for(int i=0;i<m;i++){
    cout<<Arr[i];
}
    
}
//@_mr.teo