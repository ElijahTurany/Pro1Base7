/*
 * CHANGELOG:
 * 2023.01.22 Alexi Brooks - Created
*/

#include <iostream>
#include "ClassPractice.h"
using namespace std;

//Main function, provided for testing and guidance.
//Do not modify this function!
int main() {
	cout << "Running tests of the Base7Number class..." << endl;

	cout << "Test 1: Constructor does not crash: ";
	try {
		Base7Number a{ 1 };
		cout << "SUCCESS." << endl;
	}
	catch (...) {
		cout << "FAILED." << endl;
	}

	cout << "Test 2: 49 becomes 100: ";
	Base7Number b{ 49 };
	if (b.getBase10() != 49) {
		cout << "FAILED.";
		cout << " (Expected: 49. Actual: " << b.getBase10() << ")";
		cout << endl;
	}
	else if (b.getBase7() != 100) {
		cout << "FAILED.";
		cout << " (Expected: 100. Actual: " << b.getBase7() << ")";
		cout << endl;
	}
	else {
		cout << "SUCCESS." << endl;
	}

	cout << "Test 3: 2468 becomes 10124: ";
	Base7Number c{ 2468 };
	if (c.getBase10() != 2468) {
		cout << "FAILED.";
		cout << " (Expected: 2468. Actual: " << b.getBase10() << ")";
		cout << endl;
	}
	else if (c.getBase7() != 10124) {
		cout << "FAILED.";
		cout << " (Expected: 10124. Actual: " << b.getBase7() << ")";
		cout << endl;
	}
	else {
		cout << "SUCCESS." << endl;
	}

	cout << "Test 4: Setter throws exception: ";
	Base7Number d{ 60 };
	try {
		d.set(30);
		cout << "FAILED." << endl;
	}
	catch (...) {
		cout << "SUCCESS." << endl;
	}
}