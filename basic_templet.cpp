#include<iostream>
using namespace std;


int main(){
  return 0;
}

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

