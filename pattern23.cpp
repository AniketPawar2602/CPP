<<<<<<< HEAD
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
=======
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
    cout<<"Enter no. of rows : ";
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }

        int j=i;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
>>>>>>> 2f50ac0cc0c4dc6d57cfc13161e0dc5a3dd55df0
}