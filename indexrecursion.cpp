#include <iostream>
using namespace std;

int index7(int *a, int n,int i){
  //Base case
  if(i==n){
     return -1;
  }

  //recursive case
  if(a[i] == 7){
    cout<<i<<endl;
  }else{
    return index7(a,n,i+1);
  }

}

int main() {

  int a[] = {1,2,5,6,17,7,7,24,7};
  int n = sizeof(a)/sizeof(int);

  index7(a,n,0);


  return 0;
}
