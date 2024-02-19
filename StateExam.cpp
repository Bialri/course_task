#include "StateExam.h"

#include <iostream>
#include <utility>
#include "StateExam.h"


StateExam::StateExam(unsigned new_school_number, std::string new_exam_name, unsigned new_count) {
        school_number = new_school_number;
        exam_name = new_exam_name;
        count = new_count;
    }

StateExam::StateExam(unsigned new_school_number, std::string new_exam_name) : StateExam(new_school_number, new_exam_name, 0) {}

std::ostream &operator<<(std::ostream &stream, const StateExam &state_exam) {
    stream << "SchoolExamObject(" << state_exam.school_number << "," << state_exam.exam_name << "," << state_exam.count
           << ")";
    return stream;
}
