#include<iostream>
using namespace std;

int lastindex(int *a, int n, int i, int m){
	//base case
	if(i == n){
		return -1;
	}

	//recursive case
	if(a[i] == m){
		return i;
	}
	int ans = lastindex(a,n,i-1,m);
	return ans;
}

int main() {

	int n,m;
	cin>>n;
	int a[100];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
  	cin>>m;
  cout<<lastindex(a,n,n-1,m)<<endl;





	return 0;
}
