#include <iostream>

using namespace std;


int main()
{
	int sele;
	do {
	int M[3][3];
	cout << "Insert the value of the matrix\n";
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
			cin >> M[i][j];
		}
	}
	int det1,det2,det3,sol1,sol2,sol3;
	det1=M[2][2]*M[1][1]-M[2][1]*M[1][2];
	det2=M[1][0]*M[2][2]-M[2][0]*M[1][2];
	det3=M[1][0]*M[2][1]-M[2][0]*M[1][1];
	sol1=M[0][0]*det1-M[0][1]*det2+M[0][2]*det3;
	cout << endl <<  "The Value of the determinant is:" << endl << sol1 << endl;
	cout << "Try Again? ";
	cin >> sele;
	}while(sele==1);
	return 0;
}