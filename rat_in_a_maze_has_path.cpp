#include <iostream>
using namespace std;

bool has_path_helper(int **arr,int n,int **solution,int x, int y){
    if(x==n-1 && y==n-1){
        return true;
    }
    if (x<0 || y<0 || x>=n || y>=n || solution[x][y]==1 || arr[x][y]==0){
        return false;

    }
    solution[x][y]=1;
    if(has_path_helper(arr,n,solution,x-1,y)){
        return true;
    }
    if(has_path_helper(arr,n,solution,x+1,y)){
        return true;
    }
    if(has_path_helper(arr,n,solution,x,y-1)){
        return true;
    }
    if(has_path_helper(arr,n,solution,x,y+1)){
        return true;
    }
    solution[x][y]=0;
    return false;
}

bool has_path(int **arr,int n){
    int **solution=new int*[n];
    for (int i=0;i<n;i++){
        solution[i]=new int [n];
        for (int j=0;j<n;j++){
            solution[i][j]=0;
        }
    }
    return has_path_helper(arr,n,solution,0,0);
}



int main() {
    cout<<"Hello Nikhil!"<<endl;
    int ** arr;
    int n;
    cin>>n;
    arr=new int *[n];
    for (int i=0;i<n;i++){
        arr[i]=new int[n];
        for (int j=0;j<n;j++){
            cin>>arr[i][j];

        }
    }
    cout<<has_path(arr,n)<<endl;
}
