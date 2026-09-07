#pragma once
#include <jde/Piston.h>

class Cylinder {
private:
    Piston* piston_;
    float bore_;
    float stroke_;

public:
    Cylinder() {
        piston_ = new Piston;
    }

    Cylinder(float bore, float stroke) {
        bore_ = bore;
        stroke_ = stroke;
        
        piston_ = new Piston;
        piston_->SetStroke(stroke_);
    }
};