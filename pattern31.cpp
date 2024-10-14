/*

   * 
  **
 ***
****
 ***
  ** 
   *

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int space=n-i;space;space--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }   

    for(int i=n-1;i;i--){
        for(int space=n-i;space;space--){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}