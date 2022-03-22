#include "header.h"

int busquedaBinaria(int vector[], int cant, int dato){
    int sup, inf, medio;
    inf = 0;
    sup = cant - 1;
    while(inf <= sup){
        medio = ((sup - inf) / 2)+inf;
        if(dato == vector[medio]){
            return medio;
        }else if(dato < vector[medio]){
            sup = medio - 1;
        }else{
            inf = medio + 1;
        }
    }
    return -1;
}
