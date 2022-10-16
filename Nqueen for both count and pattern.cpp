#include <iostream>
#include<bitset>
using namespace std;
bitset<30> col,d1,d2;
int index1[15][15]={0};

void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<index1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void nqueen(int r,int n,int &ans){
    if(r==n){
        ans++;
        print(n);
        return;
    }

    for(int c=0;c<n;c++){
        if(!col[c] && !d1[r-c+n-1] && !d2[r+c]){
            col[c] = d1[r-c+n-1] = d2[r+c] = index1[r][c]=1;
            nqueen(r+1,n,ans);
            col[c] = d1[r-c+n-1] = d2[r+c] = index1[r][c]=0;

        }
    }

}


int main() {
    int n;
    cin>>n;
    int ans=0;
    nqueen(0,n,ans);
    cout<<ans;
    
}
