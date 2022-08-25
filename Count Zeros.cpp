
// Count Zeros
//
// Given an integer N, count and return the number of zeros that are present in the given integer using recursion.
// Input Format :
// Integer N
// Output Format :
// Number of zeros in N
// Constraints :
// 0 <= N <= 10^9
// Sample Input 1 :
// 0
// Sample Output 1 :
// 1
// Sample Input 2 :
// 00010204
// Sample Output 2 :
// 2
// Explanation for Sample Output 2 :
// Even though "00010204" has 5 zeros, the output would still be 2 because when you convert it to an integer, it becomes 10204.
// Sample Input 3 :
// 708000
// Sample Output 3 :
// 4



#include <iostream>
using namespace std;
      int total_zeros=0;


int count_zeros(int n){
  int count=0;

  if(n==0  ){
      count++;
return 1;
  }

  if(n!=0){
    int rem=n%10;

    if(rem==0){
      count++;
    }
total_zeros+=count;
            count_zeros(n/10);
  }
return total_zeros;
}

int main(){
  int n;
  cin>>n;
  cout<<count_zeros(n);
}
