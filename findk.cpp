#include<iostream>
using namespace std;

int findk(int*a,int n,int x){
    //base case
    if(n ==0){
        return -1;
    }
    //recursive case
    int count =0;
    if(a[0] == x){
        count++;
    }
    findk(a+1,n-1,x);
    return count;

}

int main() {
    int n, x;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    cout<<findk(a, n, x);
}
