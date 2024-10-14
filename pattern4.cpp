/*
321
321
321
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<n-j+1; //For Column
            //cout<<n-i+1; //For Row

        }
        cout<<endl;
    }
}
