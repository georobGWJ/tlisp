/* Main Process for CLI tlisp */
/* Compile using g++ -std=c++11 -Wall main.cpp -o tlisp */

#include <iostream>
#include <iomanip>
#include <string.h>

/* OSX / Linux Libraries */
// #include <readline.h>
// #include <editline/history.h>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

void remove_whitespace(char* str) {
  /* A small function to remove spaces and tabs from a C-string */
  size_t idx = 0;  // 'Copy to' string index
  size_t jdx = 0;  // 'Copy from' string index

  while((*(str + idx) = *(str + jdx++)) != '\0')
    if (*(str + idx) != ' ' && *(str + idx) != '\t')  // Remove spaces and tabs
      idx++;
  return;
}

int main(int argc, char** argv) {
  /* Very basic REPL */
  const size_t MAX = 2048;
  char input_buffer[MAX];

  cout << "tlisp Version 0.0.0.1" << endl;
  cout << "Press 'CTRL-c' to exit." << endl;

  while (true) {
    /* Prompt line */
    cout << "tlisp >> ";
    cin.get(input_buffer, MAX).get();

    /* REPL Exit check */
    /* TODO: Currently if exit is anywhere in the buffer, the REPL will
             exit. It should only exit if the user enters 'exit' only.
             Need to fix this */
    if (sizeof(strstr(input_buffer, "exit"))) {
      cout << endl << "Have a nice day!" << endl;
      break;
    }

    cout << "You entered: " << input_buffer << endl;
    cout << "Remove the whitespace!" << endl;
    remove_whitespace(input_buffer);
    cout << "This is better: " << input_buffer << endl;
  }
  return 0;
}
