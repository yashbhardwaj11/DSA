#include<iostream>
#include<math.h>
using namespace std;

// Converting Binary to Decimal.

int main() {
    int n;
    cout<<"Enter a Binary No. : ";
    cin>>n;

    int ans=0;
    int i=0;

    while(n!=0) {
        int digit = n%10;
        if (digit==1){
            ans = ans * pow(2,i);
        }
        
        n=n/10;
        i++;
    }

    cout<<"Decimal Equivalent is : "<<ans;

    return 0;
}