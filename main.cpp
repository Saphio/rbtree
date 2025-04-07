#include <iostream>
#include <fstream>
#include <string>
#include "Node.h"

using namespace std;

void insert (Node* &root, int n);
void read (Node* &root);
void print (Node* root);

int main () {
  cout << "Beginning the Red-Black Tree program." << endl;

  Node* root = new Node();
  bool running = true;

  while (running) {
    // commands
    cout << "Your commands are:" << endl;
    cout << "ADD - add a single node" << endl;
    cout << "READ - read nodes from a file" << endl;
    cout << "PRINT - print the tree" << endl;
    cout << "QUIT - quit the program" << endl << endl;

    string input;
    getline (cin, input); cin.get();

    // do command
    if (input == "ADD") {
      cout << "Number to be added?" << endl;
      int n; cin >> n; cin.get();
      insert (root, n);
      cout << "Done."
    }
    else if (input == "READ") { read (root); }
    else if (input == "PRINT") { print (root); }
    else if (input == "QUIT") {
      cout << "Sorry to see you go." << endl;
      running = false;
    }
    else { cout << "Huh?" << endl; }
    cout << endl;
  }

  return 0;
}

void insert (Node* &root, int n) {
  
  return;
}

void read (Node* &root) {
  // file info
  cout << "Name of file?" << endl;
  string fname;
  getline (cin, fname); cin.get();

  // open file
  ifstream fin (fname);
  cout << "Reading... ";
  int n;

  while (fin >> x) {
    insert (root, n);
  }
  fin.close();
  cout << "Done." << endl;
  
  return;
}

void print (Node* root, int indent) {
  if (cur == NULL) { return; }
  print (cur->getRight(), indent + 1);
  for (int i = 0; i < indent; i++) { cout << "    "; }
  if (cur->getValue() == 0) { cout << endl; }
  else { cout << cur->getValue() << ", " << cur->getColor() << endl; }
  print (cur->getLeft(), indent + 1);
  return;
}
