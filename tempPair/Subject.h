#pragma once
#include <iostream>

class Subject
{
public:
    std::string subName;
    int rollNo;
    int marks;

public:
    Subject() {}
    Subject(std::string subName, int rollNo, int marks) : subName(subName), rollNo(rollNo), marks(marks) {}
    ~Subject() {}
};