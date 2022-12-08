#include <string>
#include <iostream>

using namespace std;

struct CaseResult {
	string description;
	string expected;
	string actual;
};

CaseResult testCase1(string answer) {
	CaseResult result;
	
	result.description = "should return \"Hello, world!\"";
	result.expected = "Hello, world!";
	result.actual = answer;
	
	return result;
}

bool testSuite(string (*func)()) {
	string result = func();
	CaseResult cases[] = { testCase1(result) };
	bool isPrinted = false;
	
	for (int i = 0; i < 1; ++i) {
		CaseResult _case = cases[i];
		if (_case.expected != _case.actual) {
			if (!isPrinted) cerr << "Test failed!" << endl << endl;
			cerr << "Case #" << i+1 << ": `helloWorld` " << _case.description << endl;
			cerr << "- Expected: " << _case.expected << endl;
			cerr << "- Actual: " << _case.actual << endl;
			return false;
		}
	}
	return true;
}

