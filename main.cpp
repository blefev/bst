#include "bst.h"
#include <fstream>
using namespace std;

int main() {
  BST mybst;
  ifstream input;
  int cmd, argument, ret;
  node *result = NULL;
  input.open("cmd.txt");

  // while there is something to read from the file, read
  while (input >> cmd) {
    // switch on the command we read from the file
    switch (cmd) {
      // if the cmd requires a parameter, read it from the file and call the
      // associated function
    case 1:
      input >> argument;
      mybst.insert(argument);
      cout << "Added " << argument << " to the tree\n";
      break;
    case 2:
      mybst.inorder();
      break;
    case 3:
      mybst.postorder();
      break;
    case 4:
      mybst.preorder();
      break;
    case 5:
      input >> argument;
      result = mybst.search(argument);
      if (NULL == result) {
        cout << "Failed to find " << argument << " in the tree\n";
      } else {
        cout << "Found " << argument << " in the tree\n";
      }
      break;
    }
  }
  input.close();

  return 0;
}
