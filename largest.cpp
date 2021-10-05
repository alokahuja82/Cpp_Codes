#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cout<<"Enter three numbers:"<<endl;
  cin>>a>>b>>c;

  if(a>b){
    if (a>c)
    cout<<a<<" is largest"<<endl;
  }else if (b>c){
    if(b>a)
    cout<<b<<" is the largest"<<endl;
  }else
    cout<<c << " is the largest"<<endl;

  return 0;
}
