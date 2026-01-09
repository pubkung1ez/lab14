#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 
void showMatrix(const bool an[][N]){
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            cout << an [i][j]<< " ";
        }
        cout << "\n";
    }
}

void inputMatrix(double bn[][N]){
    for(int i = 0 ; i < N ; i++){
        cout << "Row "<<i+1<<  ": ";
        for(int j = 0 ; j < N ; j++){
            cin >> bn [i][j];
        }
    }
}

bool taokub(double x,double y){
    if(x >= y){
        return true;
    }else{
        return false;
    }
}

bool taokub1(bool a,bool b,bool c,bool d){
    if(a and b and c and d ){
        return true;
    }else{
        return false;
    }
}

int findloca(const double aa[][N],int i,int j){
    if(i == 0 || j == 0 || i == N-1 || j == N-1){
        return 0;
    }else{
        double center = aa[i][j];
        bool a = taokub(center , aa[i-1][j]);
        bool b = taokub(center , aa[i][j+1]);
        bool c = taokub(center , aa[i][j-1]);
        bool d = taokub(center , aa[i+1][j]);
        if(taokub1(a,b,c,d)){
            return 1;
        }else{
            return 0;
        }
    }
}

void findLocalMax(const double aa[][N], bool bb[][N]){
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++){
            bb[i][j] = findloca(aa,i,j);
        }
    }
}
