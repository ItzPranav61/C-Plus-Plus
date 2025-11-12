#include<iostream>

using namespace std;
int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;

    if (num>100){
        cout<<num<<" is greater than 100!"; 
    }
    else if (num==100){
        cout<<" It is equal.";
    }
    else {
        cout<<num<<" is lesser than 100.";
    }
    return 0;
}
