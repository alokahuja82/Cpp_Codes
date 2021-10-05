#include <iostream>
using namespace std;
int gcd(int a, int b){
  //lase case
  if(a==0)
   return b ;
  if(b==0)
    return a;

   if(a==b)
    return a;

  //recursion case
  if(a>b)
    return gcd(a-b,b);
  return gcd(a,b-a);
}

int main() {

  cout<<gcd(24,16);

  return 0;
}
