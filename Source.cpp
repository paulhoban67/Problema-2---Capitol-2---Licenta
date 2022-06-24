#include <iostream>
using namespace std;

void SortDesc(int* v, int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i] < v[j]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}


// Avem un vector neordonat, iar dupa apelul functiei create, vom avea un vector R ordonat descrescator
int main() {
	int vector[10] = { 1, 4, 2, 5, 9, 0, 3, 8, 7, 6 };
	SortDesc(vector, 10);
	for (int i = 0; i < 10; i++)
		cout << vector[i] << " ";
	cout << endl;

}