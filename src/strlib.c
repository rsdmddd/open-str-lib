/*
 * DISCLAIMER:
 * OSD is not responsible for any damages caused by buffer overflow or improper usage.
 * The user is responsible for ensuring that input strings are properly null-terminated.
 * 
 * SOURCE FILE FOR strlib (strlib.c)
 * COMPATIBLE FOR C VERSIONS BEFORE 1999 (C99)
 * 
 * OSD - Open-Sourced Development
 * 2025 OSD. All rights reserved.
 * This code is free software; you can redistribute it and/or modify it!
 */

// TODO: nstrcat

#include "strlib.h"

// Get the length of a string
size_t strlen(const char *str) {
    size_t length = 0;
    while (str[length] != '\0')
        length++;
    return length;
}

// Copy string to a destination
char* strcpy(char *dest, const char *src) {
  while(*src != '\0') {
    *dest = *src;
    dest++, src++;
  }
  *dest = '\0'
  return dest;
}

// Copy string characters to a destination N times
char* nstrcpy(char *dest, const char *src, size_t n) {
  size_t numtimes = 0;
  while (*src != '\0' && n > numtimes) {
    *dest = *src;
    dest++, src++;
    numtimes++;
  }
  *dest = '\0';
  return dest;  // OPTIONALLY return DEST
}

// Return a integer based on the size
int bstr(const char *str1, const char *str2) {
  while (*str1 != '\0' && *str2 != '\0')
    str1++, str2++;

  if (*str1 == *str2)  // equal
    return 0;
  if (*str1 == '\0')  // str1 < str2
    return 1;
  return -1;  // str1 > str2
}

// Get the difference in length between the strings.
size_t strcmp(const char *str1, const char *str2) {
  size_t str1Len = strlen(str1);
  size_t str2Len = strlen(str2);

  if (str1Len > str2Len)
    return str1Len - str2Len;
  return str2Len - str1Len;
}

// Get the difference in length between the strings N times
size_t nstrcmp(const char *str1, const char *str2, size_t n) {
  size_t str1Len = strlen(str1);
  size_t str2Len = strlen(str2);

  if (str1Len > str2Len)
    return str1Len - str2Len - n;
  return str2Len - str1Len - n;  // why subtract n? can wraparound if n is too big. WILL ADD SAFETY
}

// ooh danger 
char* strcat(const char src, char *dest) {
  char *pDestEnd = dest + strlen(dest);

  size_t i = 0;
  for (; src[i] != '\0'; i++)
    pDestEnd[i] = src[i];
  pDestEnd[i] = '\0';

  return dest;
}

char* strncat(const char src, char *dest) {
  char *pDestEnd = dest + strlen(dest);

  size_t i = 0;
  for (; src[i] != '\0' && n > i; i++)
    pDestEnd[i] = src[i];
  pDestEnd[i] = '\0';

  return dest;
}

void* readUnionPointerChain(const ) {
  
}

//TODO: nstrcat

