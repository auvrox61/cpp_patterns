#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int space=n-i-1;space>0;space--){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        for(int k=i;k>0;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}