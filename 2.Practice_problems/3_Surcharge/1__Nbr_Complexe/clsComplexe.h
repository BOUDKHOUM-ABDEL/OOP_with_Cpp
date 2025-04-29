#pragma once
#include <iostream>

using namespace std;

class clscomplexe {

private:
    float _a;
    float _b;
    int count = 0;

public:

    clscomplexe() {
        _a = 0;
        _b = 0;
        count++;
    }
    clscomplexe(float a, float b) {
        _a = a;
        _b = b;
        count++;
    }
    clscomplexe(const clscomplexe& c) {
        _a = c._a;
        _b = c._b;
        count++;
    }
    ~clscomplexe();
};


