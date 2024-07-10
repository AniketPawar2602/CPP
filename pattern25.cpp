<<<<<<< HEAD
/*

       1
     1 2 1
   1 2 3 2 1 
 1 2 3 4 3 2 1 

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

        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int start=i-1;start;start--){
            cout<<start;
        }
        cout<<endl;
    }
=======
/*

       1
     1 2 1
   1 2 3 2 1 
 1 2 3 4 3 2 1 

*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows : ";
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        //Space
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }

        //1st traingle
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }

        //2nd traingle
        int start = i-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        i++;
    }
    return 0;
>>>>>>> 2f50ac0cc0c4dc6d57cfc13161e0dc5a3dd55df0
}