#include<iostream>
using namespace std;

void GCD(int a,int b){
  int gcd;
	if(a>b){
		gcd =b;
	}else{
		gcd =a;
	}

 while(1){
    if(a%gcd==0 and b%gcd==0){
  		cout<<gcd<<endl;
      break;
  	}else{
  		gcd--;
  	}
  }
}

int main() {
  int n1,n2;
  cin>>n1>>n2;


  GCD(n1,n2);




	return 0;
}
