#include <iostream>
#include <math.h>
using namespace std;

/* Desired Output:
123456789
1       9
1       9
1       9
1       9
1       9
1       9
123456789

NOTE: As soon as moved to two digit number the spaces should also be accordingly.
*/


int main(){
    int n, m;
    cin>>n;
    cin>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(j==1 || j==m || i==1 || i==n){
               cout<<j;
            }else{
                int noOfDigits = to_string(j).length();
                for(int k=1; k<=noOfDigits; k++){
                    cout<<" ";
                }
            }
            
        }
        cout<<endl;
    }
    return 0;
}