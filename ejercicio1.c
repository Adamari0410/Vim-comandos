/*
 *
 *
 *
 *
 * */
#include<stdio.h>
#include<stdlib.h>

typedef struct{
	char nombre[20];
	int victorias;
	int derrotas;	
}Equipo;

typedef struct{
	
	Equipo baloncesto;
	int perdidasBalon;
	int rebotesCogidos;
	char nombreMejorTriples[50];
	int numeroTriplesAnotador;

}Baloncesto;
typedef struct{
	Equipo futbol;
	int numeroEmpates;
	int numeroFavor;
	char nombreGoleador[50];
	int golesGoleador;


}Futbol;


void ingresarEquiposBaloncesto(Baloncesto *baloncesto, int equiposBaloncesto){

int victorias=0,derrotas=0, perdidasBalon=0, rebotesCogidos=0,numeroTriplesAnotador=0;
for(int i=0;i<equiposBaloncesto;i++){

printf("Ingrese el nombre del equipo de basquet:\n");
scanf("%s",(baloncesto+i)->baloncesto.nombre);

victorias=rand()%10+1;
derrotas=rand()%6+1;
perdidasBalon=rand()%6+1;
rebotesCogidos=rand()%6+1;
numeroTriplesAnotador=rand()%5+1;
(baloncesto+i)->baloncesto.victorias=victorias;

(baloncesto+i)->baloncesto.derrotas=derrotas;
(baloncesto+i)->perdidasBalon=perdidasBalon;
(baloncesto+i)->rebotesCogidos=rebotesCogidos;


printf("Ingrese el nombre del mejor anotador de triples:\n");
scanf("%s",(baloncesto+i)->nombreMejorTriples);


(baloncesto+i)->numeroTriplesAnotador=numeroTriplesAnotador;
}
}


void mostrarEquipoBaloncesto(Baloncesto *baloncesto,int equiposBaloncesto){

for(int i=0; i<equiposBaloncesto; i++){

printf("=========Equipo de Baloncesto  N.- %d=======================\n",i+1);
printf("Nombre del equipo de Baloncesto %d: %s\n",i+1,(baloncesto+i)->baloncesto.nombre);
printf("Victorias:%d\n",(baloncesto+i)->baloncesto.victorias);
printf("Derrotas:%d\n",(baloncesto+i)->baloncesto.derrotas);
printf("Numero de perdidas balon del equipo:%d\n",(baloncesto+i)->perdidasBalon);
printf("Numero de rebotes cogidos:%d\n",(baloncesto+i)->rebotesCogidos);
printf("Nombre del mejor anotador de triples: %s\n",(baloncesto+i)->nombreMejorTriples);
printf("Numero de triples del mejor anotador de triples: %d\n",(baloncesto+i)->numeroTriplesAnotador);

}

}

void ingresarEquiposFutbol(Futbol *futbol, int equiposFutbol){

int victorias=0,derrotas=0, numeroEmpates=0,numeroFavor=0,golesGoleador=0;
for(int i=0;i<equiposFutbol;i++){

printf("Ingrese el nombre del equipo de futbol:\n");
scanf("%s",(futbol+i)->futbol.nombre);

victorias=rand()%10+1;
derrotas=rand()%6+1;
numeroEmpates=rand()%6+1;
numeroFavor=rand()%6+1;
golesGoleador=rand()%5+1;
(futbol+i)->futbol.victorias=victorias;

(futbol+i)->futbol.derrotas=derrotas;
(futbol+i)->numeroEmpates=numeroEmpates;
(futbol+i)->numeroFavor=numeroFavor;


printf("Ingrese el nombre del goleador del equipo:\n");
scanf("%s",(futbol+i)->nombreGoleador);


(futbol+i)->golesGoleador=golesGoleador;
}
}
void mostrarEquipoFutbol(Futbol *futbol,int equiposFutbol){

for(int i=0; i<equiposFutbol; i++){

printf("=========Equipo de futbol N.- %d=======================\n",i+1);
printf("Nombre del equipo de futbol %d: %s\n",i+1,(futbol+i)->futbol.nombre);
printf("Victorias:%d\n",(futbol+i)->futbol.victorias);
printf("Derrotas:%d\n",(futbol+i)->futbol.derrotas);
printf("Numero de empates del equipo:%d\n",(futbol+i)->numeroEmpates);
printf("Numero de goles a favor:%d\n",(futbol+i)->numeroFavor);
printf("Nombre del goleador del equipo: %s\n",(futbol+i)->nombreGoleador);
printf("Numero de goles del goleador: %d\n",(futbol+i)->golesGoleador);

}

}



int main(){
int equiposFutbol=0,equiposBaloncesto=0;



printf("Ingrese el total de equipos de futbol\n");
scanf("%d",&equiposFutbol);

printf("Ingrese el total de equipos de baloncesto\n");
scanf("%d",&equiposBaloncesto);


Futbol *futbol=NULL;
futbol=malloc(equiposFutbol*sizeof(Futbol));


if(futbol==NULL){
printf("No se pudo separar lo que es la memoria.\n");
return 1;
}
Baloncesto *baloncesto=NULL;
baloncesto=malloc(equiposBaloncesto*sizeof(Baloncesto));
if(baloncesto==NULL){
printf("No se pudo separar lo que es la memoria.\n");
return 1;
}

ingresarEquiposBaloncesto(baloncesto,equiposBaloncesto);
mostrarEquipoBaloncesto(baloncesto, equiposBaloncesto);

ingresarEquiposFutbol(futbol,equiposFutbol);
mostrarEquipoFutbol(futbol,equiposFutbol);

free(futbol);
free(baloncesto);
return 0;
}
