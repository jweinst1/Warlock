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

int UnitTest_exec_raw(int id, const char* name, TestRun test)
{
	if(test())
	{
		printf("Unit Test (%d): %s PASSED\n", id, name);
		return 1;
	}
	else
	{
		printf("Unit Test (%d): %s FAILED\n", id, name);
		return 0;
	}	
}

int UnitTest_exec_suite(struct UnitTest* suite, int count)
{
	int passed = 0;
	struct UnitTest* utest = suite;
	while(count--)
	{
		if(utest->test())
		{
			passed++;
			printf("Unit Test (%d): %s PASSED\n", utest->id, utest->name);
		}
		else
		{
			printf("Unit Test (%d): %s FAILED\n", utest->id, utest->name);
		}
		utest++;
	}
	return passed;
}