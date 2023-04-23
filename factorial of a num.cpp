//-----------------factorial of num--------------------------------
#include<iostream>
using namespace std;

int main(){
    int n , i=1 , fac=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    for(int i=1; i<=n ; i++){
        fac=(fac*i);
        cout<<fac<<"*"<<i<<"="<<fac<<endl;
        }
    return 0;
}
