#include <cstring>
#include <iostream>
#include "stack.h"
/*
 * A set of routines to implement a simple string stack.
 */

stack::stack(void) {
    count = 0;
}

int stack::size() {
    return count;
}

int stack::is_empty() {
    if (0 == count){
        return (1);
    } else {
        return (0);
    }
}

int stack::is_full() {
    if (count == STACK_SIZE){
        if (DEBUG) std::cout << "1: count, STACKSIZE: " << count << ", " << STACK_SIZE << std::endl;
        return (1);
    } else {
        if (DEBUG) std::cout << "0: count, STACKSIZE: " << count << ", " << STACK_SIZE << std::endl;
        return (0);
    }
}

int stack::push(const char* string) {
    if (is_full()) {
        return (0);
    }
    strings[count] = (char*) string;
    if (DEBUG) std::cout << "strings[count]: " << strings[count]<< std::endl;
    if (DEBUG) std::cout << "count before push: " << count << std::endl;
    ++count;
    if (DEBUG) std::cout << "count after push: " << count << std::endl;
    if (DEBUG) print_stack();
    return (1);
}

void stack::print_stack() {
    std::cout << "print_stack entered..." << std::endl;
    for (int i = 0; i < count; i++){
        std::cout << "print_stack: " << i << ": "<< (char*)strings[i] << std::endl;
    }
}

char* stack::pop() {
    if (DEBUG) print_stack();
    if (is_empty()){
        return (0);
    }
    if (DEBUG) std::cout << "count before pop: " << count << std::endl;
    --count;
    char* string = strings[count];
    if (DEBUG) std::cout << "strings[count]: " << strings[count]<< std::endl;
    return (string);
}

