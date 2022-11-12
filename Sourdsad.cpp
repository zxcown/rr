#include <iostream>
#include<ctime>
using namespace std;
int main() {
	///variant 2
//1
	/*const int s = 12;
	int m[s];
	srand(time(nullptr));
	for (int i = 0; i < s; i++) {
		m[i] = rand() % 11 - 5;
		cout << m[i] << ' ';
}
	cout << endl;
		int sum = 0;
		for (int i = 0; i < s; i++) {
			sum += m[i];
		}
		cout << sum;*/
	//2
	/*int m[13];
	srand(time(nullptr));
	for (int i = 0; i < 12; i++) {
		m[i] = rand() % 25 - 12;
		cout << m[i] << ' ';
	}
	cout << endl;
	int proiz = 1 ;
	for (int i = 0; i < 12; i++) {
		if (m[i] < 0) {
			proiz *= m[i];
		}
	}
    cout << proiz;*/
	//3
	/*int m[11];
	int k = 0;
	for (int i = 0; i < 11; i++) {
		m[i] = rand() % 21;
		if (m[i] % 3 == 0 || m[i] % 5 == 0 || m[i] % 7 == 0) {
			k++;
			cout << m[i] << ' ';
		}
	}
	cout << endl;
	for (int i = 0; i < 11; i++) {
		cout << k << endl;*/
	//}
	//4
	int  m[15];
	int s = 0;
	for (int i = 0; i < 15; i++) {
		m[i] = rand() % 26;
		if (m[i] % 2 != 0) {
			s += m[i];
		 }
	}
	for (int i = 0; i < 15; i++) {
		cout << m[i] << ' ';
	}
	cout << endl;
	cout << s << endl;
}