#include <stdlib.h>
#include <string>

using namespace std;

void random_init(float* vector, int size, int a,int b) {

	for (int i = 0; i < size; i++)
	{
		*(vector + i) = rand() % (b - a + 1) + a;
	}
}

string convert(float* vector, int size) {
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s = s + to_string(*(vector + i)) + " ";
	}

	return s;

}