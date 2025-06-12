#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
            m=i+1;
            while(m!=0){
                cout<<m<<" ";
                m--;
            }
        cout<<endl;
    } 
    return 0;
}