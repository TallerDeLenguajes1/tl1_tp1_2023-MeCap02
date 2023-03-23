#include<stdio.h>

main (){
	int *punt;
	int a=2,nose;
	punt=&a;
	printf("Direccion de memoria almacenada por el puntero: %d",punt);
	printf("\nDireccion del puntero: %d",&punt);
	printf("\nDireccion de la variable: %d",&a);
	nose=sizeof(a);
	printf("\nTamano de la variable: %d",nose);
	printf("\nContenido del puntero: %d",*punt);
	return 0;
}
