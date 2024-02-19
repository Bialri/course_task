#include "stack.h"
#include "StateExam.h"

Stack::Stack() {
    size = 0;
}

Stack::~Stack(){
    while(size)
        this->pop();
}

Stack::Stack(const Stack &old_stack) {
    stack = old_stack.stack;
    size = old_stack.size;
}

void Stack::push(StateExam exam) {
    stack.push_back(exam);
    size++;
}

unsigned int Stack::get_size() {
    return size;
}

StateExam Stack::get(unsigned int index) {
    StateExam exam = stack[index];
    return exam;
}

StateExam Stack::pop() {
    StateExam exam = stack[size-1];
    stack.pop_back();
    size--;
    return exam;
}

int Stack::find(StateExam exam){
    for (int i = 0; i < size-1; i++)
        if( this->get(i) == exam){
            return i;
        }
    return -1;
}


std::ostream &operator<<(std::ostream &stream, Stack &stack){
    unsigned stack_size = stack.get_size();
    for(int i = stack_size-1; i >= 0; i--){
        stream << stack.get(i);
        if (i) stream << " <- ";
    }
    return stream;
}
