#include<bits/stdc++.h>
using namespace std;

void maxNum(string str , int k, string max){
	//base case
	if(k ==0){
		return;      //No more swaps left
	}
	int n =str.length();

	// recursive case
	for(int i =0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(str[i]<str[j]){
				swap(str[i],str[j]);
  				if(str.compare(max)>0){
  					max = str;
  				}
        maxNum(str, k-1,max);
				//backtracking
				swap(str[i],str[j]);
			}
		}
	}


}


int main () {
	string str;
	cin>>str;
	int k;
	cin>>k;
	string max = str;

	maxNum(str, k ,max);

	cout<<max << endl;


	return 0;
}
