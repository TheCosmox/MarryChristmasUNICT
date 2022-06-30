#include <iostream>
#include <string>
using namespace std;

/*Due stringhe si dicono sorelle se hanno lo stesso
numero di vocali. Scrivere un metodo che prenda in
input una matrice A di puntatori a stringhe, e
restituisca un boolean che indichi se esiste una
colonna di A in cui sono puntate almeno due stringhe
sorelle.*/

/*Dobbiamo visualizzare le vocali del primo elemento(prima stringa) , poi dobbiamo fare un confronto con le vocali di tutti gli elementi successivi
(stringhe successive)se esiste una stringa avente pari numero di vocali allora dara' come output un reture true .*/

bool metodo(string ***A, int n, int m)
{

    string attuale = "";
    string successiva = "";

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            int contatore = 0;
            attuale = *A[j][i];

            // conto le vocali presenti nella prima stringa
            for (int k = 0; k < attuale.length(); k++)
            {
                if (attuale[k] == 'a' || attuale[k] == 'e' || attuale[k] == 'i' || attuale[k] == 'o' || attuale[k] == 'u')
                {
                    contatore++;
                }
            }
            cout << "Vocali trovate contatore:  " << contatore << endl;

            /*-------------------------------------------*/

            // ciclo per il confronto della stringa attuale con tutte le sue successive
            for (int l = 1; l < m; l++)
            {
                int contatoreSuccessiva = 0;
                successiva = *A[l][i];
                // conto le vocali della stringa successiva
                for (int z = 0; z < successiva.length(); z++)
                {

                    if (successiva[z] == 'a' || successiva[z] == 'e' || successiva[z] == 'i' || successiva[z] == 'o' || successiva[z] == 'u')
                    {
                        contatoreSuccessiva++;
                    }
                }
                /*-------------------------------------------*/

                // se la stringa attuale presenta un numero identico di stringe avro un return di tipo true 1
                // diverso da zero perche se tutte le stringhe sono di tipo 0 ovvero non presentano vocali vi sara un 0 == 0 quindi il return sara true
                if (contatore == contatoreSuccessiva && contatore != 0)
                {
                    return true;
                }
            }
        }
    }
    // altrimenti avro un return false
    return false;
}

int main()
{
    int n = 3;
    int m = 3;
    string ***Matrice = new string **[n];
    for (int i = 0; i < n; i++)
    {
        Matrice[i] = new string *[m];
        for (int j = 0; j < m; j++)
        {
            Matrice[i][j] = new string[255];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "inserire valore:" << endl;
            cin >> *Matrice[j][i];
        }
    }

    cout << "Esistono stringhe sorelle?: " << metodo(Matrice, n, m);
}


//@_mr.teo