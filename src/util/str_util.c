#include "str_util.h"

struct Warlock_Str* Warlock_Str_new(size_t capacity)
{
	struct Warlock_Str* string = malloc(sizeof(struct Warlock_Str));
	string->capacity = capacity;
	string->length = 0;
	string->data = malloc(sizeof(char) * capacity);
	return string;
}

inline size_t Warlock_Str_space(struct Warlock_Str* string)
{
	return string->capacity - string->length;
}