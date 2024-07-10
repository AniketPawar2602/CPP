<<<<<<< HEAD
/*
AAA
BBB
CCC
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows: "<<endl;
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A'+i-1; //Row will be same
            // char ch = 'A'+j-1; //Column will be same
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
=======
/*
AAA
BBB
CCC
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows: "<<endl;
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch = 'A'+i-1; //Row will be same
            //char ch = 'A'+j-1; //Column will be same
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
>>>>>>> 2f50ac0cc0c4dc6d57cfc13161e0dc5a3dd55df0
}