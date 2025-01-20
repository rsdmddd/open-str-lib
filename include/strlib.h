#ifndef STRLIB_H
#define STRLIB_H

#include <stddef.h>

size_t strlen(const char *str); //COMPLETED
char* strcpy(char *dest, const char *src); //COMPLETED
char* nstrcpy(char *dest, const char *src, size_t n);
char* strncpy(char *dest, const char *src, size_t n); //COMPLETED
int bstr(const char *str1, const char *str2); //COMPLETED
int strcmp(const char *str1, const char *str2); //COMPLETED
int strncmp(const char *str1, const char *str2, size_t n); //COMPLETED
/*int astrcmp(const char *str1, const char *str2); SCRAPPED
int nastrcmp(const char *str1, const char *str2);  SCRAPPED */
char* strcat(char *dest, const char *src); // COMPLETED
char* strncat(char *dest, const char *src, size_t n); // COMPLETED
inline char* strdup(const char *src); // COMPLETED
char* strchr(const char *str, int c); // COMPLETED
char* strrchr(const char *str, int c);
char* strstr(const char *haystack, const char *needle);

void* malloc(size_t size);
void free(void *ptr);
void* realloc(void *ptr, size_t new_size);
void* calloc(size_t num, size_t size);
void exit(int status);

int atoi(const char *str);
char* itoa(int num, char *str, int base);

int abs(int x);
void qsort(void *base, size_t num_elements, size_t element_size, int (*cmp)(const void *, const void *));
void* bsearch(const void *key, const void *base, size_t num_elements, size_t element_size, int (*cmp)(const void *, const void *));

#endif
