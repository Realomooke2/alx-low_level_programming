#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>

void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
void set_string(char **s, char *to);

#endif
