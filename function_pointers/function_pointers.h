#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/** 
 * fichier de configuration + appel de librairie 
 * avec les fonctions de rappele
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));


#endif

