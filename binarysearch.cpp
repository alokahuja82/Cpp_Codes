#include<iostream>
using namespace std;

int Binarysearch(int*a,int s,int e, int k){


	//base case
	if(s>e){
		return -1;
	}
	//recursive case
	int mid = (s+e)/2;
	if(a[mid] == k){
		return mid;
	}
	else if(a[mid]<k){
		return Binarysearch(a,mid+1,e,k);
	}else{
		return Binarysearch(a,s,mid-1,k);
	}

}

int main() {
	int n, a[1000];
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int s = 0;
	int e = n-1;
	int k;
	cin>>k;

	cout<<Binarysearch(a,s,e,k);



	return 0;
}
