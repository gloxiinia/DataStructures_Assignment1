#include <iostream>
#include <string>
#include "arrayListType.h"

using namespace std;

int main(){
    
    //Example with a list that is full
    arrayListType<int> numList(5);
    int userNum;
    
    //inserting values to a list
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> userNum;
        numList.insertAt(i, userNum); //using insertAt to insert the desired value into the list
    }
    
    int size = numList.listSize();//storing the length of the list to the variable size
    
    //Inserting items uses a for loop O(n)
    //Which makes codes from line 17-18 O(n^2)
    
    //IMPORTANT: The questions below will be answered ignoring the initial prompt (for loop) for user input (the code above)
    //and the print function which will always use a for loop (O(n))
    
    //Question 1
    //Insert a new item at the beginning of an array
    //For this, since the original arrayList template did not have a function to increase a list's maxSize, i have
    //added a new function named increaseBy to increase a list's maxSize by whatever number is passed through
    
    int frontNum = 25;
    numList.increaseSize(1); //Increasing the list's maxSize by 1 to insert the additional item
    numList.insertAt(0, frontNum);
    numList.print(); //print function to show current list members
    cout << endl;
    
    //Inserting an item uses a for loop O(n), so the time complexity is O(n), since the index
    //of the array that will be inserted to is the first one, that means the program will only have to go through
    //one iteration to find the location for the item that will be inserted. But in this case, since we need to increase
    //the size of the array first, it will take a slightly longer time to process compared to if the list weren't full.
    
    //Question 2
    //Insert an item at the end of an array
    int endNum = 50;
    numList.increaseSize(1); //Increasing the list's maxSize by 1 again since it is now full after the last question
    numList.insertEnd(endNum);
    numList.print(); //print function to show current list members
    cout << endl;
    
    //Inserting an item to the end of an array does not use a for loop, so the time complexity is O(1)
    //Since the item inserted is at the end of the array, it means that the item does not need to go through a for
    //loop to find the location, the program can just insert the intended value at the index corresponding to the 
    //current length of the list (last index). But. yet again, since the list is full, we need to increase the size
    //of the list, so it will take a slightly longer time to process compared to if the list weren't full.
    
    //Question 3
    //Delete an item at the beginning of an array
    numList.removeAt(0);
    numList.print(); //print function to show current list members
    cout << endl;
    //Removing an item needs a for loop to move the indexes up by one, so the time complexity is O(n). This is not affected if the list is full.
    
    //Question 4
    //Delete an item at the end of an array 
    numList.removeAt(size);
    numList.print();//print function to show current list members
    cout << endl;
    //Removing an item at the end using the arrayListType template still uses a for loop, but since it only iterates one time with no need
    // to push back any indexes one, the time complexity should be O(1). 
    //This is not affected if the list is full.
}