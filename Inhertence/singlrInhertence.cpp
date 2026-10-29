#include <iostream>

using namespace std;


class Scooty{//parent class

    public:
    int topSpeed;
    float milage;
    private:
    int price;
    int space;


};

class Bike : public Scooty{ //child/derived class
    public:
    int gears;
    private:
    int weight;
    int price;
};




int main(){

    Bike b1;
    b1.topSpeed = 120;
    b1.milage = 45.5;
    b1.gears = 5;

    return 0;
}