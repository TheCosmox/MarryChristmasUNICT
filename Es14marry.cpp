#include <iostream>
using namespace std;

/*Scrivere un metodo che prenda come parametri
formali una matrice A di stringhe ed un intero k, e
restituisca in output una copia di A in cui tutte le
stringhe della colonna k-esima siano state epurate
dalle lettere non italiane.*/

#define n 3
#define m 3

string **metodo(string **A, int k)
{
    // creao una nuova matrice Matrice ed associo ad ogni elemento lo stesso elemento di A ovvero copio la matrice A in Matrice
    string **Matrice = new string *[n];
    for (int i = 0; i < n; i++)
    {
        Matrice[i] = new string [m];
        for (int j = 0; j < m; j++)
        {
            // copio il valore di A in Matrice
            Matrice[i][j] = string(A[i][j]);
        }
    }
    //------------------------------------//

    for (int i = 0; i < n; i++)
    {
        for (int j = k; j < m; j++)
        {
            // prendo una stringa in posizione i j della Matrice per fare il confronto dei caratteri
            string attuale = Matrice[i][j];

            for (int l = 0; l < attuale.length(); l++)
            {
                // controllo se nella stringa vi sono presenti uno di questi caratteri x y (mi secco a mettere gli altri j k w  :0 )
                if (attuale[l] == 'x' || attuale[l] == 'y' || attuale[l] == 'k' || attuale[l] == 'j' || attuale[l] == 'w')
                {
                    // se viene individuato allora verra cancellato
                    (attuale).erase(l, 1);
                    // tolgo 1 al contatore l perche la lunghezza della stringa sara' senza 1 carattere 
                    l--;
                }
            }
            Matrice[i][j] = attuale;
        }
    }

   
    
    return Matrice;
}
int main()
{
    int k = 0;

    string **A = new string *[n];
    for (int i = 0; i < n; i++)
    {
        A[i] = new string [m];
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           
            cin >>A[i][j];
        }
    }



   string **B = metodo(A, k);

    // semplice cout per visualizzare la matrice
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++){
        cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

//@_mr.teo