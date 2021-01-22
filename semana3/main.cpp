#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Heapsort.h"

using namespace std;

int particionquick(int arreglo[],int inicio, int fin){
    int pivote= arreglo[inicio];
    int izq= inicio;
    int der= fin;
    int aux;
    while (izq < der){
        while (arreglo[der]>pivote)
            der--;
        while ((izq < der)&&(arreglo[izq]<= pivote))
            izq++;
    if (izq < der){
        int aux=arreglo[izq];
        arreglo[izq]=arreglo[der];
        arreglo[der]=aux;}
    }
    aux=arreglo[der];
    arreglo[der]=arreglo[inicio];
    arreglo[inicio]=aux;
    return der;
}

void ordenaquick(int arreglo[],int inicio, int fin){

    if (inicio<fin)
    {
        int pivote= particionquick(arreglo,inicio,fin);
        ordenaquick(arreglo,inicio,pivote-1);
        ordenaquick(arreglo,pivote+1,fin);
    }
}

int devuelvevalor(int arreglo[],int fin, int inicio){
    for(int i= inicio; i<=fin;i++)
       cout <<arreglo[i]<< endl ;
    cout << endl;
}

void sortearmerge(int arreglo[], int inicio, int medio, int fin){

    int a1=medio-inicio+1;
    int a2=fin-medio;
    int izq[a1];
    int der[a2];
    for(int i=0;i<(a1);i++)
    {
        izq[i]=arreglo[inicio+i];
    }
    for(int j=0;j<(fin-medio);j++)
    {
        der[j]=arreglo[medio+j+1];
    }
    int i=0;
    int cont=inicio;
    int j=0;
    while ((i<(medio-inicio+1))&&(j<(fin-medio)))
        if(izq[i]>der[j])
        {
            arreglo[cont]=der[j];
            j++;
            cont++;
        }
        else
        {
            arreglo[cont]=izq[i];
            i++;
            cont++;
        }
    while (i<medio-inicio+1)
    {
        arreglo[cont]=izq[i];
        i++;
        cont++;
    }
    while (j<fin-medio)
    {
        arreglo[cont]=der[j];
        j++;
        cont++;
    }
}

void ordenamerge(int arreglo[], int inicio, int fin){

    if (inicio<fin){
    int medio=(fin+inicio)/2;
    ordenamerge(arreglo,inicio,medio);
    ordenamerge(arreglo,medio+1,fin);
    sortearmerge(arreglo,inicio,medio,fin);
    }
}

int main()
{
    /*
    int ultpos=0;
    int arreglo[10]={5,8,6,1,4,7,3,9,2,0};
    devuelvevalor(arreglo,9,0);
    ordenamerge(arreglo,0,9);
    ordenaquick(arreglo,0,9);
    devuelvevalor(arreglo,9,0);
    */
    /*int tam=11999;
    int arreglo[tam];
    srand(time(NULL));
    for (int i=0; i<tam; i++)
        arreglo[i]=(rand()% 32000);
    ordenaquick(arreglo,0,tam);
    devuelvevalor(arreglo,tam,0);
    */
    srand(time(NULL));
    Heapsort<int> H;
    for(int i = 0; i<10; i++)
       H.agregarDat((rand()% 32000));
    for(int i=0; i<10; i++)
    {
        cout << H.verPrimero()<< endl;
        H.eliminar();
    }
    return 0;
}
