#ifndef WARLOCK_STR_UTIL_H
#define WARLOCK_STR_UTIL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* String Utility for WarLock
 Allows for resizable string,
 Meant for reading from files, storing text data, etc.
*/
struct Warlock_Str {
	size_t capacity;
	size_t length;
	char* data;
};

struct Warlock_Str* Warlock_Str_new(size_t capacity);

inline size_t Warlock_Str_space(struct Warlock_Str* string);

#endif