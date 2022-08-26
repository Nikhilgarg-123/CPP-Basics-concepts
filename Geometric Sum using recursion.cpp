// Geometric Sum
// Send Feedback
// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)
// using recursion.
// Input format :
// Integer k
// Output format :
// Geometric sum (upto 5 decimal places)
// Constraints :
// 0 <= k <= 1000
// Sample Input 1 :
// 3
// Sample Output 1 :
// 1.87500
// Sample Input 2 :
// 4
// Sample Output 2 :
// 1.93750






#include <iostream>
#include<bits/stdc++.h>
using namespace std;

float geometric_sum(int x){
    if (x==0){
        return 1;
    }
    return geometric_sum(x-1)+(1/pow(2,x));
}

int main() {
    int n;
    cin>>n;
    cout<< geometric_sum(n);
}
