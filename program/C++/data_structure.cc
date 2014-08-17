/**
 * @brief my implementation for basic data structure
 * @author Weipeng Zhang
 * @email javawebzwp@gmail.com
 * @time 14:41, Aug 16, 2014
 */

namespace weipeng {
  List::List(): head(NULL), size(0) {
  }

  bool List::is_empty() {
    if (head == NULL) {
      return true;
    }
    return false;
  }

  void List::insert(Node* ptr, Node* new_data) {
    new_data->next = ptr->next;
    ptr->next = new_data;
    size++;
  }

  void List::delete(Node* ptr) {
    Node* temp = head;
    if (temp == ptr) {
      head = temp->next;
    } else {
      while (temp != NULL && (temp->next)->data != ptr->data) {temp = temp->next;}
      temp->next = ptr->next;
    }
    delete ptr;
    size--;
  }

  Stack::Stack(): data(NULL), size(0) {
  }

  bool Stack::is_empty() {
    if (size == 0) {
      return true;
    }
    return false;
  }

  void Stack::push() {
  }
} //namespace weipeng

