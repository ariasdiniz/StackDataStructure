#ifndef STACKDATASTRUCTURE_STRUCTURES_STACK_H_
#define STACKDATASTRUCTURE_STRUCTURES_STACK_H_

namespace StackDataStructure {
  template <typename T>
  struct item
  {
    T value;
    item* nextItem;
  };
  
  template <typename T>
  class Stack
  {
  private:
    item<T>* topElement;
  public:
    Stack()
    {
      topElement;
    };

    void putValue(T value)
    {
      item<T>* oldElement = topElement;
      topElement = new item<T>;
      topElement->value = value;
      topElement->nextItem = oldElement;
    };

    T popValue()
    {
      T valueToBePopped = topElement->value;
      item<T>* nextItem = topElement->nextItem;
      topElement = nextItem;
      return valueToBePopped;
    };

    T readTopValue()
    {
      return topElement->value;
    };

  };

}

#endif