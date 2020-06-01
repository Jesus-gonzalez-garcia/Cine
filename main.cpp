//
//  main.cpp
//  CINE
//
//  Created by Jesus Gonzalez on 26/05/20.
//  Copyright © 2020 Jesus Gonzalez. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int opciones,resultado,resultado2;
    do{
     
        printf("Menu de Opciones\n");
        printf("1.Boletos\n");
        printf("2.VIP\n");
        printf("3.Cartelera\n");
        printf("4.Comida\n");
        printf("5.Dulceria\n");
        printf("6.Combo Comida\n");
        printf("7.4D\n");
        printf("8.Membrecia\n");
        printf("9.Salir\n");
        printf("Ingrese la opcion que deseas:");
        scanf("%d", &opciones);
        switch(opciones){
            case 1:
                switch(opciones){
                    case 1:printf("Ingrese el Numero de boletos:\n");
                        scanf("%d",&resultado);
                       
                    case 2:printf("Ingrese el numero de asiento:\n");
                        scanf("%d",&resultado);
                        break;
                }break;
            case 2:
                switch(opciones){
                     
                    case 1: printf("Ingrese el numero de boletos:\n");
                        scanf("%d",&resultado2);
                       
                        case 2:printf("Ingrese el numero de asiento:\n");
                                scanf("%d",&resultado2);
                        break;
                }break;
            case 3:
                printf("1.Accion\n");
                printf("2.Aventura\n");
                printf("3.Romance\n");
                printf("Elige el genero de pelicula:");
                scanf("%d",&opciones);
                switch(opciones){
                    case 1:printf("Usted eligio el genero Accion\n\n\n");
                        break;
                    case 2:printf("Usted eligio el genero Aventura\n\n\n");
                        break;
                    case 3:printf("Usted eligio el genero Romance\n\n\n");
                        break;
                        
                }break;
            case 4:
                printf("1.Palomitas\n");
                printf("2.ICE\n");
                printf("3.Nachos\n");
                printf("4.Coca Cola");
                break;
            case 5:
                printf("1.Gomitas\n");
                printf("2.Chocolates\n");
                printf("3.Aciditos\n");
                break;
                
            case 6:
                printf("1.Palomitas y bebida\n");
                printf("2.Bebida y dulces\n");
                printf("3.Dulces y Palomitas\n");
                printf("Ingrese el Combo que quieres comprar:");
                scanf("%d",&opciones);
                switch(opciones){
                    case 1:printf("Usted eligio el combo paloma\n\n");
                        break;
                    case 2:printf("usted eligio el combo endulzado\n\n");
                        break;
                    case 3:printf("usted eligio el combo encaramelado\n\n");
                        break;
                }break;
                
            case 7:
                printf("1.Accion\n");
                printf("2.Aventura\n");
                printf("3.Romance\n");
                printf("Elige el genero de pelicula:");
                scanf("%d",&opciones);
                switch(opciones){
                    case 1:printf("Usted eligio el combo paloma\n\n");
                        break;
                    case 2:printf("usted eligio el combo endulzado\n\n");
                        break;
                    case 3:printf("usted eligio el combo encaramelado\n\n");
                        break;
                }break;
            case 8:
                printf("1.Membrecia Basica\n");
                printf("2.Membrecia Especial\n");
                printf("Que memebrecia deseas comprar:");
                scanf("%d",&opciones);
                switch(opciones){
                    case 1: printf("Usteed esta comprando la memerecia basica\n\n");
                        break;
                    case 2: printf("usted esta comprando la membrecia especial\n\n");
                        break;
                }break;

                
                case 9:
                break;
                
                default:
                printf("La opcion que ingresaste es incorrecta\n");
                break;
            
        }
    }while(opciones!=9);
    return 0;
}
