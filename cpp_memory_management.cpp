#include <iostream>

class Robot {
public:
    Robot(std::string&& n) : name(n) {
        std::cout << "Robot " << name << " created.\n";
    }
    ~Robot() {
        std::cout << "Robot " << name << " destroyed.\n";
    }
    void greet() {
        std::cout << "Hello, I am " << name << "!\n";
    }
private:
    std::string name;
};

int main() {
    Robot* r1 = new Robot("R2D2");
    r1->greet();
    
    delete r1;
    return 0;
}
