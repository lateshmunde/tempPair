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

   bool operator==(const Subject& s1)
    {
        return (marks == s1.marks) && (rollNo == s1.rollNo) && (subName == s1.subName);

    }
};