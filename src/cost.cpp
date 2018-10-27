#include <functional>
#include <iostream>
#include "cost.h"
#include "cmath"


using namespace std;

float inefficiency_cost(int target_speed, int intended_lane, int final_lane, vector<int> lane_speeds) {
    /*
    Cost becomes higher for trajectories with intended lane and final lane that have traffic slower than target_speed.
    */
    return (2.f * target_speed - lane_speeds[intended_lane] - lane_speeds[final_lane]) / float(target_speed);
}