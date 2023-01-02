#include <iostream>
using namespace std;

/** Desired Output:  for n=8  
12345678
23456781
34567812
45678123
56781234
67812345
78123456
81234567  
 *
 **/    

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=i; j<=n; j++){
            cout<<j;
        }
        for(int j=1; j<=(i-1); j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}