<<<<<<< HEAD
/*
   1
  22
 333
4444

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
            cout<<i;
        }
        cout<<endl;
    }
=======
/*
   1
  22
 333
4444

*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows : ";
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
>>>>>>> 2f50ac0cc0c4dc6d57cfc13161e0dc5a3dd55df0
}