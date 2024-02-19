
#include <iostream>

#ifndef STATEEXAM_H
#define STATEEXAM_H


class StateExam{
public:
    unsigned school_number;
    std::string exam_name;
    unsigned count;

    StateExam(unsigned new_school_number, std::string new_exam_name, unsigned new_count);

    StateExam(unsigned new_school_number, std::string new_exam_name);

    bool operator == (const StateExam& counter) const = default;
    bool operator != (const StateExam& counter) const = default;
};

std::ostream& operator<<(std::ostream& stream, const StateExam& state_exam);

#endif // STATEEXAM_H
