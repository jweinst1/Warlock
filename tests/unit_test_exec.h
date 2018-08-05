#ifndef UNIT_TEST_EXEC_H
#define UNIT_TEST_EXEC_H

#include <stdio.h>

// Declares and initializes a unit test struct
#define MAKE_UNIT_TEST(var, id, name, func) struct UnitTest var = {id, name, func}

typedef int(*TestRun)(void);

struct UnitTest
{
	int id;
	const char* name;
	TestRun test;
};

// Executes a single unit test
int UnitTest_exec_one(struct UnitTest* utest);

// Executes a unit test without requiring a UnitTest struct
int UnitTest_exec_raw(int id, const char* name, TestRun test);

/** Executes an entire suite or array of unit tests
  * count: The number of tests in the suite
  * Returns: how many cases passed.
  */
int UnitTest_exec_suite(struct UnitTest* suite, int count);




#endif // UNIT_TEXT_EXEC_H