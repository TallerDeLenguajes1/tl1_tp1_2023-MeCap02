#include<stdio.h>

int cuadrado_1(int a);
void cuadrado_2(int a);
void invertir(int a,int b);
void orden(int a,int b);

int main (){
	int *punt1=0; int *punt2=0;
	int a,b,c=0;
	puts("Ingrese el valor de a y b");
	scanf("%d %d",&a,&b);
	printf("Contenido de la variable a: %d",a);
	printf("\nDireccion de la variable a: %d",&a);
	cuadrado_2(a);
	c=cuadrado_1(a);
	printf("\nEl cuadrado de a es: %d",c);
	punt1=&a;
	punt2=&b;
	invertir(a,b);
	orden(a,b);
	return 0;
}

void invertir(int a,int b){
	int aux;
	aux=a;
	a=b;
	b=aux;
	printf("\nNuevo valor de a: %d",a);
	printf("\nNuevo valor de b: %d",b);
}

void orden(int a,int b){
	int aux;
	if(a>b){
		printf("\nValor mas grande: %d",a);
		printf("\nValor mas pequeno: %d",b);
	}else{
		if(b>a){
			aux=a;
	        a=b;
	        b=aux;
	        printf("\nValor mas grande: %d",a);
		    printf("\nValor mas pequeno: %d",b);
		}else{
			printf("\nAmbas variables son iguales");
		}
	}
}

int cuadrado_1(int a){
	return (a*a);
}

void cuadrado_2(int a){
	printf("\nEl cuadrado de a es: %d",a*a);
}
