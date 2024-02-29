#include <iostream>
#include <vector>


using namespace std;

void random_init(float* vector, int size, int a, int b);
string convert(float* vector, int size);


int main() {
	int size;
	
	do {
		cout << "input size: ";
		cin >> size;
	} while (size <= 0 );

	float* vector = new float[size];

	random_init(vector, size, -10, 10);
	cout << convert(vector, size);


	delete[] vector;
	return 0;
}