#include<iostream>
using namespace std;

void lcm(int a,int b){
  int lcm;
	if(a>b){
		lcm =a;
	}else{
		lcm =b;
	}

 while(1){
    if(lcm%a==0 and lcm%b==0){
  		cout<<lcm<<endl;
      break;
  	}else{
  		lcm++;
  	}
  }
}

int main() {
  int n1,n2;
  cin>>n1>>n2;


  lcm(n1,n2);




	return 0;
}
