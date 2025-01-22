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

#include "strlib.h"

// Return the length of [str].
size_t strlen(const char* str) {
  size_t length = 0;
  while (str[length] != '\0')
    length++;
  return length;
}

// Copy [src] to [dest] and return [dest] as the end of the string.
char* strcpy(char* dest, char* src) {
  while(*src != '\0') {
    *dest = *src;
    dest++, src++;
  }
  *dest = '\0'
  return dest;
}

// Copy at most [n] characters from [src] to [dest].
char* strncpy(char* dest, char* src, const size_t n) {
  size_t count = 0;
  while(*src != '\0' && count < n) {
    *dest = *src;
    dest++, src++, count++;
  }
  *dest = '\0'
  return dest;
}

// Return 0, 1 or -1 if [str1]'s length is =, > or < relative to [str2]'s, respectfully.
int cmpstr(char* str1, char* str2) {
  while (*str1 != '\0' && *str2 != '\0')
    str1++, str2++;
  if (*str1 == *str2)  // equal
    return 0;
  if (*str1 == '\0')  // str1 < str2
    return -1;
  return 1;  // str1 > str2
}

// Return the absolute difference in length between the strings.
size_t strdiff(const char* str1, const char* str2) {
  size_t str1Len = strlen(str1);
  size_t str2Len = strlen(str2);
  if (str1Len > str2Len)
    return str1Len - str2Len;
  return str2Len - str1Len;
}

// Return the absolute difference in length between the strings, offset by [n]; SiZE_MAX when [n] > strdiff(str1, str2).
size_t strdiffn(const char* str1, const char* str2, const size_t n) {
  size_t diff = strdiff(str1, str2);
  if (diff >= n)
    return diff - n;
  return SIZE_MAX;
}

// Append [src] at the end of [dest] and return [dest].
char* strcat(const char* src, const char* dest) {
  strcpy(dest + strlen(dest), src);
  return dest;
}

// Append [src] at the end of [dest], [n] times and return new string.
char* strncat(const char* src, const char* dest, const size_t n) {
  size_t destLen = strlen(dest);
  size_t srcLen = strlen(src);
  char* pNew = malloc(destLen + srcLen * n);

  strcpy(pNew, dest);
  for (size_t i = 0; i < n; i++)
    strcpy(pNew + destLen + srcLen * i, scr);

  return pNew;
}

// Allocate a duplicate of [src] and return it. 
char* strdup(const char* src) {
  char* dup = malloc(strlen(src));
  strcpy(dup, src);
  return dup;
}

// Return a pointer to the first occurence of [c] in [str], end of the string if not found.
char* strchr(char* str, const int c) {
  while (*str != '\0' && *str != c)
    str++;
  return str;
}

// Return a pointer to the [n]th occurance of [c] in [str], end of the string if not found.
char* strnchr(char* str, const int c, const size_t n) {
  size_t count = 0;
  while (*str != '\0' && count != n) {
    str++;
    if (*str == c)
      count++;
  }
  
  return str;
}

// Return a pointer to the last occurance of [c] in [str], end of the string if not found.
char* strrstr(char* str, const int c) {
  char* lastFound = NULL;

  while (*str != '\0') {
    str++;
    if (*str == c)
      lastFound = str;
  }

  return (lastFound == NULL) ? str : lastFound;
}

// Returns a pointer of the first occurance of [needle] in [haystack], otherwise -1.
int strstr(const char* haystack, const char* needle) {
  size_t i = 0;
  for (size_t i = 0; haystack[i] != '\0'; i++) {
    for (size_t j = 0; haystack[i + j] == needle[j]; j++)
      if (needle[j + 1] == '\0')  // the whole of [needle] matched
        return i + j + 1;
  }

  return -1;
}

