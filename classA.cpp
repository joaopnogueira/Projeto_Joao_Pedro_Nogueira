#include <iostream>

using namespace std;

class A {
private:
	int A1;
	float A2;

public:
	A() {
		A1 = 0;
		A2 = 0;
	}

	int getSoma(int a, int b){
		return a+b;
	}

	int get_A1() {
		return A1;
	}

	void set_A1(int value) {
		A1 = value;
	}

	float get_A2() {
		return A2;
	}

	void set_A2(float value) {
		A2 = value;
	}

	void MA1() {
		cout << "Método MA1 da classe A" << endl;
	}

	void MA2() {
		cout << "Método MA2 da classe A" << endl;
	}
	
	void MA3() {
		cout << "Alteração a classe A partir do clone" << endl;
	}
};
