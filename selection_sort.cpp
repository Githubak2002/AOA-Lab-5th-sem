// ------------------- Selection Sort ------------------- 

#include<iostream>
using namespace std;

void swap(int *a,int *b){
  int temp = *a;
  *a = *b;  *b = temp;
}

void printArray(int a[],int n){
  for (int i = 0; i < n; i++)
    cout<<a[i]<<" ";
  cout<<endl;
}

void selectionSort(int a[],int n){
  int min_index;
  for (int i = 0; i < n-1; i++){
    min_index = n-1;   // min_index = i;
    for (int j = i; j < n; j++){
      if(a[j]<a[min_index])
        min_index = j;
    }
    swap(&a[min_index],&a[i]);
  }
  
}
int main(){
  int a[5] = {3,9,7,1,2};
  int n = 5;
  cout<<"Array element Before Sort\n";
  printArray(a,n);

  selectionSort(a,n);
  cout<<"Array element After Sort\n";
  printArray(a,n);

  return 0;
}