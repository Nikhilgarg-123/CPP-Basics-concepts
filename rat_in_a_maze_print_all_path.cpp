#include <iostream>
using namespace std;

void print_path(int **arr , int n, int **solution,int x,int y){
    if(x==n-1 && y==n-1){
      solution[x][y]=1;

        for(int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cout<<solution[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
 if (x<0 || y<0 || x>=n || y>=n || solution[x][y]==1 || arr[x][y]==0){
        return ;
    }
     solution[x][y]=1;
     print_path(arr,n,solution,x-1,y);
     print_path(arr,n,solution,x,y-1);
     print_path(arr,n,solution,x+1,y);
     print_path(arr,n,solution,x,y+1);
    solution[x][y]=0;
}


bool has_path(int **arr,int n){
    int **solution=new int*[n];
    for (int i=0;i<n;i++){
        solution[i]=new int [n];
        for (int j=0;j<n;j++){
            solution[i][j]=0;
        }
    }
    print_path(arr,n,solution,0,0);
    return true;


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
  cout<<  has_path(arr,n);
}
