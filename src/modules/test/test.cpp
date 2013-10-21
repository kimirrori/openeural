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

int Test_func(){
	CppUnit::TextTestRunner runner;
	runner.addTest(new mytexttest);
	runner.run();
	ofstream xmlFileOut("cpptestresults.xml");
	CppUnit::XmlOutputter xmlOut(&runner.result(), xmlFileOut);
	xmlOut.write();
	for(int i=0;i<20000000;++i);
	return 0;
}

int Void_func(){
	return 0;
}

int main() {
	Test_func();
	for(int i=0;i<123;++i){
		Void_func();
	}
	printf("hello world");
	return 0;
}
