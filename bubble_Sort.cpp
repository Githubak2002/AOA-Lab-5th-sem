// ------------------- Bubble Sort ------------------- 

#include<iostream>
using namespace std;

// print array
void printArray(int a[],int n){
  for (int i = 0; i < n; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

// swap element
void swap(int *a,int *b){
  int temp = *a;
  *a = *b;  *b = temp;
}

void bubbleSort(int arr[],int n){
  for (int i = 0; i < n-1; i++){
    for (int j = 0; j < n-1-i; j++){
      if(arr[j]>arr[j+1])
        swap(&arr[j],&arr[j+1]);
    }
  }
}

int main(){
  int a[5] = {3,-9,7,10,2};
  int n = 5;
  cout<<"Array element Before Sort\n";
  printArray(a,n);

  bubbleSort(a,n);
  cout<<"Array element After Sort\n";
  printArray(a,n);
  return 0;
}

