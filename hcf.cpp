#include<iostream>
using namespace std;
int hcf(int a,int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    if(a == b)
        return a;
    if(a < b){
        return hcf(a,b-a);
    }
    else{
        return hcf(a-b,b);
    }
}

int main(){
    cout<<"Enter two numbers : ";
    int a,b;
    cin>>a>>b;
    int ans = hcf(a,b);
    cout<<"HCF is : "<<ans<<endl;
    cout<<"LCM is : "<<(a*b)/ans<<endl;
}