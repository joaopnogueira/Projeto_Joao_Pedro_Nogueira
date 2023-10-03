#include <iostream>

using namespace std;

class C {
private:
	string C1;
	int C2;

public:
	C() {
		C1 = " ";
		C2 = 0;
	}

	string get_C1() {
		return C1;
	}

	void set_C1(string text) {
		C1 = text;
	}

	float get_C2() {
		return C2;
	}

	void set_C2(int value) {
		C2 = value;
	}

	void MC1() {
		cout << "Método MC1 da classe C" << endl;
	}

	void MC2() {
		cout << "Método MC2 da classe C" << endl;
	}
};