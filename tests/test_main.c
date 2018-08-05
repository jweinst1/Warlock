#include <stdio.h>
#include "unit_test_exec.h"
#include "test_str_util.h"




int main(int argc, char const *argv[])
{
	// Test suites to be executed here.
	UnitTest_exec_suite(Tests_str_util, TEST_STR_UTIL_COUNT);
	return 0;
}