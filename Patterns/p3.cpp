#include<iostream>
using namespace std;

/* Pattern #6

*
* *
* * *
* * * *    */

int main() {
    int i1, j1, n1;

    cout<<"Enter No. of Rows : ";
    cin>>n1;

    i1=1;
    while(i1<=n1) {
        j1=1;
        while (j1<=i1) {
            cout<<"*";
            j1=j1+1;
        }
        cout<<endl;

        i1=i1+1;        
    }

/* Pattern #7

1
2 2
3 3 3
4 4 4 4    */

    int i2, j2, n2;

    cout<<"Enter No. of Rows : ";
    cin>>n2;

    i2=1;
    while(i2<=n2) {
        j2=1;
        while (j2<=i2) {
            cout<<i2<<" ";
            j2=j2+1;
        }
        cout<<endl;

        i2=i2+1;        
    }

    return 0;
}