#include <iostream>

using namespace std;

string hello_world() {
//	Return string containing "Hello, world!" sentence. 
// 	This function does not do the printing itself.

// 	YOUR CODE:
	return "";
}

int main(int argc, char** argv) {
//	See the `hello_world` function above to begin.
	
//	See this variable. `hello_world` is a function that will return a string and the returned string will then be stored in `message` variable.
	string message = hello_world();
	
//	After that, whatever string value on the `message` variable will then be printed by this `cout` object.
	std::cout << message;
	
//	For more information, see the 5-minutes reading "README.md" file locaten in the same directory (folder) as this file.
	
	return 0;
}
