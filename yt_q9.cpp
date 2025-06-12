#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        // Print leading spaces
        for(int space = 0; space < i; space++){
            cout << "  "; // two spaces to match spacing of numbers
        }
        // Print decreasing number of values
        for(int j = 0; j < n - i; j++){
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
