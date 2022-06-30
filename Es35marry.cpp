
#include <iostream>
using namespace std;
#include <string>
#include <cmath>

/*.Scrivere un metodo che prenda in input una
matrice Q di puntatori a int di dimensione n × m e due
float a e b e restituisca un array di float di dimensione
m tale che lo i-esimo elemento dello array contiene la
media dei soli elementi della colonna i-esima compresi
tra a e b (estremi inclusi). Nel confronto tra interi e
numeri in virgola mobile si consideri l’arrotondamento
di questi ultimi al numero intero più prossimo ad essi.
NB: Si presti attenzione ai numeri mancanti!.*/

#define n 3
#define m 3

float *metodo(int *Q[n][m], float a, float b)
{
    float *Arr = new float[m];
    int media;

    for (int i = 0; i < n; i++)
    {
        media = 0;
        for (int j = 0; j < m; j++)
        {
            //controllo per vedere se e' diverso da nullptr
            if (Q[j][i])
            {

                int v = *Q[j][i];

                if (v >= round(a) && v <= round(b))
                {
                    media += v;
                }
            }
        }
        
        Arr[i] = media;
    }

    return Arr;
}
int main()
{

    float a = 1;

    float b = 4;

    int *Q[n][m];

    Q[0][0] = new int(2);
    Q[0][1] = new int(7);
    Q[0][2] = new int(2);

    Q[1][0] = new int(2);
    Q[1][1] = new int(2);
    Q[1][2] = new int(4);

    Q[2][0] = new int(2);
    Q[2][1] = new int(7);
    Q[2][2] = new int(2);

    float *Arr = metodo(Q, a, b);

    for (int i = 0; i < m; i++)
    {
        cout << Arr[i] << " ";
    }
}

//_@mr.teo