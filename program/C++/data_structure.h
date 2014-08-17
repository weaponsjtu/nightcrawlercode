/**
 * @brief my implementation for basic data structure
 * @author Weipeng Zhang
 * @email javawebzwp@gmail.com
 * @time 14:09, Aug 16, 2014
 */

#ifndef DATA_STRUCTURE_H_
#define DATA_STRUCTURE_H_

namespace weipeng {

typedef int ElementType;

class Node {
 public:
  ElementType data;
  Node* next;
};

class List {
  public:
    List();   
    virtual ~List();
    bool is_empty();
    void insert(Node* ptr, Node* new_data);
    void delete(Node* ptr);
  private:
    Node* head;
    int size;
};

class Stack {
  public:
   Stack();
   virtual ~Stack();
   bool is_empty();
   int size();
   void push(int data);
   void top();
   void pop();
  private:
   int* data;
   int size;
};

} //namespace weipeng

