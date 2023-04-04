#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* Array(int size) {
	int i;
    int* arr = malloc(size * sizeof(int)); // Asigna memoria para el arreglo
    for (i = 0; i < size; i++) {
        arr[i] = rand() % 20; // Llena el arreglo con números alaetorios del 0 al 100
    }
    return arr; // Devuelve el arreglo
}

void print(int* random,int size){
		int i;
     printf("Arreglo: ");
    for (i = 0; i < size; i++) {
        printf("%d ", random[i]); // Imprime los elementos del arreglo
    }
}

void laSearch(int* random,int size,int encontrar){
    printf("Iniciemos la busqueda:\n");
    int pos=0;
    while(pos<size){
     if(random[pos]==encontrar){
         printf("El numero %d si esta en la lista",encontrar);
         break;
     } 
     else{
         pos++;
     }
    }
}

void burbuja(int* arreglo, int size) {
    int temporal,a,b,x,actual;
  for (x = 0; x < size; x++) {
    for (actual = 0; actual < size - 1; actual++) {
      int siguiente = actual + 1;
      if (arreglo[actual] > arreglo[siguiente]) {
        temporal=arreglo[actual];
        arreglo[actual]=arreglo[siguiente];
        arreglo[siguiente]=temporal;
      }
    }
  }
}
 
int main() {
    int size,encontrar;
    printf("Asigna un valor mayor o igual a 5:");
    scanf("%d",&size);
    while(size<5){
        printf("Hay que asignar un valor mayor o igual a 5:");
        scanf("%d",&size);
    }
    int* arr = Array(size); // Llama a la función para obtener el arreglo
    print(arr,size); //Llama a la función de impresión
    printf("\nIntroduce el numero que quieres buscar:");
    scanf("%d",&encontrar);
    laSearch(arr,size,encontrar);
    printf("\nAqui esta el arreglo ya ordenado:\n");
    burbuja(arr,size); //Llama a la función de ordenamiento burbuja
    print(arr,size); //Llama a la función de impresión
    printf("\n");
    free(arr); // Libera la memoria asignada al arreglo
    return 0;
}
