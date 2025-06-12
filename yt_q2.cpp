#include<iostream>
using namespace std;

int main(){
    int n;
    char x;
    cin>>n;
    cin>>x;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    return 0;
}