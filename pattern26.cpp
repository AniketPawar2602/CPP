<<<<<<< HEAD
/*
Diamond Pattern
   *
  ***
 *****
*******
 *****
  ***
   *

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

        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n-1;i;i--){
        for(int space=n-i;space;space--){
            cout<<" ";
        }

        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
=======
/*
Diamond Pattern
   *
  ***
 *****
*******
 *****
  ***
   *

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    int i=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }

        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }

        int end=i-1;
        while(end){
            cout<<"*";
            end--;
        }
        cout<<endl;
        i++;
    }

    i=n-1;
    while(i>=1){
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }

        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }

        int end=i-1;
        while(end){
            cout<<"*";
            end--;
        }
        cout<<endl;
        i--;
    }
    return 0;
>>>>>>> 2f50ac0cc0c4dc6d57cfc13161e0dc5a3dd55df0
}