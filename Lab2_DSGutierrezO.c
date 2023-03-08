#include <stdio.h>
#include <stdlib.h>

//Declaracion de variables globales
//int i;

/*Declaracion de Estructura*/
typedef struct micros{
	char *nombre;
	char *fabricante;
	int arqui;
}micros_e;

typedef struct{
	int n;
	micros_e *dato;
}registro;

/*Prototipo de funcion*/
//void microsPrint(struct micros dato[]);
//Declaracion de Estructura

/*typedef struct micros_e{
	char nombre[20];
	char fabricante [20];
	int arqui;
}micros;*/

//Prototipo de funcion

void portada(){
	printf("\n\nLaboratorio 2 \n\n");
	printf("Alumno: David Sebastian Gutierrez Ortega 18060734\n");
	printf("Asignatura: Arquitectura de Programacion Para Hardware\n");
	printf("Tema: Memoria dinamica\n");
	printf("Programa clasificador de microcontroladores por su arquitectura utilizando memoria dinamica\n\n");
	printf("Pulse la tecla Enter para continuar...\n");
	getchar();
}

/*void impresion_datos(struct micros_e dato[]){
  		printf("\tNombre: %s\n",dato[i].nombre);
		printf("\tFabricante: %s\n",dato[i].fabricante);
		printf("\tArquitectura: %d\n\n",dato[i].arqui);
}
void portada();
void impresion_datos(struct micros_e dato[]);*/

void portada();

int main()
{
	int i=0;
	registro x;
	portada(); 
	
	printf("Numero de micros: ");
	scanf("%d",&x.n);
	
	//micros dato[n];
	x.dato = (micros_e*)malloc(x.n*sizeof(micros_e));
	/*DATOS DE ENTRADA O CAPTURACION DE DATOS*/
	for(i=0;i<x.n;i++){	
		printf("\nNombre: ");
		scanf("%s",&x.dato[i].nombre);
		printf("\nFabricante: ");
		scanf("%s",&x.dato[i].fabricante);
		printf("\nArquitectura: "); 
		scanf("%d",&x.dato[i].arqui);
		
		/*validacion para el tipo de arquitectura*/
		while (x.dato[i].arqui!=8 && x.dato[i].arqui!=16 &&x.dato[i].arqui!=32 )
		{
		printf("Valor de arquitectura no valida!\n");
		printf("Arquitectura:");
	    scanf("%d",&x.dato[i].arqui);
        }
 	 }    
 	 
  //Datos(dato);
//	void Datos(struct micros_e dato[]){
//	int i;
	
	system("cls");/*Limpia consola*/
	
	printf("\n**Microcontroladores de 8 bits**\n");

 	for(i=0;i<x.n;i++){
  		if(x.dato[i].arqui == 8){
  			printf("\tNombre: %s\n",&x.dato[i].nombre);
			printf("\tFabricante: %s\n",&x.dato[i].fabricante);
			printf("\tArquitectura: %d\n\n",x.dato[i].arqui);
  		}
 	}
 	
	printf("\n**Microcontroladores de 16 bits**\n");
  
  	for(i=0;i<x.n;i++){
  		if(x.dato[i].arqui == 16){
  			printf("\tNombre: %s\n",&x.dato[i].nombre);
			printf("\tFabricante: %s\n",&x.dato[i].fabricante);
			printf("\tArquitectura: %d\n\n",x.dato[i].arqui);
  		}
  	}
  
	printf("\n**Microcontroladores de 32 bits**\n");
 		for(i=0;i<x.n;i++){
  		if(x.dato[i].arqui == 32){
  			printf("\tNombre: %s\n",&x.dato[i].nombre);
			printf("\tFabricante: %s\n",&x.dato[i].fabricante);
			printf("\tArquitectura: %d\n\n",x.dato[i].arqui);
  		}
  	}
}
