#include <iostream>
#include "2_test.cpp"

using namespace std;

string helloWorld() {
//	Return string containing "Hello, world!" sentence. 
// 	This function does not do the printing itself.

// 	YOUR CODE STARTS HERE:

	return "Goodbye, world!";

// 	END OF YOUR CODE
}

int main(int argc, char** argv) {
//	See the `helloWorld` function above to begin.

//	This will run a set of tests to see whether the `helloWorld` function returns the expected result.
	if(!testSuite(helloWorld)) return 1;
	
//	See this variable. `helloWorld` is a function that will return a string and the returned string will then be stored in `message` variable.
	string message = helloWorld();
	
//	After that, whatever string value on the `message` variable will then be printed by this `cout` object.
	std::cout << message;
	
//	For more information, check out the 5-minutes reading "README.md" file locaten in the same directory (folder) as this file.
	
	return 0;
}
