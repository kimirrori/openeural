//============================================================================
// Name        : tets.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cppunit/TestCase.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <stdio.h>

class mytexttest : public CppUnit::TestCase{
public:
	void runTest(){
		CPPUNIT_ASSERT_MESSAGE("String fail", 0);
	}
};

int main() {
	CppUnit::TextTestRunner runner;
	runner.addTest(new mytexttest);
	runner.run();
	printf("hello");
	return 0;
}
