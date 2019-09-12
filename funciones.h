/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   funciones.h
 * Author: mariano
 *
 * Created on 8 de septiembre de 2019, 01:10
 */

#ifndef FUNCIONES_H
#define FUNCIONES_H

#ifdef __cplusplus
extern "C" {
#endif
   
    typedef struct{
        char nombre[40];
        char legajo[14];
        float prom;
    }STR_ALUMNOS;
    
    FILE* open (char const *archivo, char const *modo);
    void recorrer (FILE * p,FILE * ptrNuevo);
    STR_ALUMNOS parcear (char aux[]);
   


#ifdef __cplusplus
}
#endif

#endif /* FUNCIONES_H */

