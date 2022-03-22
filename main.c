#include "header.h"

int main()
{
    int vector[] = {1,2,3,4,5};
    int dato = 40;
    int resultado, cant = 5;
    resultado = busquedaBinaria(vector, cant, dato);
    if(resultado != -1){
        printf("El dato existe en el vector");
    }else{
        printf("El dato no existe en el vector");
    }
    return 0;
}
