#include <iostream>
#include <vector>

using namespace std;

int main() {
	int size;
	
	do {
		cout << "input size: ";
		cin >> size;
	} while (size <= 0 );

	float* vector = new float[size];

	delete[] vector;

	return 0;
}