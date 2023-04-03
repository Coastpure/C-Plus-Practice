#include <iostream>
using namespace std;

int main()
{
    float math, physics, chemistry, average_score;

    math = 94;
    physics = 85;
    chemistry = 87;

    average_score =(math +physics + chemistry)/3;

    cout << "Your Math score is " << math <<endl;
    cout << "Your physics score is " << physics <<endl;
    cout << "And your chemistry score is " <<chemistry <<endl;
    cout << "Your average score is " <<average_score;

    return 0;
}