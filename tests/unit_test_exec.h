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


#endif // UNIT_TEXT_EXEC_H