/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mariano
 *
 * Created on 31 de agosto de 2019, 02:13
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h" 


int main(int argc, char** argv) {
    FILE *ptr=NULL;
    FILE *ptr1=NULL;
    FILE *ptr2=NULL;
    FILE *ptrNuevo=NULL;
        
    ptr=open("Prog1.txt", "r");
    ptrNuevo=open("resul.txt", "a+");   
    recorrer(ptr,ptrNuevo);
        
    ptr1=open("Prog2.txt", "r");
    recorrer(ptr1,ptrNuevo);
        
    ptr2=open("Prog3.txt", "r");
    recorrer(ptr2,ptrNuevo);
    
    rewind(ptrNuevo);
    fclose(ptr);
    fclose(ptr1);
    fclose(ptr2);
    fclose(ptrNuevo);
    exit (EXIT_SUCCESS);
}