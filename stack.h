/*
 * A set of routines to implement a simple string stack.
 */

const int STACK_SIZE = 100;

class stack {
    private:
        int DEBUG = 0;
        int count;
        char* strings[STACK_SIZE];
        void print_stack();
    public:
        stack(void);

        int push(const char* string);

        char* pop();

        int size();

        int is_full();

        int is_empty();

};

