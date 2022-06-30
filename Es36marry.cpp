
#include <iostream>
using namespace std;
#include <string>
#include <cmath>

/*.Scrivere un metodo che prenda in input una 
matrice di stringhe di dimensioni n×m, due stringhe x 
e y e due short kew; il metodo restituisca la 
percentuale di colonne della matrice che contengono 
almeno k stringhe contenenti almeno w caratteri 
presenti sia in x che in y. NB: si assuma, per 
semplicità, che ognuna delle stringhe della matrice non 
che le stringhe x e y non contengano lo stesso 
carattere più di una volta.*/

#define n 3
#define m 3

//Onestamente non l'ho capito :(  non so se la mia interpretazione sia corretta :D
//ma non e' sbagliato, e' venuto come l'ho voluto fare io....ecco perche mi ha bocciato 3 volte..

double metodo(string M[n][m],string x,string y,short k,short w){

    int colonna =0;
    
    for(int i=0;i<n;i++){
        int stringa =0;
        for(int j=0;j<m;j++){
            string attuale = M[j][i];
            int contatore =0;

            
                for(int a2=0;a2<x.length();a2++){
                    for(int a3=0;a3<y.length();a3++){

                        if(x[a2] == y[a3]){

                            for(int a1=0;a1<attuale.length();a1++){
                                if( x[a2] == attuale[a1] ){contatore++;}

                        }
                    }
                }
            }
            if(contatore >= w){stringa++;}

        }
        if (stringa  >= k){colonna++;}

    }


    double percentuale= (colonna*100)/m;

        return percentuale;


}
int main(){
   
    string x ="ia";
    string y ="ci";
    short k=2;
    short w=2;
    string M[n][m];


    M[0][0] = string("ciaio");
    M[0][1] = string("x");
    M[0][2] = string("x");

    M[1][0] = string("ciaio");
    M[1][1] = string("x");
    M[1][2] = string("x");

    M[2][0] = string("ciaio");
    M[2][1] = string("x");
    M[2][2] = string("x");

    cout<<metodo(M,x,y,k,w);
    
}

//_@mr.teo