
#include<iostream>
using namespace std;

int main(){

    int row;
    cout<<"Enter the number of rows you want to make"<<endl;
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int star = 0; star < row-i; star++)
        {
            cout<<"*";
        }
        for (int space = 0; space < 2*i+1; space++)
        {
            cout<<" ";
        }
        for (int star = 0; star < row-i; star++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int star = 0; star < i+1; star++)
        {
            cout<<"*";
        }
        for (int space = 0; space < (2*row)-(2*i)-1; space++)
        {
            cout<<" ";
        }
        for (int star = 0; star < i+1; star++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}