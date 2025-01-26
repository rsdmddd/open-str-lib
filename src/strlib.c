/*
 * DISCLAIMER:
 * OSD is not responsible for any damages caused by memory leaks, buffer overflows, etc.
 * The user is responsible for ensuring that input strings are properly null-terminated.
 * 
 * SOURCE FILE FOR strlib (strlib.c)
 * COMPATIBLE FOR C VERSIONS BEFORE 1999 (C99)
 * 
 * OSD - Open-Sourced Development
 * 2025 OSD. All rights reserved.
 * This code is free software; you can redistribute it and/or modify it!
 */

#include <limits.h>
#include "strlib.h"

#define SIZE_MAX ((size_t)-1)

// Return the length of [str]. no nt
size_t strlen(char* str) {
  if (str==NULL) return SIZE_MAX;
  size_t length = 0;
  while (str[length] != '\0')
    length++;
  return length;
}

//Check if [str1] is equal to [str2].
size_t strequal(char* str1, char* str2) {
  if (str1 == NULL || str2 == NULL) return SIZE_MAX;
  size_t strLen = strlen(str1);
  if (strLen != strlen(str2)) return -1;
  for (int i = 0; strLen >= i; i++)
    if (str1[i] != str2[i]) return -1;
  return 0;
}

// Copy [src] to [dest] and return [dest] as the end of the string.
char* strcpy(char* dest, char* src) {
  if (dest == NULL || src == NULL) return NULL;
  while(*src != '\0') {
    *dest = *src;
    dest++, src++;
  }
  *dest = '\0';
  return dest;
}

// Copy at most [n] characters from [src] to [dest].
char* strncpy(char* dest, char* src, size_t n) {
  if (dest == NULL || src == NULL) return NULL;
  size_t count = 0;
  while (*src != '\0' && n > count) {
    *dest = *src;
    dest++, src++;
  }
  *dest = '\0';
  return dest;
}

// Return a integer based on their length, biased on str1.
int cmpstr(char* str1, char* str2) {
  if (str1 == NULL || str2 == NULL) return INT_MAX;
  while (*str1 != '\0' && *str2 != '\0')
    str1++, str2++;
  if (*str1 == *str2)  // equal
    return 0;
  if (*str1 == '\0')  // str1 < str2
    return -1;
  return 1;  // str1 > str2
}

// Return the absolute difference in length between the strings.
size_t strdiff(char* str1, char* str2) {
  if (str1 == NULL || str2 == NULL) return SIZE_MAX;
  size_t str1Len = strlen(str1);
  size_t str2Len = strlen(str2);
  if (str1Len > str2Len)
    return str1Len - str2Len;
  return str2Len - str1Len;
}

// UNDERFLOW RISK Return the absolute difference in length between the strings, offset by [n]; SiZE_MAX when [n] > strdiff(str1, str2).
size_t strndiff(char* str1, char* str2, size_t n) {
  if (str1 == NULL || str2 == NULL) return SIZE_MAX;
  size_t str1Len = strlen(str1);
  size_t str2Len = strlen(str2);
  if (str1Len > str2Len && str1Len >= n)
    return str1Len - str2Len - n;
  if (str2Len >= n)
    return str2Len - str1Len - n;
  return str2Len + 1; //Non conflicting Error code
}

// Append [src] at the end of [dest] and return [dest].
char* strcat(char* src, char* dest) {
  if (src == NULL || dest == NULL) return NULL;
  return strcpy(dest + strlen(dest), src);
}

// Append [src] at the end of [dest], [n] times and return new string.
char* strncat(char* src, char* dest, size_t n) {
  if (src == NULL || dest == NULL) return NULL;
  size_t destLen = strlen(dest);
  size_t srcLen = strlen(src);
  char* pNew = malloc(destLen + srcLen * n);
  strcpy(pNew, dest);
  for (size_t i = 0; i < n; i++)
    strcpy(pNew + destLen + srcLen * i, src);
  return pNew;
}

// Allocate a duplicate of [src] and return it. 
char* strdup(char* src) {
  if (src == NULL) return NULL;
  char* dup = malloc(strlen(src));
  strcpy(dup, src);
  return dup;
}

// Return a pointer to the first occurence of [c] in [str], end of the string if not found.
char* strchr(char* str, int c) {
  while (*str != '\0' && *str != c)
    str++;
  return str;
}

// Return a pointer to the [n]th occurance of [c] in [str], end of the string if not found.
char* strnchr(char* str, int c, size_t n) {
  size_t count = 0;
  while (*str != '\0' && count != n) {
    str++;
    if (*str == c)
      count++;
  }
  
  return str;
}

// Return a pointer to the last occurance of [c] in [str], end of the string if not found.
char* strrstr(char* str, int c) {
  char* lastFound = NULL;

  while (*str != '\0') {
    str++;
    if (*str == c)
      lastFound = str;
  }

  return (lastFound == NULL) ? str : lastFound;
}

// Returns a pointer of the first occurance of [needle] in [haystack], otherwise -1.
int strstr(char* haystack, char* needle) {
  size_t i = 0;
  for (size_t i = 0; haystack[i] != '\0'; i++) {
    for (size_t j = 0; haystack[i + j] == needle[j]; j++)
      if (needle[j + 1] == '\0')  // the whole of [needle] matched
        return i + j + 1;
  }
  return -1;
}

/*
 FIX: this yourself.
char* strreplace(char* str, char* old, char* new_str) {
  size_t strLen = strlen(str);
  size_t nextNewOffset = 0;
  for (; strLen > nextNewOffset; nextNewOffset += strLen) {
    for (int j = 0; nextNewOffset > j; j++) {
      if (strcmp)
    }
  }
  for(int j = 0; str)
}*/


char* reverse(char* str) {
  size_t size = strlen(str);
  char* leftPointer = str;
  char* rightPointer = str + size;
  while (rightPointer > leftPointer) {
    char old = *leftPointer;
    *leftPointer = *rightPointer;
    *rightPointer = old;
    leftPointer++, rightPointer++;
  }
}

char* trim(char* str, size_t index) {
  if (str == NULL) return NULL; 
  for (; str[index] != '0'; index++) {
    str[index] = ' ';
  }
  str[index] = '\0';
}

// Bubble sort an integer array with a given length
void bsort(int* arr, size_t len) {
  for (size_t i = 0; len - 1 > i; i++) {
    for (size_t j = 0; len - i -1 > j; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

// Read a pointer chain array
void* readptrchain(void* arr, size_t pointerSize, size_t arrSize) {
  return (void*)(pointerSize * arrSize);
}

char* strreplace(char* str, char* old, char* replace) {
  if (str == NULL || old == NULL || replace == NULL) return NULL;
  size_t replaceLen = strlen(replace);
  size_t delta = strlen(old) - replaceLen;

  ptrdiff_t i = strstr(str, old);
  while (i != -1) {
    for (size_t j = 0; j < replaceLen; j++)
      str[i + j] = replace[j];
    
    i += delta;
    i = strstr(str + i, old);
  }
  return str; 
}


size_t strequal(char* str1, char* str2) {
  for (size_t i = 0; *str1 != '\0' && *str2 != '\0'; i++) {
    if (*str1 != *str2)
      return 0;
    str1++, str2++;
  }

  return *str1 == *str2;
}
