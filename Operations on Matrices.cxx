// the program hasn't been built yet
#include <iostream>

using namespace std;


int main()
{
	int sele;
	do {
	int a,b;
	char opert[]="+-*/";
	char o;
	cout << "Insert the order of the matrices\n";
	cin >> a >> b;
	int M[a][b];
	int N[a][b];
	cout << "Insert the elements of the matrices and the operation on the middle\n";
	for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++) {
			cin >> M[i][j];
		}
	}
	cin >> o;
		for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++) {
			cin >> N[i][j];
		}
	}
	// addition of the matrices
	if (o==opert[0]) {
	int S[a][b];
	for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++) {
			S[i][j]=M[i][j]+N[i][j];
		}
	}
	cout << endl << endl;
	for (int u=0;u<a;u++) {
		for (int n=0;n<b;n++) {
			cout << S[u][n] << " ";
		}
		cout << endl;
	}
	}
	// subtraction of the matrices
	else if (o==opert[1]) {
			int S[a][b];
	for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++) {
			S[i][j]=M[i][j]-N[i][j];
		}
	}
	cout << endl << endl;
	for (int u=0;u<a;u++) {
		for (int n=0;n<b;n++) {
			cout << S[u][n] << " ";
		}
		cout << endl;
	}
	}
	// multiplication of matrices
	else if (o==opert[2]) {
		int S[a][b];
		for (int i=0;i<a;i++) {
			    for (int j=0;j<b;j++) {
			    	S[i][j]=0;
			    	for (int c=0;c<b;c++) {
				    S[i][j]+=M[i][c]*N[c][j];
			    }
			  }
		}
		cout << endl;
			for (int i=0;i<a;i++) {
				for (int j=0;j<b;j++) {
					cout << S[i][j] << " ";
				}
				cout << endl;
			}
	}
	cout << "Try Again? ";cin >> sele;
	}while(sele==1);
	return 0;
}