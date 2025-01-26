/*
 * DISCLAIMER:
 * OSD is not responsible for any damages caused by memory leaks, buffer overflows, etc.
 * The user is responsible for ensuring that input strings are properly null-terminated.
 * 
 * HEADER FILE FOR strlib (strlib.h)
 * COMPATIBLE FOR C VERSIONS BEFORE 1999 (C99)
 * 
 * OSD - Open-Sourced Development
 * 2025 OSD. All rights reserved.
 * This code is free software; you can redistribute it and/or modify it!
 */

#include <stddef.h>

size_t strlen(char* str);
bool strequal(char* str1, char* str2); //
char* strcpy(char* dest, char* src);
char* strncpy(char* dest, char* src, size_t n);
int cmpstr(char* str1, char* str2);
size_t strdiff(char* str1, char* str2);
size_t strndiff(char* str1, char* str2, size_t n);
inline char*strcat(char* src, char* dest);
char* strncat(char* src, char* dest, size_t n);
char* strdup(char* src);
char* strchr(char* str, int c);
char* strnchr(char* str, int c, size_t n);
char* strrstr(char* str, int c);
int strstr(char* haystack, char* needle);
char* strreplace(char* str, char* old, char* new_str);
char* reverse(char* str);
char* trim(char* str, size_t index); //
//void* toString(void* VALUE); //SCRAPPED MAYBE FOR NOW
void bsort(int* arr, size_t len);
void* readptrchain(void* arr, size_t P_SIZE, size_t ARR_SIZE);
