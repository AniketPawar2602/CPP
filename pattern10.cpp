<<<<<<< HEAD
/*
Traingle Pattern
1
2 1
3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
}
=======
/*
Traingle Pattern
1
2 1
3 2 1
4 3 2 1
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
            cout<<i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
>>>>>>> 2f50ac0cc0c4dc6d57cfc13161e0dc5a3dd55df0
