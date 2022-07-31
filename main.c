//Calificacion 95/100
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
    //Datos para el registro 
    struct estu{ //Declaracion de registro 
        char name[30];
        char materia[40];
        float nota[3];
                        
    };
    struct estu reg_estu[4];// arreglo de registro 
    int i;
    float totalnota, promedio;
    
int main (){
    int select,cc, repe, i = 0, j=0, temp, z;
    char find_char, caracter ;

    // presentacion 
    printf ("\t\t\t\tUniversidad Tecnologica de Panama\n\t\t\tFacultad de Ingenieria en sistemas computacionales\n\t\t\t\t    Ingenieria de Software\n\n\n Nombre: Mayra Fernandez \t\t Salon 1SF-121\n\n\n");
    printf ("\t\t\t\t  Cadenas, arreglos y registros  \n\t\t\t\t<--------------------------------->\n");
    //Inicio del menu 
    do {
        printf ("\n\n 1| Busqueda de un caracter en una cadena de caracteres\n 2| Ordenamiento de un arreglo unidimensional \n 3| Manejo de Registros\n 4| Salir del programa\n\nIngrese el numero que corresponde a lo que desea realizar:  ");
        scanf ("%i", &select);
        
        switch (select){
            case 1:{
                 printf ("\n\nHola usuario, bienvenido\nPor favor ingrese el tamano de su arreglo: ");
                scanf ("%i", &cc);
                char array [cc];
                printf ("Introduzca la cadena  :  ");
                scanf ("%s", &caracter);
                caracter = array[cc];
                printf ("\nIngrese el caracter que desea buscar:  ");
                scanf ("%s", &find_char);
                printf ("Lo siento profe, pero este problema no sabía resolverlo, por más que investigué e intenté, no pude, las demás funciones si funcionan :(");
                }
                break;
                
                //Ordenamiento de arreglo unidimensional usando ordenamiento burbuja
                
                case 2:{
                    
                    int array [6];
                    for (repe = 0; repe < 6; repe ++){
                        printf ("Introduzca el caracter de la posicion %i :  ", repe);
                        scanf ("%i", &array [repe]);
                    }
                    
                    printf ("\n\n\t\t\t --Arreglo Antes de Ordenar--\n\n");
                    for (int i=0; i < 6; i++){
                        printf("  [%i]", array[i]);
                    }
                    
                    // Algoritmo de burbuja 
                    for (z=0; z<6; z++){
                        for (j=0 ; j<6 - 1; j++){
                            if (array[j] > array[j+1]){
                                temp = array[j];
                                array[j] = array[j+1];
                                array[j+1] = temp;
                            }
                        }
                    }
                    
                    printf ("\n\n\t\t\t--Arreglo despues de ordenar--\n\n");
                    for (i=0; i < 6; i++){
                        printf ("  [%i]", array [i]);
                    }
                    
            }
            break;
            
            //Manejo de registros 
            case 3: {
                for (i = 0; i < 4; i++){
                    printf ("Introduzca el nombre del estudiante: \n\n");
                    scanf ("%s", reg_estu[i].name);
                    printf ("Introduzca la materia: \n");
                    scanf ("%s", reg_estu[i].materia);
                    for (j = 0; j < 3; j++){
                        printf (" \nIntroduzca su nota en %s: \n", reg_estu[i].materia);
                        scanf ("%f", &reg_estu[i].nota[j]);
                    }
                }
                //El ciclo repetitivo for va a buscar los datos dentro del registro y dentro del arreglo de nota  
                for (i=0; i < 4; i++){
                    float totalnota =0;
                    for (j = 0; j < 3; j++){
                        totalnota+= reg_estu[i].nota[j];
                    }
                    promedio = totalnota/3;
                    printf ("--- El estudiante %s tiene un promedio de %.2f en la materia de %s \n\n", reg_estu[i].name ,promedio, reg_estu[i].materia);
                }
            }   
            break;

            
        }
        
    } while (select < 4 && select > 0);
    printf ("\n\nSaliendo... \n---Espero que hayas encontrado lo que buscabas, hasta luego--");

}




