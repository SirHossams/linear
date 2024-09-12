#include <iostream>

using namespace std;


int main()
{
		float M[3][3];
	cout << "Insert the value of the elements\n";
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++)
		cin >> M[i][j];
	}
		float det1,det2,det3,sol1; // the major determinant of the matrix
	det1=M[2][2]*M[1][1]-M[2][1]*M[1][2];
	det2=M[1][0]*M[2][2]-M[2][0]*M[1][2];
	det3=M[1][0]*M[2][1]-M[2][0]*M[1][1];
	sol1=M[0][0]*det1-M[0][1]*det2+M[0][2]*det3;
	float S[3][3]; //the minor determinants(the cofactors) of the matrix
	S[0][0]=M[1][1]*M[2][2]-M[2][1]*M[1][2];
	S[1][0]=-(M[1][0]*M[2][2]-M[2][0]*M[1][2]);
	S[2][0]=M[1][0]*M[2][1]-M[2][0]*M[1][1];
	S[0][1]=-(M[0][1]*M[2][2]-M[2][1]*M[0][2]);
	S[1][1]=M[0][0]*M[2][2]-M[2][0]*M[0][2];
	S[2][1]=-(M[0][0]*M[2][1]-M[2][0]*M[0][1]);
	S[0][2]=M[0][1]*M[1][2]-M[1][1]*M[0][2];
	S[1][2]=-(M[0][0]*M[1][2]-M[1][0]*M[0][2]);
	S[2][2]=M[0][0]*M[1][1]-M[1][0]*M[0][1];
	cout << endl;
	float MI[3][3];
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++)
		MI[i][j]=(1/sol1)*S[i][j]; //multiplicative inverse matrix assignment
	}
	cout << endl;
	cout << "The multiplicative inverse matrix values are\n";
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++)
		cout << MI[i][j] << " ";
		cout << endl; //multiplicative inverse matrix output
	}
	return 0;
}