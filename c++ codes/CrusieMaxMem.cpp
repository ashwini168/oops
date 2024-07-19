#include<iostream>
using namespace std;

int main(){
    int T;
    int E[50], L[50];
    int sum=0,ma;
    cout<<"enter the no of passengers"<<endl;
    cin>> T;
    
    cout<<"People entering array"<<endl;
    for(int i=0; i<T;i++){
        cin>>E[i];
    }
    cout<<"People leaving array"<<endl;
    for(int i=0; i<T;i++){
        cin>>L[i];
    }
    
    for(int i=0;i<T;i++){
        sum+=E[i]-L[i];
        ma=max(sum,ma);
    }
    
    cout<<"maximum number of passengers in crusie at "<<T<<"hour is "<<ma<<endl;
    
    return 0;
}