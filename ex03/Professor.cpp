#include "Professor.hpp"
#include "Staff.hpp"  
#include "Course.hpp" 

void Professor::assignCourse(Course* p_course) {
    _currentCourse = p_course;

}

void Professor::doClass() {
    if (_currentCourse) {
    } else {
    }
}

void Professor::closeCourse() {
    if (_currentCourse) {
        _currentCourse = NULL;
    } else {

    }
}
