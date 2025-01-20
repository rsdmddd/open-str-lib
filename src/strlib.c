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

//TODO: nstrcat

#include "strlib.h"

//Get the length of a string
size_t strlen(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

//Copy string to a destination
char* strcpy(char *dest, const char *src) {
  while(*src != '\0') {
    *dest = *src;
    dest++, src++;
  }
  *dest = '\0'
  return dest;
}

//Copy string characters to a destination N times
char* nstrcpy(char *dest, const char *src, size_t n) {
  size_t numtimes = 0;
  while(*src != '\0' && n > numtimes) {
    *dest = *src;
    dest++, src++;
    numtimes++;
  }
  *dest = '\0';
  return dest; //OPTIONALLY return DEST
}

//Return a integer based on the size
int bstr(const char *str1, const char *str2) {
  while(*str1 != '\0' || *str2 != '\0') { //if either of them dont have null
    str1++;
    str2++;
  }
  if (str1 != '\0') {
    return 1;
  }
  else if (str2 != '\0') {
    return -1;
  }
  return 0;
}

//Get the difference in size between 2 strings biased towards the dominant one
size_t strcmp(const char *str1, const char *str2) {
  size_t num_str1_times = 0;
  size_t num_str2_times = 0;
  while(*str1 != '\0') {
    num_str1_times++;
    str1++;
  }
  while(*str2 != '\0') {
    num_str2_times++;
    str2++
  }
  if(num_str1_times > num_str2_times) {
    return num_str1_times - num_str2_times;
  }
  return num_str2_times - num_str1_times
}

size_t nstrcmp(const char *str1, const char *str2, size_t n) {
  size_t num_str1_times = 0;
  size_t num_str2_times = 0;
  while(*str1 != '\0') {
    num_str1_times++;
    str1++;
  }
  while(*str2 != '\0') {
    num_str2_times++;
    str2++
  }
  if(num_str1_times > num_str2_times) {
    return num_str1_times - num_str2_times;
  }
  return (num_str2_times - num_str1_times - n);
}

char* strcat(const char *src, char *dest) {
  size_t numtimes = 0;
  char *pDestBase = dest + strlen(*dest);
  while (*src[numtimes] != '\0')
  {
    pDestBase[numtimes] = src[numtimes];
    numtimes++
  }
}

//TODO: nstrcat

