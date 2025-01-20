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
} //VALID

// Copy string to a destination
char* strcpy(char *dest, const char *src) {
  while(*src != '\0') {
    *dest = *src;
    dest++, src++;
  }
  *dest = '\0'
  return dest;
} //VALID

// Copy string characters to a destination N times
char* strncpy(char *dest, const char *src, size_t n) {
  size_t numTimes = 0;
  while(*src != '\0' && n > numTimes) {
    *dest = *src;
    dest++, src++, numTimes++;
  }
  *dest = '\0'
  return dest;
} //VALID

// Return a integer based on the size biased towards str1
int bstr(const char *str1, const char *str2) {
  while (*str1 != '\0' && *str2 != '\0')
    str1++, str2++;
  if (*str1 == *str2)  // equal
    return 0;
  if (*str1 == '\0')  // str1 < str2
    return -1;
  return 1;  // str1 > str2
} //VALID

// Get the difference in length between the strings.
size_t strcmp(const char *str1, const char *str2) {
  size_t str1Len = strlen(str1);
  size_t str2Len = strlen(str2);
  if (str1Len > str2Len)
    return str1Len - str2Len;
  return str2Len - str1Len;
} //VALID

// Get the difference in length between the strings N times, return -1 for error
size_t strncmp(const char *str1, const char *str2, size_t n) {
  size_t str1Len = strlen(str1);
  size_t str2Len = strlen(str2);
  if ((str1Len - str2Len - n) >= 0) return str1Len - str2len - n;
  if ((str2Len - str1Len - n) >= 0) return str2Len - str1Len - n;
  return -1;
} //VALID

// add string to string
char* strcat(const char *src, char *dest) {
  char *pDestEnd = dest + strlen(dest);
  size_t i = 0;
  for (; src[i] != '\0'; i++)
    pDestEnd[i] = src[i];
  pDestEnd[i] = '\0';
  return dest;
} //VALID

// add string to string N times
char* strncat(const char *src, char *dest, size_t n) {
  char *pDestEnd = dest + strlen(dest);
  size_t i = 0;
  for (; src[i] != '\0' && n > i; i++)
    pDestEnd[i] = src[i];
  pDestEnd[i] = '\0';
  return dest;
} //VALID

//Allocate a duplicated string
char* strdup(const char *src) {
  size_t len = strlen(*src) + 1;
  char *dup = malloc(len);
  strcpy(dup, src);
  return dup;
} //VALID

//Return a pointer to the first occurence of c in str
char* strchr(const char *str, int c) {
  while (*str != '\0' && *str != c)
    str++;
  return str++;
} //VALID

//Return a pointer to the first occurence of c in str N times
char* strnchr(const char *str, int c, size_t n) {
  size_t numTimes = 0;
  while (*str != '\0' && *str != c && n > numTimes)
    str++, numTimes++;
  return str++;
}

/*char* strstr(const char *haystack, const char *needle) {
  //search string at base, search needle size inbetween the base
  const size_t needleSize = strlen(needle) - 1;
  const pOccurence = 0;
  while (*haystack != '\0') {
    haystack
  }
}/*


