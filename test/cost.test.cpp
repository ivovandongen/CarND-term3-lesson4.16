#include <test.hpp>

#include <cost.h>

#include <vector>

TEST(Core, BasicTest) {
    //Target speed of our vehicle
    int target_speed = 10;

    //Lane speeds for each lane
    std::vector<int> lane_speeds = {6, 7, 8, 9};
    
    ASSERT_NEAR(.2, inefficiency_cost(target_speed, 3, 3, lane_speeds), 0.001);
    ASSERT_NEAR(.3, inefficiency_cost(target_speed, 2, 3, lane_speeds), 0.001);
    ASSERT_NEAR(.4, inefficiency_cost(target_speed, 2, 2, lane_speeds), 0.001);
    ASSERT_NEAR(.5, inefficiency_cost(target_speed, 1, 2, lane_speeds), 0.001);
    ASSERT_NEAR(.6, inefficiency_cost(target_speed, 1, 1, lane_speeds), 0.001);
    ASSERT_NEAR(.7, inefficiency_cost(target_speed, 0, 1, lane_speeds), 0.001);
    ASSERT_NEAR(.8, inefficiency_cost(target_speed, 0, 0, lane_speeds), 0.001);
}