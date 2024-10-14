/*
IMP
1234
 234
  34
   4

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int space=i-1;space;space--){
            cout<<" ";
        }

        for(int j=i;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}