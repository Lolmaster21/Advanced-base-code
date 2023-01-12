#include<iostream>
using namespace std;

int main() {
	srand(time(NULL));
	int arr1[5] = { rand() % 100,rand() % 100,rand() % 100,rand() % 100,rand() % 100};

	int big;

	int arr2[2];
	for (int i = 0; i <= 1; i++) {
		arr2[i] = rand() % 100;
	}
	cout << arr2[0] << endl;
	

	for (int f = 0; f <= 4; f++) {
		for (int k = 0; k <= 4; k++) {
			if (arr1[k] > arr1[f]){
				big = arr1[k];
			}
		}
	}
	for (int l = 0; l <= 4; l++) 
		cout << arr1[l] << " ";
	cout << endl;
	cout << big << endl;

}
