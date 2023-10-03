#include <iostream>

using namespace std;

class D {
private:
	int D1;
	float D2;

public:
	D() {
		D1 = 0;
		D2 = 0;
	}

	int get_D1() {
		return D1;
	}

	void set_D1(int value) {
		D1 = value;
	}

	float get_D2() {
		return D2;
	}

	void set_D2(float value) {
		D2 = value;
	}

	void MD1() {
		cout << "Método MD1 da classe D" << endl;
	}

	void MD2() {
		cout << "Método MD2 da classe D" << endl;
	}

<<<<<<< HEAD
	void MD3() {
		cout << "Método MD3 da classe D" << endl;
	}
};
=======
	void MD4() {
		cout << "Método MD4 da classe D" << endl;
	}
};
>>>>>>> 6f0802cdc24dda16ff5a31aef1813479267e9435
