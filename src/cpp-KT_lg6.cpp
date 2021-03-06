//============================================================================
// Name        : cpp-KT_lg6.cpp
// Author      : Tobias Gion <tgion>
// Version     :
// Copyright   : Your copyright notice
// Description : KT Übungsblatt LG6 - Objektorientierte Programmierung mit C++
//============================================================================

#include <iostream>
#include <string>

using std::cout;
using std::cin;

int main() {

	//============================================================================
	// Aufgabe 1.1
	//============================================================================
	int i = 0;
	cout << ((i % 2 == 0) ? i : 0);				// if (i % 2 == 0) cout << i
								//	else cout << 0
	cout << "\n";

	//============================================================================
	// Aufgabe 1.2
	//============================================================================
	cout << ((i % 2 == 0) ? i : (i == 0) ? 0 : -1);		// if (i % 2 == 0) cout << i
								// 	else if (i == 0) cout << 0
								//	else cout << -1
	cout << "\n";


	//============================================================================
	// Aufgabe 2
	//============================================================================
	std::string line;
	[] (std::string &ll) {					// why cant we use line since it is local in the function scope
			cout << "Please insert string: ";
			getline (cin, ll);
			cout << ll << "\n";
	} (line);						// does this mean to call the function right away (with arg line)


	//============================================================================
	// Aufgabe 3
	//============================================================================
	i = 42;
	float f = 0.42f;
	char c = 'H';
	const char* cc = "kt";

	//============================================================================
	// Aufgabe 3.1
	//============================================================================
	long long ll = static_cast<long long>(i);
	cout << "int -> long long: " << ll << std::endl;

	//============================================================================
	// Aufgabe 3.2
	//============================================================================
	short s = static_cast<short>(f);
	cout << "float -> short: " << s << std::endl;


	//============================================================================
	// Aufgabe 3.3
	//============================================================================
	bool b = static_cast<bool>(c);
	cout << "char -> bool: " << b << std::endl;

	//============================================================================
	// Aufgabe 3.4
	//============================================================================
	char* ccc = const_cast<char*>(cc);
	cout << "const char* -> char*: " << ccc << std::endl;

	return 0;
}
