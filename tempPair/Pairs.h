#pragma once
#include <iostream>
#include <Algorithm>
#include "Subject.h"


template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair() : first(), second() {}

    Pair(const T1& f, const T2& s) : first(f), second(s) {}

    T1 getFirst() const { return first; }
    T2 getSecond() const { return second; }

    void setFirst(const T1& f) { first = f; }
    void setSecond(const T2& s) { second = s; }


    void display() const {
        std::cout << "(" << first << ", " << second << ")\n";
    }


    bool operator==(const Pair& other)
    {
		return (first == other.first) && (second == other.second);
    }


    bool operator!=(const Pair& other)
    {
		return !(*this == other);
    }

    void swap(Pair& a, Pair& b)
    {
        T1 tempFirst = a.getFirst();
        T2 tempSecond = a.getSecond();
        a.setFirst(b.getFirst());
        a.setSecond(b.getSecond());
        b.setFirst(tempFirst);
        b.setSecond(tempSecond);

        //std::swap(a.first, b.first);
        //std::swap(a.second, b.second);
    }

};