#include<stdio.h>

main (){
	int *punt;
	int a=2,nose;
	punt=&a;
	printf("Contenido del puntero: %d",*punt);
	printf("\nDireccion de memoria almacenada por el puntero: %d",punt);
	printf("\nDireccion de la variable: %d",&a);
	printf("\nDireccion del puntero: %d",&punt);
	nose=sizeof(a);
	printf("\nTamano de la variable: %d",nose);
	return 0;
}
