/*
Hallow Pyramid 

    *
   * *
  *   *
 *     *
*********

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int space = n-i;space;space--){
            cout<<" ";
        }

        for(int j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==n){
                if(j%2==1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

//same logic different style
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter no. of rows: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int space=n-i;space;space--){
//             cout<<" ";
//         }

//         for(int j=1;j<=2*i-1;j++){
//             if(j==1 || j==2*i-1 || i==n){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }            
//         }
//         cout<<endl;
//     }
// }
