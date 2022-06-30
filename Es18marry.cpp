#include <iostream>
using namespace std;
#include <string>

/*.Scrivere un metodo che prenda in input una 
matrice di puntatori a stringhe M e due numeri short 
senza segno, k ed s, e restituisca il numero di colonne 
contenenti almeno k stringhe con un numero di lettere 
vocali minore di s.*/


int metodo(string *** M,int n,int m,unsigned short k, unsigned short s){

    int colonne=0;

for(int i=0;i<n;i++){
    int contatore =0;
    int contS =0;
    for(int j=0;j<m;j++){
        string attuale = *M[j][i];
        for(int l=0;l<attuale.length();l++){
            if(attuale[l] == 'a' || attuale[l] == 'a' || attuale[l] == 'a' || attuale[l] == 'a' ||attuale[l] == 'a' ){
                contatore++;
            }

        }
        if( contatore < s){
            contS ++;
        }
        
    }
    if(contS >= k){
        colonne++;

    }


}
return colonne;
}


int main(){

    int m=3;
    int n=3;
    unsigned short s =4;
    unsigned short k =2;


    string ***M = new string ** [n];
    for(int i=0;i<n;i++){
        M[i]= new string * [m];
    }

    //Input per colonna non  per riga perche mi andava di farlo
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            M[j][i]= new string  ();
            cin >> *M[j][i];
        }
    }


    cout<<metodo(M,n,m,k,s);
}

//@_mr.teo