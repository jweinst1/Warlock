#include "unit_test_exec.h"

int UnitTest_exec_one(struct UnitTest* utest)
{
	if(utest->test())
	{
		printf("Unit Test (%d): %s PASSED\n", utest->id, utest->name);
		return 1;
	}
	else
	{
		printf("Unit Test (%d): %s FAILED\n", utest->id, utest->name);
		return 0;
	}

}