#include<bits/stdc++.h>
using namespace std;
#define n 9

void printsudoku(int **sudoku){
	for(int i=0;i<=8;i++){
		for(int j=0;j<=8;j++){
			cout<<sudoku[i][j]<<" ";
		}cout<<endl;
	}
}

bool isSafe(int **sudoku,int row,int col,int num){

	for(int i=0;i<=8;i++){
		if(sudoku[row][i]==num){
			return false;
		}
	}
	for(int i=0;i<=8;i++){
		if(sudoku[i][col]==num){
			return false;
		}
	}
	int newR=row-row%3;
	int newC=col-col%3;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(sudoku[i+newR][j+newC]==num){
				return false;
			}
		}
	}return true;

}

bool solvesudoku(int **sudoku,int row,int col){
	if(row==n-1 && col==n){
		return true;
	}
	if(col==n){
		col=0;
		row=row+1;
	}
	if(sudoku[row][col]>0){
		return solvesudoku(sudoku,row,col+1);
	}
	for(int num=1;num<=n;num++){
		if(isSafe(sudoku,row,col,num)){
			sudoku[row][col]=num;

			if(solvesudoku(sudoku,row,col+1))
				return true;
		}
		sudoku[row][col]=0;
	}return false;
}

int main(){
	int m;
	cin>>m;
	int **sudoku;
	sudoku=new int*[n];
	for(int i=0;i<n;i++){
		sudoku[i]=new int[n];
		for(int j=0;j<n;j++){
			cin>>sudoku[i][j];
		}
	}
	if(solvesudoku(sudoku,0,0)){
		printsudoku(sudoku);
	}
}