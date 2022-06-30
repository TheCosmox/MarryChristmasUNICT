
#include <iostream>
using namespace std;
#include <string>
#include <cmath>

/*.Scrivere un metodo che prenda come parametro 
formale un cubo (array tridimensionale) C di stringhe, 
e restituisca in output una stringa contenente tutte le 
desinenze di due caratteri delle stringhe sulla faccia 
superiore del cubo C..*/

#define n 2
#define m 2
#define o 2
string metodo(string C[n][m][o]){
string tutteDesinenze="";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          string attuale =C[i][j][o];
          
          tutteDesinenze+=attuale.substr(attuale.length()-1);

        }
    }
    return tutteDesinenze;
}
// prova eseguita con una matrice semplice , il risultato e' ottimo 
//dovrebbe eseguire correttamente anche per il cubo.


int main(){

    

    string S[n][m][o];
    for(int i=0;i<n;i++){
        for(int j=0;i<m;i++){
            for(int k=0;i<o;i++){
    S[i][j][k] = string("ciao");
            }
        }
    }
    cout<<metodo(S);

}


//@_mr.teo