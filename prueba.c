/** **************************************************************************************************
 * Nombre:
 * Versión: 1.0000.0001
 *
 * Descripción: Leyendo un único caracter
 * ***************************************************************************************************
 * Autor: Juan Quintero
 * FECHA: 10-10-2024
 *************************************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include <inttypes.h>
#include <tgmath.h>


void AjusteLocal();

int main(int argc, char *argv[]) {

  AjusteLocal();

    printf("\n\n\n\n");

    
  //Imprime caracteres con acentos
  printf("á é í ó ú ñ Á É Í Ó Ú Ñ\n");




  /// salida del programa
  printf("\n\n-----------------------------------------\n\a");
  system("pause");
  return 0;

} //fin de main


/** Configura la localización a la localización predeterminada del sistema.
    permite escribir ñÑ y vocales acentuadas */
void AjusteLocal(){
  setlocale(LC_ALL,"");
  return;
}
