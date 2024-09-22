#include<string>
using namespace std;

class User {
private:
    string _name;
    string _login;
    string _pass;
public:
    User();
    ~User();
    void setname(string name){_name=name;};
    void setlogin(string login){_login=login;};
    void setpass(string pass){_pass=pass;};
};
class Message {
private:
    string _text;
    string _sender;
    string _receiver;
public:
    void settext(string text){_text=text;};
    void setsender(string sender){_sender=sender;};
    void setreceiver(string receiver){_receiver=receiver;};
};