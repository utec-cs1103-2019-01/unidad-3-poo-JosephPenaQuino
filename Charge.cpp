#include "Charge.h"

Charge::Charge(Position position, int charge) : position{position}, charge{charge} {}

double Charge::calculate_distance(Position target)
{
    double cof1 = pow(target.x - position.x, 2);
    double cof2 = pow(target.y - position.y, 2);
    double distance = sqrt(cof1 + cof2);
    return distance;
}

double Charge::get_potential_on(Position target)
{

    return k*charge/calculate_distance(target);
}

bool double_equals(double a, double b, double epsilon = 0.001)
{
    return std::abs(a - b) < epsilon;
}