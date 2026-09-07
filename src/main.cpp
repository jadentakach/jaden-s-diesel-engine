#include <iostream>
#include <jde/Engine.h>
#include <jde/Piston.h>

int main() {
    Engine(4);
    Piston* piston = new Piston;
    std::cout << "the diameter of a 7.3 powerstroke's cylinder piston head is " << piston->GetHead()->GetDiameter()
              << " and the height of it is " << piston->GetHead()->GetHeight() << std::endl;
    
    return 0;
}