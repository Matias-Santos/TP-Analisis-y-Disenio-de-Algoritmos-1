#include "Conjuntos.h"
#include "Fila.h"
#include "Listas.h"
#include "Pila.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    int x=0;
    cout << "Hello world!" << endl;
    Conjuntos<int> C;
    srand(time(NULL));
    for (int i=0; i<12; i++)
    {
        x=rand() % 350;
        C.agregardato(x);
        cout <<"i: "<< i << " valor : "<< x <<endl;
    }
    for (int i=0; i<12; i++)
        cout << "valor " << i << ": "<< C.devuelvevalor(i)<< endl;
    int j=C.tamanio()/2;
    for(int i=0;i<j;i++){
        int aux=C.devuelvevalor(0);
        C.eliminar(aux);
    }
    int k= C.tamanio();
    for (int i=0; i<k; i++)
        cout << "valor " << i << ": "<< C.devuelvevalor(i)<< endl;
    return 0;
}
