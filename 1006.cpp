#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int hundred = 0;
    int ten = 0;
    int rest = 0;
    rest = n % 10;
    ten = (n / 10) % 10;
    hundred = (n / 100) % 10;

    if(hundred){
        for(int i=0;i<hundred;i++) cout<<"B";
    }
    if(ten){
        for(int i=0;i<ten;i++) cout<<"S";
    }
    if(rest){
        for(int i=1;i<=rest;i++) cout<<i;
    }

    return 0;
}