// how cpp initialize variables and instance

#include <iostream>

using namespace std;

const int MAX = 4;

int main() {
	int a(34);
	cout << a << endl;

	const char *name[MAX] = {
		"jack", "steve","jimmy","tom"
	};

	for (int i = 0; i < MAX; i++) {
		cout << name[i] << endl;
		cout << *name[i] << endl;
	}

	int var[3] = {
	 23, 45 , 103
	};

	int * ptr;
	ptr = var;
	for (int i = 0; i < 3; i++) {
		cout << ptr << endl;
		cout << *ptr << endl;
		ptr++;
	}

	return 0;
}
