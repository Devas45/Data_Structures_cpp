/* P5.12. Design a class Message that models an e-mail message. A message has a recipient, a sender, and a message text. Support the following member functions:
• A constructor that takes the sender and recipient and sets the time stamp to the current time
• A member function append that appends a line of text to the message body
• A member function to_string that makes the message into one long string like this: "From: Harry Hacker\nTo: Rudolf Reindeer\n ..."
• A member function print that prints the message text. Hint: Use to_string.
Write a program that uses this class to make a message and print it.*/

#include<iostream>
#include<string>

using namespace std;

class Message{
private:
    string text,sender,receiver;

public:
Message(string t,string s,string r)
{
    text=t;
    sender=s;
    receiver=r;
}

string to_string()
{  
    return "From:  "+sender+"\nTo:   "+receiver+"\nText:  "+text;
}


void print()
{
    cout<<to_string()<<endl;
}
};

int main()
{
    
    string text, sender, receiver; 
    cout<<"Enter sender's name: ";
    getline(cin,sender);
    cout<<"Enter receiver's name: ";
    getline(cin,receiver);
    cout<<"Enter text: ";
    getline(cin,text);
    Message ob(text,sender,receiver);
    ob.print();
    return 0;
}