#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = " Jecrc";
    cout<<str1<<" "<<str2<<endl;
  int n = str1.length();
  cout<<"length of string is :"<<n<<endl;
  cout<<"after Appending string is:"<<str1.append("Students")<<endl;
  cout<<"Is string Empty"<<str2.empty()<<endl;
  cout<<"After concatination is string is:"<<str1 + "bacho"<<endl;
//find() method
int index = str1.find("Hello");
cout<<"Index of 'helllo' in str1:"<<index<<endl;
//at method.str1[1];
char ch = str1.at(1);
cout<<"Character at index 1 in str1:"<<ch<<endl;
//swap method()
str1.swap(str2);
cout<<"After swapping str1 and str2 :"<<endl;
cout<<"str1 :"<<"str2:"<<endl;
string substr = str2.substr(5,6);
cout<<"substring of str2 from index with length 6:"<<substr<<endl;
string str3;
getline(cin,str3);
cout<<"you entered"<<str3<<endl;
return 0;
}