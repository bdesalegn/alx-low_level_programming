#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdio.h>
#include <stdlib.h>
/**
 * _putchar - write the characther c to stdout
 * @c: The character to print 
 *
 * Return: On Success 1 else appropriate error.
 */
/*prototype _putchar*/
int _putchar(char c);

/*prototype function that prints a name.*/
void print_name(char *name, void (*f)(char *));

/*prototype function that executes a function*/
void array_iterator(int *array, size_t size, void (*action)(int));

/*prototype  function that searches for an integer.*/
int int_index(int *array, int size, int (*cmp)(int));

#endif/* FUNCTION_POINTERS */
