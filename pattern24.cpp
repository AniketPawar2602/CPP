/*

      1
    2 3
  4 5 6
7 8 9 10

*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    int k=1;

    for(int i=1;i<=n;i++){
        for(int space=n-i;space;space--){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<k++;
        }
        cout<<endl;
    }
}