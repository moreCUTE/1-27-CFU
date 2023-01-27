#include <iostream>
using namespace std;

int main() {
	// if statements part 1-----------------------------------------------------------
	int cookie;

	cout << "how may cookie you got" << endl;
	cin >> cookie;

	if (cookie < 5)
		cout << "you git too little cookie foo. you want a cookie bru?" << endl;

	else if (cookie < 10)
		cout << "hmm nice amount of cookei" << endl;

	else
		cout << "you got to many cookie... gimmie some foo" << endl;

	cout << "--------------------------------------------------" << endl;
	cout << endl;

	// if statements part 2-----------------------------------------------------------
	char foo;

	cout << "who do you liek best???" << endl;
	cout << " (b)art simpson, (s)cooby doo, (r)ick, (d)affy duck, or (k)ratos" << endl;
	cin >> foo;

	if (foo == 'b')
		cout << "eat my shorts" << endl;
	else if (foo == 's')
		cout << "scooby dooby doo!" << endl;
	else if (foo == 'r')
		cout << "WAWUBBA LUBBA DUB DUB" << endl;
	else if (foo == 'd')
		cout << "sufferin' succotash!" << endl;
	else if (foo == 'k')
		cout << "BOY" << endl;
	else
		cout << "whos that bruh" << endl;

	cout << "--------------------------------------------------" << endl;
	cout << endl;

	// switch statements ---------------------------------------------------------------------------
	int jit = 1;
	char input;
	bool end = true;
	do {
		switch (jit) {
		case 1:
			cout << "who do you liek best???" << endl;
			cout << " (b)art simpson, (s)cooby doo, (r)ick, (d)affy duck, or (k)ratos" << endl;
			cin >> input;

			if (input == 'b')
				jit = 2;
			else if (input == 's')
				jit = 3;
			else if (input == 'r')
				jit = 4;
			else if (input == 'd')
				jit = 5;
			else if (input == 'k')
				jit = 6;
			else
				cout << "whos that bruh" << endl;
			break;
		case 2:
			cout << "Eat my shorts" << endl;
			end = false;
			break;
		case 3:
			cout << "Scooby Dooby Doo!" << endl;
			end = false;
			break;
		case 4:
			cout << "Wubba Lubba Dubba Dub DUb" << endl;
			end = false;
			break;
		case 5:
			cout << "Sufferin' Succotash!" << endl;
			end = false;
			break;
		case 6:
			cout << "BOY" << endl;
			end = false;
			break;
		}
	} while (end != false);


	cout << endl;

	cout << "--------------------------------------------------" << endl;
	cout << endl;

	// Nested if ststements----------------------------------------------------------------
	char yummy;
	cout << "welcome to dominoes how may i helyppt yo" << endl;
	cout << "would you like (i)ce cream or (c)andy" << endl;
	cin >> yummy;
	if (yummy == 'i') {
		cout << "you want chocolat(e) or (f)ruit?" << endl;
		cin >> yummy;
		if (yummy == 'e')
			cout << "you got hit fuge dunays" << endl;
		else if (yummy == 'f')
			cout << "you get a strawbary blixars" << endl;
	}
	if (yummy == 'c') {
		cout << "you want chocolat(e) or (f)ruit?" << endl;
		cin >> yummy;
		if (yummy == 'e')
			cout << "you get hershey chocle bar" << endl;
		else if (yummy == 'f')
			cout << "you get a stridcburts" << endl;
	}



}
