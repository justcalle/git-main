#include <iostream>

using namespace std;

int compare(int, int);

int main(){
	int larger, A, B;
	cout << "Enter first number " << endl;
	cin >> A;
	cout << "Enter second number " << endl;
	cin >> B;
	larger=compare(A, B);
	
	cout << "The larger number is " << larger << endl;
}

int compare(int A, int B){
	int larger;
	larger = A;
	
	if (A<B){
		larger = B;
	}
	
	return larger;
}
