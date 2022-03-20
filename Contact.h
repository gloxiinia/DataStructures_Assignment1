#ifndef CONTACT_H
#define CONTACT_H
#include <string>
#include <iostream>

using namespace std;

//Defining the contact class
class Contact{

private:
    string contName, contGender, contEmail, contAddress, contphoneNum;

public:
    //constructor
    Contact();
    void createContact();
    void displayContact();
    
    // getters
    string getName();
    string getGender();
    string getEmail();
    string getAddress();
    string getPhonenum();


};

Contact::Contact(){
    contName = "";
    contGender = "";
    contEmail = "";
    contAddress = "";
    contphoneNum = "";

}
void Contact::createContact(){
    cout << "Enter your full name: ";
    cin >> contName;
    cout <<"Enter your gender: ";
    cin >> contGender;
    cout << "Enter your email: ";
    cin >> contEmail;
    cout << "Enter your address: ";
    cin >> contAddress;
    cout << "Enter your phone number: ";
    cin >> contphoneNum;
}

void Contact::displayContact(){
    cout << "Name\t\t: " << getName() << endl;
    cout << "Email\t\t: " << getEmail() << endl;
    cout << "Address\t\t: " << getAddress() <<endl;
    cout << "Phone Number\t: " << getPhonenum()<< endl;
}

// getters
string Contact::getName(){
    return contName;
}
string Contact::getGender(){
    return contGender;
}
string Contact::getEmail(){
    return contEmail;
}
string Contact::getAddress(){
    return contAddress;
}
string Contact::getPhonenum(){
    return contphoneNum;
}

#endif