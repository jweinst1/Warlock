#include "test_str_util.h"

int Test_str_util_write(void)
{
	struct Warlock_Str* foo = Warlock_Str_new(70);
	Warlock_Str_write(foo, "hello", 5);
	int result = foo->data[4] == 'o';
	Warlock_Str_del(foo);
	return result;
}

struct UnitTest Tests_str_util[] = {
	{1, "str_util_write", &Test_str_util_write}
};