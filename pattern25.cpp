/*

       1
     1 2 1
   1 2 3 2 1 
 1 2 3 4 3 2 1 

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int space=n-i;space;space--){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int start=i-1;start;start--){
            cout<<start;
        }
        cout<<endl;
    }
}