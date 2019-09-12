/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define LONGCHAR 100

FILE* open (char const *archivo, char const *modo){
    FILE *a;
    if ((a=fopen(archivo, modo))==NULL){
        printf("No se ha podido abrir el archivo prog1");
        exit(EXIT_FAILURE);
    }
    return a;
}

void recorrer (FILE * p,FILE * ptrNuevo){
    char aux[LONGCHAR];                 //char aux por linea del archivo txt
    int i=0;                           //suma i para el titulo
    
    STR_ALUMNOS alumno;
    
    fprintf(ptrNuevo,"Materia: Programacion %d\n\n",(i+1));
    printf("Materia: Programacion %d\n\n",(i+1));
    while (!feof(p)){
        fgets(aux,LONGCHAR+1,p);
        alumno = parcear(aux);
                
        if (alumno.prom>=6){
            printf("Nombre:%s\t\tLegajo:%s\t\tPromedio:%.2f\n\n", alumno.nombre, alumno.legajo, alumno.prom);// imprime todos los alumnos por pantalla
            fprintf (ptrNuevo,"Nombre:%s\tLegajo:%s\tNotaFinal:%.2f\n", alumno.nombre, alumno.legajo, alumno.prom);
        }
        memset(aux,'\0',LONGCHAR);        
    }
}
STR_ALUMNOS parcear (char aux[]){
        STR_ALUMNOS alumno;
        
        char *token=strtok(aux,",");
        memset(alumno.nombre,'\0',40);
        strcpy(alumno.nombre,token);
        
        memset(alumno.legajo,'\0',14);
        strcpy(alumno.legajo,strtok(NULL,","));
        
        float n1 = atof(strtok(NULL,","));
        float n2 = atof(strtok(NULL,","));
        float n3 = atof(strtok(NULL,","));
        alumno.prom = (n1+n2+n3)/3;        
        return alumno;
}
