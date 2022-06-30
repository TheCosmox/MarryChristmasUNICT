#include <iostream>
using namespace std;
#include <cmath>
#include <string>

/*.Scrivere un metodo che prenda in input una 
matrice quadrata Q di stringhe e restituisca il valore 
booleano true se la stringa piu lunga della diagonale 
principale di Q contiene un numero di vocali minore 
della stringa piu corta della diagonale stessa. NB: Si 
assuma che le stringhe della diagonale principale 
abbiano lunghezze differenti e sempre maggiori di 
zero.*/

bool metodo(string *** Q,int n,int m){
    string lunga =*Q[0][0];
    string corta =*Q[0][0];
    int contL =0;
    int contC =0;

    for(int i=0;i<n;i++){
        if(Q[i][i]){
        if((*Q[i][i]).length() > lunga.length()){
            lunga = *Q[i][i];
        }
        if((*Q[i][i]).length() < corta.length()){
            corta = *Q[i][i];
        }
        }
    }

    cout << "lunga: " << lunga << " " << " corta: " << corta << endl;
    for(int i=0;i<lunga.length();i++){
        if(lunga[i]=='a' || lunga[i]=='e' || lunga[i]=='i' || lunga[i]=='o' || lunga[i]=='u'){contL++; }
    }

    for(int i=0;i<corta.length();i++){
        if(corta[i]=='a' || corta[i]=='e' || corta[i]=='i' || corta[i]=='o' || corta[i]=='u'){contC++; }
    }

    if(contL < contC){return true;}
    return false;
}

int main(){

    int n=3;
    int m=3;
    string ***P =new string ** [n];
    for(int i=0;i<n;i++){P[i]=new string *[m];}

    
    P[0][0] = new string("Xaxxxxx");
    P[0][1] = new string("x");
    P[0][2] = new string("x");

    P[1][0] = new string("xaa");
    P[1][1] = new string("xaa");
    P[1][2] = new string("xaa");

    P[2][0] = new string("x");
    P[2][1] = new string("x");
    P[2][2] = new string("xaaaa");


    /*
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << *P[i][j] << " ";
        }
        cout << endl;
    }
    */
    cout<<metodo(P,n,m);

}
//@_mr.teo