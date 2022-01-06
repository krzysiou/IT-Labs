#pragma once
#include <iostream>
#include <cstring>
#include "Element.h"

using namespace std;

class MyList {
  public:
    //MAIN METHODS

    //inits created list by giving it a name and setting head and tail pointers to nullptr
    void init(const char *);
    //add element at the end of linked list
    void append(Element *);
    //add element at end of the list (function overload)
    void append(const char *);
    //add element at the start of linked list
    void prepend(Element *);
    //add element at the start of linked list (function overload)
    void prepend(const char *);
    //returns pointer to head
    Element * getHead() const;
    //returns pointer to tail
    Element * getLast() const;
    //returns name of list
    char * getName() const;
    //checks if list is empty
    bool isEmpty() const;
    //removes head element of linked list
    void removeFirst();
    //deletes all elements of linked list and sets head and tail pointers to nullptr
    void clearList();
    //deletes all elements of linked list, sets head and tail to nullptr and deletes name of the list
    void clear();

    //HELPER METHODS

    //prints all elements of linked list
    void printList() const;

  private:
    char * name;
    Element * head;
    Element * tail;
};

//function that is used to execute printList method
void print(const MyList *);