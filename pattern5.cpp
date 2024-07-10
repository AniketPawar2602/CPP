<<<<<<< HEAD
/*
123
456
789
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    int k=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<k++;
        }
        cout<<endl;
    }
=======
/*
123
456
789
*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no. of rows : "<<endl;
    int n;
    cin>>n;

    int i=1;
    int k=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<k;
            k++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
>>>>>>> 2f50ac0cc0c4dc6d57cfc13161e0dc5a3dd55df0
}