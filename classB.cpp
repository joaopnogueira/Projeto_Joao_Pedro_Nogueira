#include <iostream>

using namespace std;

class B {
private:
	int B1;
	float B2;

public:
	A() {
		B1 = 0;
		B2 = 0;
	}

	int get_B1() {
		return B1;
	}

	void set_B1(int value) {
		B1 = value;
	}

	float get_B2() {
		return B2;
	}

	void set_B2(float value) {
		B2 = value;
	}

	void MB1() {
		cout << "Método MB1 da classe B" << endl;
	}

	void MB2() {
		cout << "Método MB2 da classe B" << endl;
	}
};