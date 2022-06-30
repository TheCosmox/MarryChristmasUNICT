
#include <iostream>
using namespace std;
#include <string>
/*.Scrivere un metodo che prenda in input una 
matrice M di puntatori a double di dimensione n × m e 
due interi a e b e restituisca un array unidimensionale 
di booleani di lunghezza 2m tale che l’elemento 
dell’array di posizione 2i contiene True se e solo se la 
media dei soli elementi della colonna i-esima di M 
compresi tra a e b(estremi inclusi) è maggiore di 
(a+b)/2. Gli elementi dell’array di indice dispari devono 
essere inizializzati a False. NB: Si presti attenzione ai 
numeri mancanti!.*/
#define n 3
#define m 3

bool  * metodo(double * M[n][m],int a ,int b){
    //2m
    bool * Arr =new bool [2*m];
    double media =0.0;
    double valore=static_cast<double>((a+b)/2.0);

    for(int i=0;i<n;i=i+1){
    Arr[i]=false;
    }

    for(int i=0;i<n;i++){

    media =0.0;
        for(int j=0;j<m;j++){

        if(M[j][i]){
        media+=*M[j][i];
        cout<< j << " " << i <<endl;
        }

        }
        cout<<media<<endl;
        
        if(media > valore){
            Arr[i*2] = true;
            
        }else{Arr[i*2] = false;}
       
        cout<<"valore: " << valore <<endl;
       
    }
    return Arr;
}

int main(){

    int a = 2;
    int b = 3;

    double *M[n][m];


    M[0][0] = new double (1);
    M[0][1] = new double (1);
    M[0][2] = new double (1);

    M[1][0] = new double (1);
    M[1][1] = new double (1);
    M[1][2] = new double (1);

    M[2][0] = new double (1);
    M[2][1] = new double (1);
    M[2][2] = new double (1);

    bool * Arr = metodo(M,a,b);
    for(int i=0;i<m*2;i++){
        cout<<Arr[i];
    }
}