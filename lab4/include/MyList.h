#pragma once
#include <cstring>
#include <iostream>

using namespace std;

//Structures
typedef struct Node{
  char * data;
  Node * next;
} Node;

typedef struct MyList{
  Node * head;
} MyList;

void prepare(MyList *);
void add(MyList *, const char *);
Node * last(MyList *);
Node * find(MyList *, const char *);
bool empty(MyList *);
void print(MyList *);
void clear(MyList *);