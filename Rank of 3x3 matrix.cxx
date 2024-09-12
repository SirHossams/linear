#include <iostream>

using namespace std;

int main()
{
	int sele;
	do {
	int M[3][3];
	cout << "Insert the value of the elements\n";
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++)
		cin >> M[i][j];
	}
		int det1,det2,det3,sol1; // the major determinant of the matrix
	det1=M[2][2]*M[1][1]-M[2][1]*M[1][2];
	det2=M[1][0]*M[2][2]-M[2][0]*M[1][2];
	det3=M[1][0]*M[2][1]-M[2][0]*M[1][1];
	sol1=M[0][0]*det1-M[0][1]*det2+M[0][2]*det3;
	int S[3][3]; //the minor determinants(the cofactors) of the matrix
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
	int rank=3;int c=0,b=0;
	if (sol1==0)
	rank--;
	else {
		cout << "The Rank of the matrix is\n";
		cout << rank << endl;
		return 0;
	}
	
	bool conds=1;
	for (int i=0;i<3;i++) {
		for (int j=0;j<3;j++) {
		conds=1;
		if (S[i][j]==0)
		b++;
		if (M[i][j]==0)
		c++;
		}
	}
	if (b==9)
	rank--;
	if (c==9)
	rank=0;
	cout << "The Rank of the matrix is\n";
	cout << rank << endl;
	cout << "Try Again? 1/0: ";cin >> sele;}
	while(sele==1);
	return 0;
}