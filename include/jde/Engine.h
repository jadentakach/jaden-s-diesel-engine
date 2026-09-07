#pragma once
#include <iostream>

class Engine {
private:
    int cylinders_;
public:
    Engine(int cylinders) {
        std::cout << "new engine initialized with " << cylinders << " cylinders" << std::endl;
        cylinders_ = cylinders;
    }

    // TODO: when calculating stroke, use formula:
    /*
    ** stroke = 2 x (deck height - connecting rod length - compression height - piston-to-deck clearance)
    ** deck height              : centerline of the crankshaft's journal to the block's deck surface
    ** connecting rod length    : center of big end to center of small end
    ** compression height       : center of wrist pin hole to crown edge of piston head
    ** piston-to-deck clearance : distance between top of piston and the top of the block
    */
};