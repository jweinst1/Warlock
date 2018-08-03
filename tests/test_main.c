#include <stdio.h>
#include "unit_test_exec.h"

#include "WarLock.h"

// Main file for test suite

int doo(void) {
	return 1;
}


int main(int argc, char const *argv[])
{
	struct UnitTest dootest = {1, "doo test", &doo};
	printf("The doo function test is %d\n", UnitTest_exec_one(&dootest));
	return 0;
}