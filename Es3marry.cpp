#include <iostream>
using namespace std;

/*
Scrivere un metodo che prenda in input un
parametro formale matrice quadrata Q di interi ed un
double w, e restituisca un valore booleano true se
esiste almeno una colonna della matrice Q tale che il
rapporto tra la somma degli elementi della colonna
stessa e la somma degli elementi della diagonale
secondaria di Q sia maggiore di w
*/

bool metodo(int **Q, int n, int m, double w)
{

    double sommaDiagonale = 0;

    for (int i = 0; i < n; i++)
    {

        double sommaColonna = 0;

        // posso utilizzare un unico ciclo for per calcolare sia la somma della colonna che la diagonale principale
        for (int j = 0; j < m; j++)
        {

            sommaColonna += Q[j][i];

            sommaDiagonale += Q[j][m - 1 - j];
        }

        // in modo preventivo ho utilizzato un static_cast (in questo caso non e' necessario)
        if (static_cast<double>((sommaColonna) / sommaDiagonale) > w)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n = 3;
    int m = 3;
    double w = 1.2;

    // dichiaro la matrice perche allocata dinamicamente
    int **Matrice = new int *[n];
    for (int i = 0; i < n; i++)
    {
        Matrice[i] = new int[m];
    }
    // riempio la matrice con valori da input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> Matrice[j][i];
        }
    }
    // viusualizzo la matrice
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << Matrice[i][j] << "    ";
        }
        cout << endl;
    }
    // output metodo()
    cout << "Risultato: " << metodo(Matrice, n, m, w);
}

//@_mr.teo