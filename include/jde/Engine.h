#pragma once
#include <iostream>
#include <vector>
#include <jde/Cylinder.h>

class Engine {
private:
    std::vector<Cylinder*> cylinders_;
    int cylinder_count_;
public:
    Engine(int cylinders) {
        std::cout << "new engine initialized with " << cylinders << " cylinders" << std::endl;
        cylinder_count_ = cylinders;

        for (int i = 0; i < cylinder_count_; i++) {
            cylinders_.push_back(new Cylinder);
        }
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