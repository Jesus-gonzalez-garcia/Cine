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
    
    int opciones,resultado1,resultado2,resultado3,resultado4,resultado5,resultado6,resultado7,resultado8;
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
        printf("9.Ayuda\n");
         printf("10.Salir\n");
        printf("Ingrese la opcion que deseas:\n");
        scanf("%d", &opciones);
        switch(opciones){
            case 1:
                
                switch (opciones){
                    
                    case 1: printf("Elige el numero de Boletos:\n");
                        scanf("%d",&resultado1);
                        printf("El numero de boletos comprados son:%d\n",resultado1);
                        

                        
                 case 2: printf("Elige el numero de Asientos:\n");
                        scanf("%d",&resultado1);
                        printf("El numero de asientos es:%d\n\n\n",resultado1);
                        
                }break;
           
            case 2:
             
                switch(opciones){
                        
                        
                    case 2:printf("Elige el numero de boletos:\n");
                            scanf("%d",&resultado2);
                            printf("El numero de boletos VIP comprados son:%d\n",resultado2);
                        
                    case 3: printf("Elige el Numero de asientos VIP:\n");
                        scanf("%d",&resultado2);
                        printf("El numero de asientos VIP es:%d\n\n\n",resultado2);
                 
                        
                }break;
                
                
            case 3:
                printf("1.Accion\n");
                printf("2.Aventura\n");
                printf("3.Terror\n");
                printf("Elige el genero de pelicula:\n");
                scanf("%d",&opciones);
                switch(opciones){
                    case 1:printf("Usted eligio el genero Accion\n\n\n");
                        printf("Las peliculas de accion son las siguientes:\n");
                        printf("1.Avengers End Game\n 2.El Gran Salto\n 3.Otro Dia Para Matar\n 4.Liga De La Justicia\n");
                        printf("Elija la pelicula que desea ver:");
                         scanf("%d",&resultado3);
                        if (resultado3==1) {
                        printf("Usted Eligio ver la pelicula:Avengers End Game\n\n\n");
                        }
                        if (resultado3==2){
                        printf("Usted eligio ver la pelicula:El gran salton\n\n");
                        }
                        if (resultado3==3){
                        printf("Usted eligio ver la pelicula:Otro dia para matar\n\n\n");
                        }
                        if (resultado3==4){
                            printf("Usted eligio ver la pelicula:Liga de la justicia\n\n\n");
                        }
    
                        
                        break;
                        
                        break;
                    case 2:printf("Usted eligio el genero Aventura\n\n\n");
                        printf("Las peliculas de aventura son las siguientes:\n");
                        printf("1.Deadpool\n 2.La leyenda De Tarzan\n 3.King Kong\n 4.Juamanji");
                        scanf("%d",&resultado3);
                        if (resultado3==1) {
                            printf("Usted Eligio ver la pelicula:Deadpool\n\n\n");
                        }
                        if (resultado3==2){
                            printf("Usted eligio ver la pelicula:La leyenda de Tarzan\n\n\n");
                        }
                        if (resultado3==3){
                            printf("Usted eligio ver la pelicula:King Kong\n\n\n");
                        }
                        if (resultado3==4){
                            printf("Usted eligio ver la pelicula:Jumanji\n\n\n");
                        }
                        default:
                        printf("La opcion que ingresaste es incorrecta\n");
                        break;
                        
                                          break;
                        
                                          break;
                        break;
                    case 3:printf("Usted eligio el genero Terror\n\n\n");
                        printf("Las peliculas de terror son las siguientes:\n");
                        printf("1.IT\n 2.El Conjuro \n 3.Anabella \n 4.La noche de el Demonio\n");
                        printf("Seleccione una opcion:\n\n");
                         scanf("%d",&resultado3);
                        if (resultado3==1) {
                            printf("Usted Eligio ver la pelicula:IT\n\n\n");
                        }
                        if (resultado3==2){
                            printf("Usted eligio ver la pelicula:El conjuro\n\n\n");
                        }
                        if (resultado3==3){
                            printf("Usted eligio ver la pelicula:Anabella\n\n\n");
                        }
                        if (resultado3==4){
                            printf("Usted eligio ver la pelicula:La noche de el Demonio\n\n\n");
                        }
                    
                        break;
                }
                                  break;
            case 4:
                printf("1.Palomitas\n");
                printf("2.ICE\n");
                printf("3.Nachos\n");
                printf("4.Coca Cola\n");
                printf("A continuacion elija el numero de comida que desea:\n\n");
                scanf("%d",&resultado4);
                if (resultado4==1) {
                printf("Usted Eligio comprar unas:Palomitas\n\n\n");
                }
                if (resultado4==2){
                printf("Usted eligio comprar un:ICE\n\n\n");
                }
                if (resultado4==3){
                printf("Usted eligio comprar unos:Nachos\n\n\n");
                }
                if (resultado4==4){
                printf("Usted eligio comprar una Coca Cola\n\n\n");
                }
             
                break;
            case 5:
                printf("1.Gomitas\n");
                printf("2.Chocolates\n");
                printf("3.Aciditos\n");
                printf("A continuacion elija el numero de Golosina que desea:\n\n");
                scanf("%d",&resultado5);
                    if (resultado5==1) {
                    printf("Usted Eligio comprar unas:Gomitas\n\n\n");
                    }
                    if (resultado5==2){
                    printf("Usted eligio comprar unos:Chocolates\n\n\n");
                    }
                    if (resultado5==3){
                    printf("Usted eligio comprar unos:Aciditos\n\n\n");
                    }
                
                break;
            case 6:
                printf("1.Palomitas y bebida\n");
                printf("2.Bebida y dulces\n");
                printf("3.Dulces y Palomitas\n");
                printf("Ingrese el Combo que quieres comprar:");

                scanf("%d",&resultado6);
                if (resultado6==1) {
                printf("Usted Eligio comprar el combo:Paloma Clasica\n\n\n");
                }
                if (resultado6==2){
                printf("Usted eligio comprar el combo:Bebida Endulsada\n\n\n");
                }
                if (resultado6==3){
                printf("Usted eligio comprar el combo:Dulce Palomo\n\n\n");
                }
                break;
                
            case 7:
                printf("1.Accion\n");
                printf("2.Aventura\n");
                printf("3.Terror\n");
                printf("Elige el genero de pelicula:");
                scanf("%d",&resultado7);
                        printf("Las peliculas de accion son las siguientes:\n");
                        printf("1.Avengers End Game\n 2.El Gran Salto\n 3.Otro Dia Para Matar\n 4.Liga De La Justicia\n");
                         scanf("%d",&resultado7);
                        if (resultado7==1) {
                        printf("Usted Eligio ver la pelicula:Avengers End Game\n\n\n");
                        }
                        if (resultado7==2){
                        printf("Usted eligio ver la pelicula:El gran salton\n\n");
                        }
                        if (resultado7==3){
                        printf("Usted eligio ver la pelicula:Otro dia para matar\n\n\n");
                        }
                        if (resultado7==4){
                            printf("Usted eligio ver la pelicula:Liga de la justicia\n\n\n");
                        }
                break;
            case 8:
                printf("1.Membrecia Basica\n");
                printf("2.Membrecia Especial\n");
                printf("Que memebrecia deseas comprar:\n");
                scanf("%d",&resultado8);
                if (resultado8==1) {
                printf("Usted Eligio comprar:Membrecia basica\nContiene un descuento  para las categorias de pelicula:Terror y aventura,tambien para la comida incluyendo todo tipo de comida \n\n\n");
                }
                if (resultado8==2){
                printf("Usted eligio comprar:Mebrecia Especial\nContiene Descuentos en todas las categorias de peliculas y tambien cuenta con descuentos en la dulceria y comida incluyendo todas las golosinas y comidas\n\n");
                }
                break;
            
                case 9:
                printf("Usted debe de ingresar la opcion que desee con las teclas, despues de seleccionar una opcion se abrirar mas opciones de esa categoria y podria continuar comprando las cosas que desee, si su pedido a terminado oprima la tecla 10 y se quedara guardado todo lo que usted compro,todas las opciones a seleccionar se digitan con numero y no con caracteres de lo contrario no tomara su pedido que desea\n");
           
                
                break;
                
                case 10:
                printf("Gracias por preferir nuestros cines\n");
                              break;
                
                default:
                printf("La opcion que ingresaste es incorrecta\n");
                break;
            
        }
    }while(opciones!=10);
    return 0;
}
