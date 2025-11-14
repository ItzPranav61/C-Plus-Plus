#include<iostream>

using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter your numbers: ";
    cin>>a;
    cin>>b;
    cin>>c;

    if ((a>b)&&a>c){
        cout<<a<<" is the largest."; 
    }
    else if (b>c){
    cout<<b<<" is the largest.";
    }
    else {
    cout<<c<<" is the largest.";
    }
    return 0;
}