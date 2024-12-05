#include <stdlib.h>
#include <stdio.h>

int main()
{
    // las politicas de edición de archivos
    FILE *archivo = fopen("hola.txt", "w");
    // si el apuntador apunta a algo
    if (archivo == NULL){
        printf("No tenemos archivo que editar (error)\n");
        return 0;
    }
    fprintf(archivo,"Hola bebe!\n");
    fclose(archivo);

    return 0;
}
