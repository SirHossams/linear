#include <iostream>

using namespace std;

int main()
{
	int sele;
	do {
	int a,b;
	cout << "Insert the order of the matrix\nConsidering the maximum order is 10×10\n";
	cin >> a >> b;
	if (a>10 | b>10) {
	cout << "Runtime Error. Choose a smaller order\n\n\n";
	return main();
	}
	// the square matrix has a flexibility to transpose the matrix
	int M[10][10];
	int Mt[10][10];
	// inserting the value of the original matrix
	cout << "Insert the values of the matrix\n";
	for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++)
		cin >> M[i][j];
	}
	// assigning the value of the transpose of the original matrix
	for (int i=0;i<10;i++) {
		for (int j=0;j<10;j++)
		Mt[i][j]=M[j][i]; // the key of transpose
	}
	// showing the value of the transpose of the matrix
	// showing is optional !!
	cout << endl;
	cout << "The value of the transpose of the matrix is:\n";
	for (int i=0;i<b;i++) {
		for (int j=0;j<a;j++) {
		cout << Mt[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Try Again? ";cin >> sele;}while(sele==1);
	return 0;
}