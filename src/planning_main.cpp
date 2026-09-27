#include <iostream>
#include "process.h"
using std::cout, std::endl;

int main()
{
    cout << "planning start" << endl;
    Process p;
    p.planProcess();
    cout << "planning end" << endl;
}