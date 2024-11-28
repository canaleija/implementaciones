#include <stdio.h>
// prototipos
struct fecha
{
    // dia, mes, anio
    int dia;
    int mes;
    int anio; 
};


// Persona
// nombres
// apellido paterno
// apellido materno
// ciudad
// estado
// fecha de nacimiento
// sexo hombre/ mujer/ ot
// curp : implementar un fucion que calcule la curp




int main()
{
    struct fecha mi_cumple;
    struct fecha cumple_hermana;

    mi_cumple.dia = 29;
    mi_cumple.mes = 7;
    mi_cumple.anio = 2001;

    cumple_hermana.dia = 20;
    cumple_hermana.mes = 2;
    cumple_hermana.anio = 1994;

    printf("El cumple de mi hermana es: \n");
    printf("%d/%d/%d\n",cumple_hermana.dia,cumple_hermana.mes,cumple_hermana.anio);

    struct fecha cumpleanios [] = {cumple_hermana,mi_cumple};
    cumpleanios[1].mes = 10;


    printf("%d\n",cumpleanios[1].mes);

    return 0;
}


// implementaciones