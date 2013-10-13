//============================================================================
// Name        : tets.cpp
// Author      : Kozev Evgenii
// Version     : 0.1
// Copyright   : Your copyright notice
// Description : Test to show work
//============================================================================

#include "cppunit/TestCase.h"
#include "cppunit/ui/text/TextTestRunner.h"
#include "cppunit/XmlOutputter.h"
#include <iostream>

class mytexttest: public CppUnit::TestCase {
public:
	void runTest() {
		CPPUNIT_ASSERT_MESSAGE("String fail", 0);
	}
};

using std::ofstream;

int main() {
	CppUnit::TextTestRunner runner;
	runner.addTest(new mytexttest);
	runner.run();
	ofstream xmlFileOut("cpptestresults.xml");
	CppUnit::XmlOutputter xmlOut(&runner.result(), xmlFileOut);
	xmlOut.write();
	printf("hello world");
	return 0;
}
