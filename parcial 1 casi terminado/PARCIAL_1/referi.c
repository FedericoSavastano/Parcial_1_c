

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "referi.h"

#define TRUE 0
#define FALSE 1



void hardcodeoReferies (eReferi* listaReferies, int cantidad)
{

    int codigoReferi[] = {1,2,3,4};
    char apellido[] [31] = {"Asfancur","Hochbiu","Motoco","Polonio"};
    char nombre[] [31] ={"Marcelino","Marcelina","Marcelo","Marcela"};
    char sexo[] ={'M','F','M','F'};
    char email[] [31] ={"fulbito@altavista.com","pocopipi@yahoo.com","arbitruqui@ormail.com","marpolonio@gmail.com"};
    /*
    int dia[]={31};
    int mes[]={10};
    int anio[]={1992};

    */

    int i;

    for(i=0;i<cantidad;i++)
    {

        listaReferies[i].codigoReferi=codigoReferi[i];
        strcpy(listaReferies[i].apellido,apellido[i]);
        strcpy(listaReferies[i].nombre,nombre[i]);
        listaReferies[i].sexo=sexo[i];
        strcpy(listaReferies[i].email,email[i]);
        listaReferies[i].fechaNacimiento.dia=10;
        listaReferies[i].fechaNacimiento.mes=3;
        listaReferies[i].fechaNacimiento.anio=1998;

        listaReferies[i].estaVacioReferi=FALSE;


    }


    printf("Hardcodeo de referis realizado\n");

}



int encontrarReferixCodigo(eReferi* listaReferis, int cantidad, int codigo)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        if(codigo == listaReferis[i].codigoReferi)
        {
            return i;
            break;
        }
    }

    return -1;
}



void mostrarUnReferi(eReferi* listaReferis, int cantidad, int codigo)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        if(codigo == listaReferis[i].codigoReferi)
        {
            printf("%s %s", listaReferis[i].nombre, listaReferis[i].apellido);
        }
    }

}
