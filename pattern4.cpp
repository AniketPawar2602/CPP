<<<<<<< HEAD
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
=======
/*
321
321
321
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows : "<<endl;
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-j+1;    //j - for column
            //cout<<n-j+1;    i - for row
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
>>>>>>> 2f50ac0cc0c4dc6d57cfc13161e0dc5a3dd55df0
