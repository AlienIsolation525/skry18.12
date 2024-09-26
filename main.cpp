#include"classes.h"
#include<fstream>
#include<iostream>
#include<filesystem>
using namespace std;
namespace fs = filesystem;

int main()
{
User user;
Message message;
ifstream file1;
ifstream file2;
file1.open("user.txt");
file2.open("message.txt");
//base case
if((! file1.is_open()) || (! file2.is_open()))
{
    cout<<"ERROR CAN NOT OPEN THE FILES!";
    return 1;
}
//perms
fs::permissions("user.txt",
    fs::perms::owner_all | fs::perms::group_all,
    fs::perm_options::remove);

fs::permissions("message.txt",
    fs::perms::owner_all | fs::perms::group_all,
    fs::perm_options::remove);

string first,second,third;
file1>>first>>second>>third;
user.setname(first);
user.setlogin(second);
user.setpass(third);

file2>>first>>second>>third;
message.settext(first);
message.setsender(second);
message.setreceiver(third);

cout<<1<<endl;
return 0;
}