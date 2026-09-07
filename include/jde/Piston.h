#pragma once
#include <jde/Util.h>

class Piston {
public:
    class Head {
    private:
        float diameter_;
        float height_;
    public:
        Head(float diameter, float height) : diameter_(diameter), height_(height) {}
        Head() : diameter_(104.394), height_(50.8) {} // defaults of a 7.3L Powerstroke (millimeters)

        float GetDiameter() { return diameter_; }
        float GetHeight() { return height_; }
    };

    class Rod {
    private:
        float length_;
    public:
        Rod(float length) : length_(length) {}
        Rod() : length_(181.1) {}

        float GetLength() { return length_; }
    };
private:
    float stroke_{0.0f};
    Head* head_;
    Rod* rod_;
public:
    Piston(Head* head, Rod* rod) : head_(head), rod_(rod) {}
    Piston(Head* head) {
        head_ = head;
        rod_ = new Rod;
    }
    
    Piston(Rod* rod) {
        head_ = new Head;
        rod_ = rod;
    }

    Piston() {
        head_ = new Head;
        rod_ = new Rod;
    }

    ~Piston() {
        delete head_;
        delete rod_;
    }

    void SetStroke(float stroke) {
        stroke_ = stroke;
    }

    float GetStroke() { return stroke_; }
    float GetDisplacement() {
        float radius = head_->GetDiameter() / 2;
        return (pi * radius * radius * stroke_);
    }
    Head* GetHead() { return head_; }
    Rod* GetRod() { return rod_; }
};