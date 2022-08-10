
#include <iostream>

using namespace std;

struct array{
    int A[20];
    int size;
    int length;
};

void append(struct array *arr,int x){
    if(arr->length < arr->size){
        arr->A[arr->length++]=x;
    }
}



void printarray(array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

int main()
{
     array arr ={{2,4,6,8,10},10,5};
     append(&arr,100);
    printarray(arr);

    return 0;
}
