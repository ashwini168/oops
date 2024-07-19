#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    char c='R';
    int x=0, y=0;
    
    int distance= 10;
    
    while(n){
        
        switch(c){
            case 'R':
            x+=distance;
            c='U';
            distance+=10;
            break;
            
            case 'U':
            y+=distance;
            c='L';
            distance+=10;
            break;
            
            case 'L':
            x-=distance;
            c='D';
            distance+=10;
            break;
            
            case 'D':
            y-=distance;
            c='A';
            distance+=10;
            break;
            
            case 'A':
            x+=distance;
            c='R';
            distance+=;
            break;
        }
        n--;
        
        
    }
    
    cout<<x<<" "<<y<<endl;
}