#include<iostream>
using namespace std;
int fun(int n){
    if (n == 0)
    return false;
    if(n == 1)
    return true;
    return(n%5 == 0) && fun(n/5);
}
int main()
{
    int n;
    cin>>n;
    cout<<fun(n)<<endl;
    return 0;
}