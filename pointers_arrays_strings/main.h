#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void);
void puts2(char *str);
int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void rev_string(char *s);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int i);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *src, char *dest, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
void print_chessboard(char (*a)[8]);

#endif
