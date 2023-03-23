// main.cpp : tests the Vector object against std::vector<int>.
//

#include"VectorTests.h"
#include <stdio.h>

int main()
{
	for (int i = 0; i < 10; i++) {
		bool test = pop_back_test();
		test &= push_back_test();
		test &= swap_test();
		test &= resize_test();
		test &= clear_test();
		test &= size_test();
		test &= data_test();
		test &= empty_test();
		test &= operators_test();
		test &= insert_test();
		test &= erase_test();

		if (test) {
			std::cout << "Passed" << std::endl;
		}
		else {
			std::cout << "Failed" << std::endl;
		}
	}
	return 0;
}
