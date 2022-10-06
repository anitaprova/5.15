/*
 * Author: Anita Prova
 * Course: CSCI-135
 * Instructor: Genady Maryash
 * Assignment: Homework E5.14
 * The program swaps two integers.
 * 
 */

#include <iostream>
#include <string>

using namespace std;

void sort2(int& a, int& b){
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
}

void sort3(int& a, int& b, int& c){
	sort2(b, a);
	sort2(a, c);
}

int main() {
	int a = 0;
	cin >> a;
	
	int b = 0;
	cin >> b;

	int c = 0; 
	cin >> c;

	sort3(a, b, c);
	cout << a << b << c;	

	return 0;
}
