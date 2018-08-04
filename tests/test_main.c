#include <stdio.h>
#include "unit_test_exec.h"

#include "Warlock.h"




int main(int argc, char const *argv[])
{
	struct Warlock_Str* foo = Warlock_Str_new(70);
	Warlock_Str_write(foo, "hello", 5);
	puts(foo->data);
	Warlock_Str_del(foo);
	return 0;
}