#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[1000];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int i,j;
  for(i=0;i<n-1;i++){
      for(j=0;j<n-1;j++){
          if(a[j]>a[j+1]){
              swap(a[j],a[j+1]);
          }
      }
  }

  int t = 5;

  for (int i = 0 ; i < n ; i++) {
		int sum = 0;
		for (int j = i ; j < n-1; j ++) {
			sum += a[j];
			if (sum == t) {
				cout <<a[i]<<" and "<<a[j]<< endl;
			}
		}
	}

  return 0;
}
