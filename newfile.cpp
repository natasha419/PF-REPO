#include <iostream>
using namespace std;
int main()
{
    int num;
    string result;
    cout<<"enter value of num:"<<endl;
    cin>>num;
    result= (num%2==0)?"Even Number":"Odd Number";
    cout<<"Entered number is:"<<result<<endl;
    return 0;
}