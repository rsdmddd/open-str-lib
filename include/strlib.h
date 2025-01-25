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

size_t strlen(const char* str);
size_t strequal(const char* str1, const char* str2);
char* strcpy(char* dest, const char* src);
char* strncpy(char* dest, const char* src, const size_t n);
int cmpstr(const char* str1, const char* str2);
size_t strdiff(const char* str1, const char* str2);
size_t strndiff(const char* str1, const char* str2, const size_t n);
inline char*strcat(const char* src, const char* dest);
char* strncat(const char* src, const char* dest, const size_t n);
char* strdup(const char* src);
char* strchr(char* str, const int c);
char* strnchr(char* str, const int c, const size_t n);
char* strrstr(char* str, const int c);
int strstr(const char* haystack, const char* needle);
char* strreplace(char* str, const char* old, const char* new_str);
char* reverse(char* str);
char* trim(char* str, size_t index);
//void* toString(void* VALUE); //SCRAPPED MAYBE FOR NOW
void bsort(int* arr, size_t len);
void* readptrchain(void* arr, size_t P_SIZE, size_t ARR_SIZE);
