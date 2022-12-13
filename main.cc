#include "./structures/stack.h"
#include <iostream>

using namespace std;
using namespace StackDataStructure;

int main()
{
  Stack stack = Stack<int>();
  stack.putValue(1);
  cout << "Top element val: " << stack.readTopValue() << endl;
  stack.putValue(2);
  cout << "Top element val: " << stack.readTopValue()<< endl;
  stack.putValue(3);
  cout << "Top element val: " << stack.readTopValue()<< endl;
  int poppedVal = stack.popValue();
  cout << "Popped val: " << poppedVal << endl;
  poppedVal = stack.popValue();
  cout << "Popped val: " << poppedVal << endl;
  cout << "Top element val: " << stack.readTopValue()<< endl;
  return 0;
}
