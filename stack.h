#pragma once
#include "StateExam.h"
#include <iostream>
#include <vector>

#ifndef STACK_H
#define STACK_H


class Stack {
    std::vector<StateExam> stack;
    unsigned size;
public:

    Stack();

    ~Stack();

    Stack(const Stack &stack);

    void push(StateExam exam);

    unsigned get_size();

    StateExam get(unsigned index);

    StateExam pop();

    int find(StateExam exam);


};

std::ostream &operator<<(std::ostream &stream, Stack &stack);

#endif // STACK_H
