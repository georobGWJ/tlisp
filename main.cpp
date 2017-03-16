/* Main Process for CLI tlisp */
/* Compile using g++ -std=c++11 -Wall main.cpp -o tlisp */

#include <iostream>
#include <string>
#include <iomanip>

/* OSX / Linux Libraries */
// #include <readline.h>
// #include <editline/history.h>

using std::cin;
using std::cout;
using std::endl;
using std::setw;
using std::string;

/* Globals... for now */
string input;

int main(int argc, char** argv) {
  /* Very basic REPL */
  cout << "tlisp Version 0.0.0.1" << endl;
  cout << "Press 'CTRL-c' to exit." << endl;

  while (true) {
    /* Prompt line */
    cout << "tlisp >> ";
    getline(cin,input);

    if (input == "exit") {
      cout << "Have a nice day!";
      break;
    }

    cout << "You entered: " << input << endl;
  }
  return 0;
}
