<<<<<<< HEAD
/*
Inverted Half Hallow Pyramid
*****
*  *
* *
**
*

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows: ";
    cin>>n;

    for(int i=n;i;i--){
        for(int j=1;j<=i;j++){
            if(i==n || j==1 || i==j){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


//Same Logic But In Different Way
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no. of rows : ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             if(i==1 || j==1 || i+j==n+1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
=======
/*
Inverted Half Hallow Pyramid
*****
*  *
* *
**
*

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            if(i==1 || j==1 || i+j==n+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
>>>>>>> 2f50ac0cc0c4dc6d57cfc13161e0dc5a3dd55df0
