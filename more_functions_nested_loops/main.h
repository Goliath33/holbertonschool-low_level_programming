#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/** 
 * fichier de configuration + appel de librairie 
 * avec les fonctions de rappele
 */

int _abs(int);
int main(void);
int _isalpha(int c);
int _isupper(int c);
int _islower(int c);
int _isdigit(int c);
int _putchar(char c);
int mul(int a, int b);
int print_sign(int n);
int print_last_digit(int);
void more_numbers(void);
void jack_bauer(void);
void times_table(void);
void print_line(int n);
void print_numbers(void);
void print_alphabet(void);
void print_alphabet_x10(void);
void print_most_numbers(void);
void print_diagonal(int n);

#endif
