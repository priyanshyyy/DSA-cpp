#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the marks:-";
    cin>>num;
    if(num<=20){
        cout<<"E";
    }
    else if(num<=40){
        cout<<"D";
    }
    else if(num<=60){
        cout<<"C";
    }
    else if(num<=80){
        cout<<"B";
    }
    else{cout<<"A";}
    return 0;
}