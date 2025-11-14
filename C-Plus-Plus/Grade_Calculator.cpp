#include<iostream>

using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if ((marks>=75)||(marks==100)){
        cout<<marks<<" marks is consider as 'A' grade."; 
    }
    else if ((marks>=50)||(marks==100)){
    cout<<marks<<" marks is consider as 'B' grade.";
    }
    else if ((marks>=25)||(marks==100)){
    cout<<marks<<" marks is consider as 'C' grade.";
    }
    else {
    cout<<marks<<" marks is consider as 'F' grade.";
    }
    return 0;
}