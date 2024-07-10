<<<<<<< HEAD
/*

* * * *
 * * *
  * * 
   *  

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;

    for(int i=n;i;i--){
        for(int space=n-i;space;space--){
            cout<<" ";
        }

        for(int j=1;j<=2*i-1;j++){
            if(j%2==0){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }

        cout<<endl;
    }
=======
/*

* * * *
 * * *
  * * 
   *  

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : "<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int space = i-1;
        while(space){
            cout<<" ";
            space--;
        }

        int j=1;
        while(j<=n-i+1){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
>>>>>>> 2f50ac0cc0c4dc6d57cfc13161e0dc5a3dd55df0
}