#include <iostream>
#include <cstring>
#include "stack.h"
/*
 * A simple stack program as a c++ exercise
 */
int stackPush(stack* s, char* str);

using namespace std;

int main() {

    cout << "Program starts" << endl;
    class stack my_stack;

    cout << "stack declared, size is: " << my_stack.size() << endl;
    stackPush(&my_stack, (char*)"ABC");
    stackPush(&my_stack, (char*)"BCD");
    stackPush(&my_stack, (char*)"CDE");

    if (3 != my_stack.size()){
        cout << "bad stack size:" << my_stack.size()<< endl;
        return (1);
    }

    while (!my_stack.is_empty()) {
        char* string = my_stack.pop();
        cout << "Popped: " << string << endl;
        delete string;
    }

    return (0);
}

int stackPush(stack* s, char* str) {
    if (s == NULL) {
        return (0);
    }

    char* string = new char[strlen(str)];
    strcpy(string, str);
    s->push(string);
    return (1);
}

