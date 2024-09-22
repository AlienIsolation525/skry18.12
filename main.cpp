#include"classes.h"
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
User user;
Message message;
ifstream file1;
ifstream file2;
file1.open("user.txt");
file2.open("message.txt");
if((! file1.is_open()) || (! file2.is_open()))
{
    cout<<"ERROR CAN NOT OPEN THE FILES!";
    return 1;
}

file1>>first>>second>>third;
user.setname(first);
user.setlogin(second);
user.setpass(third);

file2>>first>>second>>third;
user.settext(first);
user.setsender(second);
user.setreceiver(third);

cout<<1<<endl;
return 0;
}