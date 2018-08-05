#ifndef WARLOCK_STR_UTIL_H
#define WARLOCK_STR_UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>


/* String Utility for WarLock
 Allows for resizable string,
 Meant for reading from files, storing text data, etc.
*/
struct Warlock_Str {
	size_t capacity;
	size_t length;
	char* data;
};

// Initializes a new Str with specified capacity
struct Warlock_Str* Warlock_Str_new(size_t capacity);

inline size_t Warlock_Str_space(struct Warlock_Str* string);

void Warlock_Str_reserve(struct Warlock_Str* string, size_t amount);

void Warlock_Str_write(struct Warlock_Str* string,
	                   const char* text,
	                   size_t n);

int Warlock_Str_eq(struct Warlock_Str* s1, struct Warlock_Str* s2);

void Warlock_Str_del(struct Warlock_Str* string);

#endif