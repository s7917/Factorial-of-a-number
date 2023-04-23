//-----------------factorial of num--------------------------------
#include<iostream>
using namespace std;

int main(){
    int n , i=1 , mul=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    for(int i=1; i<=n ; i++){
        mul=(mul*i);
        cout<<mul<<"*"<<i<<"="<<mul<<endl;
        }
    return 0;
}