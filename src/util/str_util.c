#include "str_util.h"

// File private tool macros
#define W_STR_FITS_SIZE(wstr, size) (n < (wstr->capacity - wstr->length))
#define W_STR_WRITE_PTR(wstr) (wstr->data + wstr->length)

struct Warlock_Str* Warlock_Str_new(size_t capacity)
{
	struct Warlock_Str* string = malloc(sizeof(struct Warlock_Str));
	assert(string != NULL);
	string->capacity = capacity;
	string->length = 0;
	string->data = malloc(sizeof(char) * capacity);
	memset(string->data, 0, string->capacity);
	return string;
}

inline size_t Warlock_Str_space(struct Warlock_Str* string)
{
	return string->capacity - string->length;
}

void Warlock_Str_reserve(struct Warlock_Str* string, size_t amount)
{
	string->capacity += amount;
	string->data = realloc(string->data, string->capacity);
	assert(string->data != NULL);
}

void Warlock_Str_write(struct Warlock_Str* string,
	                   const char* text,
	                   size_t n)
{
	if(!W_STR_FITS_SIZE(string, n)) Warlock_Str_reserve(string, n);
	strncpy(W_STR_WRITE_PTR(string), text, n);
	string->length += n;
}

int Warlock_Str_eq(struct Warlock_Str* s1, struct Warlock_Str* s2)
{
	if(s1->length != s2->length) return 0;
	else
	{
		for(int i = 0; i < s1->length; i++)
		{
			if(s1->data[i] != s2->data[i]) return 0;
		}
		return 1;
	}
}

void Warlock_Str_del(struct Warlock_Str* string)
{
	free(string->data);
	free(string);
}