#pragma once
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class List {
    public:
        void insert(int);
        int & operator [](int);
        void print(string) const;
        List filter(function<bool(int)>);
        void print() const;
    private:
        vector<int> _elems;
};