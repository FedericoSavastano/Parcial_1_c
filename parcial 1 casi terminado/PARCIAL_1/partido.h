typedef struct{
    int dia;
    int mes;
    int anio;

}eFechaPartido;




typedef struct{
    int codigoPartido;
    int codigoVisitante;
    int codigoLocal;
    int codigoReferi;
    eFechaPartido fechaPartido;

    int estaVacioPartido;

}ePartido;




void organizarPartidosxFecha(ePartido* listaPartidos, int cantidad);
