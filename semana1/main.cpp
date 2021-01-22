#include <iostream>
#include "Circulo.h"
#include "Triangulo.h"
#include "Figura2d.h"
#include "Segmento.h"
#include "AdminFig.h"
#include "Punto.h"
#include "Cuadrado.h"
#include "stdlib.h"
#include "time.h"

using namespace std;

int main()
{
    Lista<Punto> LisPunt;
    Lista<Segmento> LisSeg;
    srand(time(NULL));
    float sumatoria=0;
    for(int i=0;i<20;i++){
        int m=rand() % 200;
        int n=rand() % 200;
        Punto p(m,n);
        LisPunt.agregarprincipio(p);
    }
    for(int i=1;i<20;i++){
            Punto p1=LisPunt.elementopos(i-1);
            Punto p2=LisPunt.elementopos(i);
            Segmento S(p1,p2);
            LisSeg.agregarprincipio(S);
    }
    int tam = LisSeg.cantidadelem();
    for(int i=0; i<tam; i++){
        Segmento Aux=LisSeg.elementopos(i);
        sumatoria+= Aux.longitud();
    }
     cout<< "resultado del problema 1: " << sumatoria ;

    /* //resolucion del cohete
    Punto r1(6,0);
    Punto r2(0,12);
    Punto m3(2,0);
    Punto m2(1,8);
    Punto m1(8,16);
    Punto a2(16,16);
    Punto b2(16,0);
    Punto c2(0,16);
    Punto d2(0,0);
    Punto a1(4,4);
    Punto b1(4,0);
    Punto c1(0,4);
    Punto d1(0,0);
    Figura2d* Cchico= new Cuadrado(a1,b1,c1,d1);
    Figura2d* Cgrande= new Cuadrado(a2,b2,c2,d2);
    Figura2d* Circ= new Circulo(a1,6);
    Figura2d* TriIsoG= new Triangulo(d1,b2,m1);
    Figura2d* TriIsoC= new Triangulo(d1,m3,m2);
    Figura2d* TriRec1= new Triangulo(d1,r1,r2);
    float areacchico= Cchico->areaFigura();
    float areacircu= Circ->areaFigura();
    AdminFig admin;
    admin.agregarFig(TriIsoG);
    admin.agregarFig(Circ);
    admin.agregarFig(TriIsoC);
    admin.agregarFig(TriIsoC);
    admin.agregarFig(TriIsoC);
    admin.agregarFig(TriIsoC);
    admin.agregarFig(Cchico);
    admin.agregarFig(Cchico);
    admin.agregarFig(Cchico);
    admin.agregarFig(Cgrande);
    admin.agregarFig(Cgrande);
    admin.agregarFig(TriRec1);
    admin.agregarFig(TriRec1);
    Figura2d* fnueva;
    int k= admin.devuelvetam();
    int resultado=0;
    for(int i=0; i<k; i++)
    {
        fnueva=admin.obtenerFig(i);
        float area= fnueva->areaFigura();
        if ((areacchico!=area) && (areacircu!=area))
            resultado+=area;
        else
            resultado-=area;
    }
    cout << "el area del cohete es de : " << resultado << endl;
    */
    return 0;
}
