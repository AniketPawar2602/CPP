<<<<<<< HEAD
/*
A
BC
CDE
DEFG
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
        while(j<=i){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
=======
/*
A
BC
CDE
DEFG
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
        while(j<=i){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
>>>>>>> 2f50ac0cc0c4dc6d57cfc13161e0dc5a3dd55df0
}