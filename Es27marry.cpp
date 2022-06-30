#include <iostream>
using namespace std;
#include <cmath>
#include <string>

/*.Scrivere un metodo che prenda come parametro 
formale una matrice A n×m di puntatori ad intero, e 
restituisca in output un bool che indichi se esistono 
due elementi in A che puntano allo stesso valore intero 
(anche in locazioni differenti).*/

#define n 3
#define m 3
bool metodo(int *A[n][m]){
  int cont_elementi = 0;


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

             int attuale=*A[i][j];
         
            for(int k=0;k<n;k++){
                for(int l=0;l<m;l++){

                   
                    int succ=*A[k][l];
                   
                    if(attuale == succ){cont_elementi++;}

                }
            }
            cont_elementi--;

        }
    }

    if(cont_elementi >= 2)
        return true;
    else  
      return false;
   
}
int main(){

    int *A[n][m];

    A[0][0]= new int(1);
    A[0][1]= new int(2);
    A[0][2]= new int(3);

    A[1][0]= new int(4);
    A[1][1]= new int(5);
    A[1][2]= new int(6);

    A[2][0]= new int(7);
    A[2][1]= new int(8);
    A[2][2]= new int(9);

    cout <<metodo(A);

    return 0;
}
//@_mr.teo