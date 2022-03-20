# DataStructures_Assignment1
This is the repository containing the code for the Data Structures Individual Assignment 1

Theory Questions for reference:

Identify the complexity of each operation (the Big-Oh) – 10 POINTS

Consider the situation when the array is not full and already full
1.	Insert a new item at the beginning of the array
2.	Insert a new item at the end of the array
3.	Delete an item at the beginning of the array
4.	Delete an item at the end of the array


File Details:
1. arrayListType.h

The List ADT template provided from the book, I've added some additional functions to make it work with the applications

The additions are as follows:

increaseSize(const elemType& increaseBy);
    //increase a list maxSize when full

printContact(int loc) const;
    //prints one specific contact

printAll() const;
    //prints all the contacts in a list

int contactSearch(string name) const;
        //searches for a specific contact name and prints the info

removeContact(string name);
    //removes the contact with the same name attribute in the list if found


2. Contact.h

The header file containing the Contact class

3. main.cpp

The cpp file containing the main program for the Contact Book Application

4. theoryFullList.cpp

The cpp file containing the answers to the theory questions if the list is full. I created example code to help visualize using the arrayListType template.

5. theoryNotFull.cpp

The cpp file containing the answers to the theory questions if the list is *not* full. I created example code to help visualize using the arrayListType template.
