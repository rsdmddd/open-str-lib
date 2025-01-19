/*
 * SOURCE FILE FOR strlib (strlib.c)
 * COMPATIBLE FOR C VERSIONS BEFORE 1999 (C99)
 * 
 * OSD - Open-Sourced Development
 * Copyright (C) 2025 OSD. All rights reserved.
 * 
 * This code is free software; you can redistribute it and/or modify it!
 */

#include "strlib.h"

//Get the length of a string
size_t strlen(const char *str) {
    size_t length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

//Return 1 if str1 is bigger, else -1, elseif equal 0 (IN TERMS OF LENGTH)

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

int bstring(const char *str1, const char *str2) {
  while(*str1 != '\0' || *str2 != '\0') { //if either of the, dont have null
    str1++;
    str2++;
  }
  if (str1 != '\0') {
    return 0;
  }
  else if (str2 != '\0') {
    return -1
  }
  return 0;
}

//Get the difference in size between 2 strings UNFINISHED
int strcmp(const char *str1, const char *str2) {
  size_t numtimes = 0;
  while(*str1 != '\0' && *str2 != '\0') {
    if(*str1 != *str2) {
      return numtimes;
  }
  numtimes++;
  }
  *d = '\0';
  return dest; //OPTIONALLY return DEST
}