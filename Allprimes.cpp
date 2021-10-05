#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int no =2;
    while(no<=n){
        int i =2;
        bool isPrime = true;
        while(i<=no){
            if(no%i==0){
                isPrime= false;
                break;
            }
            i++;
            }
            if(isPrime= true){
                cout<<no<<" ";
        }
        no++;
    }
    return 0;
}

/*
#include<iostream>

using namespace std;

int main(){

    int N, i, j;

    cin >> N;


    for(i = 2; i <= N; i++){
        bool isPrime = true;
        for(j = 2; j <= i/2; j++){
             if(i % j == 0){
                 isPrime = false;
                 break;
             }
        }

        if(isPrime==true)
            cout << i << " ";
    }

   return 0;
}
*/
