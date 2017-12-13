#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Student.h"

using namespace std;

class Node{
     public:
          //Main functions
          //constructor
          Node(Student*);
          //destructor
          ~Node();
          //set the next node in the linked list
          void setNext(Node*);
          //get the student object that the node is holding information for
          Student* getStudent();
          //Get the next node in the linked list
          Node* getNext();
     private:

          Node* next;
          Student* student;
};
#endif
