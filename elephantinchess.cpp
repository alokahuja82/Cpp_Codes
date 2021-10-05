#include <iostream>
using namespace std;
int Elephant(int i, int j){
  //base case
  if(i == 0 and j==0){
    return 1;
  }
  if(i<0 and j<0){
    return 0;
  }
  //recursive case
  int ans =0;
  for(int k=0;k<i;k++){
    ans+=Elephant(k,j);
  }
  for(int k=0;k<j;k++){
    ans+=Elephant(i,k);
  }
  return ans;
}
int main() {
  int i,j;
  cin>>i>>j;
  cout<<Elephant(i,j);

  return 0;
}
