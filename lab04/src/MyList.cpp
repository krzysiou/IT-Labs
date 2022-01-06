#include "MyList.h"

void prepare(MyList * list){
  list->head = NULL;

}
void add(MyList * list, const char * str){
  Node * elem = (Node *)malloc(sizeof(Node));
  elem->data = (char *)malloc(strlen(str)+1);
  strcpy(elem->data, str);
  elem->next = NULL;

  if(list->head == NULL) {
    list->head = elem;
  } else {
    Node * tail = last(list);
    tail->next = elem;
  }
}

Node * last(MyList * list){
  Node * temp;
  temp = list->head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  return temp;
}

Node * find(MyList * list, const char * str){
  Node * temp = list->head;
  while(strcmp(str, temp->data) != 0 && temp != NULL){
    temp = temp->next;
  }
  return temp;
}

bool empty(MyList * list){
  if(list->head == NULL){
    return true;
  } else {
    return false;
  }
}

void print(MyList * list){
  Node * temp = list->head;
  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
void clear(MyList * list){
  Node * temp;
  while(list->head != NULL){
    temp = list->head;
    list->head = list->head->next;
    free(temp->data);
    free(temp);
  }
}