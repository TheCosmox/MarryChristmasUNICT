#include <iostream>
using namespace std;
#include <cmath>
#include <string>

/*.Scrivere un metodo che prenda in input una 
matrice di interi M di dimensioni nx m, uno short k ed 
un double x, e restituisca il valore booleano true se 
esiste almeno una colonna in M contenente 
esattamente k coppie di elementi adiacenti tali che il 
rapporto tra il primo elemento ed il secondo elemento 
di ogni coppia sia minore di x. NB: Si assuma k <= n -
1 e si presti attenzione alle divisioni per zero!*/

#define n 3
#define m 3

bool metodo(int M[n][m],short k,double x){

    for(int i=0;i<n;i++){
        int contatore=0;
        for(int j=1;j<m;j++){

            int att=M[j-1][i];
            int succ=M[j][i];

            if(static_cast<double>(att)/succ < x ){
                contatore++;
            }

        }
        if(contatore == k){return true;}
    }

    return false;
}

int main(){

    int M[n][m];
    short k=2;
    double x=1.3;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>M[j][i];
        }
    }

    cout<<metodo(M,k,x);

}
//@_mr.teo