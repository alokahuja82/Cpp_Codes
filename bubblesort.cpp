#include <iostream>
using namespace std;
int main() {
    int a[] = {5,4,3,2,1};
    int n = sizeof(a)/sizeof(int);
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
        for(i=0; i<n;i++){
            cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
