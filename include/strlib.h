#ifndef STRLIB_H
#define STRLIB_H

#include <stddef.h>

size_t strlen(const char* str);
char* strcpy(char* dest, char* src);
char* strncpy(char* dest, char* src, const size_t n);
int cmpstr(char* str1, char* str2);
int strdiff(const char* str1, const char* str2);
int strdiffn(const char* str1, const char* str2, const size_t n);
char* strcat(const char* dest, const char* src);
char* strncat(const char* dest, const char* src, const size_t n);
char* strdup(const char* src);
char* strchr(char* str, const int c);
char* strnchr(char* str, int int c, const size_t n);
char* strrchr(const char* str, const int c);
int strstr(const char* haystack, const char* needle);
int bstr(const char* str1, const char* str2); // not completed here and below

void* malloc(size_t size);
void free(void *ptr);
void* realloc(void *ptr, size_t new_size);
void* calloc(size_t num, size_t size);
void exit(int status);

int atoi(const char* str);
char* itoa(int num, char* str, int base);

int abs(int x);
void qsort(void *base, size_t num_elements, size_t element_size, int (*cmp)(const void *, const void *));
void* bsearch(const void *key, const void *base, size_t num_elements, size_t element_size, int (*cmp)(const void *, const void *));

#endif
