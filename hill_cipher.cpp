#include<iostream>
#include<math.h>

using namespace std;

float encrypt[2][1], a[2][2], b[2][2], mes[2];

void encryption();

void KeyMessage();

int main() {
	KeyMessage();
	encryption();

}

void encryption() {
	int i, j;

	for(i = 0; i < 2; i++)
		for(j = 0; j < 1; j++)

				encrypt[i][j] = encrypt[i][j] + a[i][j] ;

	cout<<"\nEncrypt string is: ";
	for(i = 0; i < 2; i++)
		cout<<(char)(fmod(encrypt[i][0], 26) + 97);
}


void KeyMessage() {
	int i, j;
	char msg[2];

	cout<<"Enter 2x2 matrix for key \n";

	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++) {
			cin>>a[i][j];

		}

	cout<<"\nEnter a 2 letter string: ";
	cin>>msg;

	for(i = 0; i < 2; i++)
		mes[j] = msg[i] - 97;
}

