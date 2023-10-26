// Professor.hpp
#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include <vector>


class Professor : public Staff {
private:
	Course* _currentCourse;

public:
	Professor(const std::string& name, int professorID) : Staff(name, professorID) {}
	void assignCourse(Course* p_course);
	void doClass();
	void closeCourse();
	int professorID;

};

#endif
