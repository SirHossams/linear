#include <iostream>

using namespace std;


int main()
{
	int sele;
	do {
	int M[10][10];
	int n;
	cout << "Insert the dimensions of the square matrix\n";
	cin >> n;
	cout << "Insert the values of the matrix\n";
	for (int i=0;i<n;i++)
	for (int j=0;j<n;j++)
	cin >> M[i][j];
	int sum=0;
	for (int i=0;i<n;i++)
	sum+=M[i][i];//compute the trace
	cout << "The Trace of the matrix is\n";
	cout << sum << endl;
	cout << "Try Again? 1/0 ";cin >> sele;
	}while(sele==1);
	return 0;
}