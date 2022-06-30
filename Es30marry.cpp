#include <iostream>
using namespace std;
#include <cmath>
#include <string>

/*.Scrivere un metodo che prenda in input una 
matrice di stringhe A e due numeri short senza segno, 
k ed s, e restituisca il valore booleano true se esiste 
almeno una riga di A contenente almeno k stringhe 
ognuna contenente un numero di lettere maiuscole 
minore di s. */


bool metodo(string ** A,unsigned short k, unsigned short s){

    for(int i=0;i<n;i++){
        
        int contStringa = 0;

        for(int j=0;j<m;j++){
            int contatore =0;

            string attuale = A[i][j];

            for(int l=0;l<attuale.length();l++){
                if(isupper((attuale[l]))){
                    contatore++;
                }
            }
            if (contatore < s){contStringa++;}


        }
        if (contStringa >= k){return true;}
    }
    return false;
}

int main(){
    int n=3;
    int m=3;
    string P[n][m];
    unsigned short k =2;
    unsigned short s =3;

    P[0][0] = string("x");
    P[0][1] = string("x");
    P[0][2] = string("xxx");

    P[1][0] = string("x");
    P[1][1] = string("x");
    P[1][2] = string("xxx");

    P[2][0] = string("x");
    P[2][1] = string("x");
    P[2][2] = string("xxx");




    cout<<metodo(P,n,m,k,s);
}
//@_mr.teo