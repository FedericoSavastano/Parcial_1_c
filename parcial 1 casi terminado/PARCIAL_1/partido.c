#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "partido.h"

#define TRUE 0
#define FALSE 1


void hardcodeoPartidos(ePartido* listaPartidos, int cantidad)
{
    int codigoPartido[]={1,2,3};
    int codigoVisitante[]={8,9,10};
    int codigoLocal[]={4,2,5};
    int codigoReferi[]={2,1,3};


    int dia[]={20,5,16};
    int mes[]={8,3,4};
    int anio[]={2019,2019,2019};

    int i;

    for(i=0;i<cantidad;i++)
    {
        listaPartidos[i].codigoPartido=codigoPartido[i];
        listaPartidos[i].codigoVisitante=codigoVisitante[i];
        listaPartidos[i].codigoLocal=codigoLocal[i];
        listaPartidos[i].codigoReferi=codigoReferi[i];

        listaPartidos[i].fechaPartido.dia=dia[i];
        listaPartidos[i].fechaPartido.mes=mes[i];
        listaPartidos[i].fechaPartido.anio=anio[i];

        listaPartidos[i].estaVacioPartido=FALSE;

    }

}

/*


void mostrarPartidos (ePartido* listaPartidos, int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("El dia %d / %d / %d juegan : \n", listaPartidos[i].fechaPartido.dia, listaPartidos[i].fechaPartido.mes, listaPartidos[i].fechaPartido.anio);


        printf(" %s  (local)  vs.  %s (visitante) \n", listaPartidos[i].)
    }
}
*/

void organizarPartidosxFecha(ePartido* listaPartidos, int cantidad)
{
    int i;
    int j;
    ePartido auxPartido;

     for(i=0;i<cantidad-1;i++)
    {
        for(j=i+1;j<cantidad;j++)
        {
            if(listaPartidos[i].fechaPartido.anio > listaPartidos[j].fechaPartido.anio)
            {
                auxPartido=listaPartidos[i];
                listaPartidos[i]=listaPartidos[j];
                listaPartidos[j]=auxPartido;
            }

            if(listaPartidos[i].fechaPartido.anio == listaPartidos[j].fechaPartido.anio)
            {
                if(listaPartidos[i].fechaPartido.mes > listaPartidos[j].fechaPartido.mes)
                {
                     auxPartido=listaPartidos[i];
                    listaPartidos[i]=listaPartidos[j];
                    listaPartidos[j]=auxPartido;
                }

            }

            if(listaPartidos[i].fechaPartido.mes == listaPartidos[j].fechaPartido.mes)
            {
                if(listaPartidos[i].fechaPartido.dia > listaPartidos[j].fechaPartido.dia)
                {
                     auxPartido=listaPartidos[i];
                    listaPartidos[i]=listaPartidos[j];
                    listaPartidos[j]=auxPartido;
                }
            }



        }
    }
}




