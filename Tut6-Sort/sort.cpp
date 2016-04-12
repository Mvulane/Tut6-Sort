#include<iostream>
#include<string>
using namespace std;

template<class T>
T sort(T arry[], int Num) {
	T temp;
	for (int i = 0; i < Num - 1; ++i) {
		for (int j = 0; j < Num - 1 - i; ++j) {
			if (arry[j] > arry[j + 1]) {
				temp = arry[j + 1];
				arry[j + 1] = arry[j];
				arry[j] = temp; 
			}
		}
	}
}

int main() {
	int a[7] = { 4,7,8,1,6,5,9 };
	char b[5] = { 'a','f','d','g','t' };
	float c[4] = { 1.33f,1.39f,3.11f,3.10f };
	sort(a, 7);
	cout << "\n intergers Sorted Order output: ";
	for (int i = 0; i < 7; i++) {
		cout << a[i] << " ";
	};
	sort(b, 5);
	cout << "\n characters Sorted Order output: ";
	for (int i = 0; i < 5; i++) {
		cout << b[i] << " ";
	
	sort(c, 4);
	cout << "\n floats Sorted Order output: ";
	for (int i = 0; i < 4; i++) {
		cout << c[i] << " ";
	};
	cout << endl;
	system("pause");
	return 0;
	};