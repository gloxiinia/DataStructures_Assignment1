#include <iostream>
#include <string>
#include <limits>
#include "arrayListType.h"
#include "Contact.h"

using namespace std;

//defining the ContactBook class
class ContactBook{
    private:
        Contact myContact;
        arrayListType<Contact> contactList;
    
    public:

    ContactBook();
    int count = 0;
    void addContact();//for adding contacts
    void delContact();//for deleting contacts
    void searchContact();//for searching and printing the info of one contact
    void displayAll();//for printing all contacts

};

ContactBook::ContactBook(){}

void ContactBook::addContact(){

    if(contactList.isFull()){
        cout <<endl;
        cerr << "Your contact book is full. Please delete some contacts to free up space." << endl;
    }else{
        myContact.createContact();
        contactList.insertAt(count, myContact);
        count++;
        cout << endl;
        cout << "You've successfully added " << myContact.getName() << " to the contact book." << endl;
    }
}

void ContactBook::displayAll(){
    if(contactList.isEmpty()){
        cout <<endl;
        cerr << "Your contact book is still empty." << endl;
    }else{
        cout << "+===================================================+" << endl;
        cout << "                LIST OF ALL CONTACTS" << endl;
        contactList.printAll();
        cout << endl;
    }

}

void ContactBook::searchContact(){
    string searchName;
    if(contactList.isEmpty()){
        cout <<endl;
        cerr << "Your contact book is still empty." << endl;
    }else if(contactList.isFull()){
        cout <<endl;
        cerr << "Your contact book is full. Please delete some contacts to free up space." << endl;
    }else{
        cout << "Enter the name you want to search: ";
        cin >> searchName;
        int found = contactList.contactSearch(searchName);

        if(found != -1){
        contactList.printContact(found);
        }else{
        cout << "The name you were looking for isn't in the contact book." << endl;
        }
    }
}

void ContactBook::delContact(){
    if(contactList.isEmpty()){
        cout <<endl;
        cerr << "Sorry, but you cannot delete from an empty list." << endl;
    }else{
        string delName;
        cout << "Enter the name you want to delete: ";
        cin >> delName;
        contactList.removeContact(delName);
    }

}

//main function to run the contact book application
int main(){
    ContactBook myBook; //creating the contactbook
    int choice;
	bool exit = false;
	
	while (exit == false)
	{

		cout << "+===================================================+" << endl;
		cout << "|                    Contact Book                   |" << endl;
		cout << "|						    |" << endl;
		cout << "| (1) - Add a new contact			    |" << endl;
		cout << "| (2) - Search a contact by name		    |" << endl;
		cout << "| (3) - Display all contacts			    |" << endl;
		cout << "| (4) - Delete a contact			    |" << endl;
		cout << "| (5) - Exit				            |" << endl;
		cout << "+===================================================+" << endl;

		cout << endl;
        cout << "Please enter a menu option by inputting a number from 1-5" << endl;
		cout << "Enter here: "; 
		cin >> choice;
		cout << endl;

        switch (choice) {
          case 1://case 1 for adding new contact
            cout << "You picked the add new contact option." << endl;
            myBook.addContact();
            break;
          case 2://case 2 for searching a contact
            cout << "You picked the search contact by name option." << endl;
            myBook.searchContact();
            break;
          case 3://case 3 for displaying all contacts in the contact list
            cout << "You picked the display all contacts option." << endl;
            myBook.displayAll();
            break;
          case 4://case 4 for deleting a contact
            cout << "You picked the delete a contact option." << endl;
            myBook.delContact();
            break;
          case 5://case 5 exiting
            cout << "Thank you for using the Contact Book App. See you next time." << endl;
            exit = true;  
            break;
          default: //default case for invalid inputs
            cout << "Sorry, but I can't recognize that input, try again." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }

}

	return 0;
}


 
