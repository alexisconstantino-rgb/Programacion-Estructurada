#include <stdio.h>

/*
 * Validación de argumentos:
 *      Comprobar que el usuario proporcione exactamente un argumento, en este caso el nombre del archivo. Si se
 *      omite o se ponen más de uno mostrar un mensaje de error indicando error en el número de argumentos y
 *      finalizar el programa de forma segura.

 * Control de errores de apertura:
 *      Si al intentar abrir el archivo en modo de solo lectura, resulta que el archivo no existe o no se puede
 *      abrir, mostrar un mensaje de error y finalizar el programa de forma segura.

 * Lectura eficiente:
 *      Leer el archivo carácter por carácter (o línea por línea) hasta llegar al final del archivo.

 * Liberación de recurso:
 *      Cerrar correctamente el archivo antes de finalizar el programa.
*/

FILE *FARCH;
int leerArch(char *name_file);

int main (int argc, char *argv[]) // *argv[] == **argv
{
        char *nameArch;
        if(argc < 2){
                printf("Forma de uso -> ./<leer> <nombre del archivo . extension>\n");
                return 1;
        }
        nameArch = argv[1];
        if(leerArch(nameArch) == 1)
                printf("No se pudo leer el archivo\n");

        return 0;
}

int leerArch(char *name_file){
        FARCH = fopen(name_file, "r");
        char contenido[2000];
        if(FARCH == NULL){
                return 1;
        }
        while(fgets(contenido, sizeof(contenido), FARCH)){
                printf("%s", contenido);
        }
        fclose(FARCH);
        return 0;
}
