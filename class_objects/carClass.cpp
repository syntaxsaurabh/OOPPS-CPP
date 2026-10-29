#include <iostream>

using namespace std;

class Car{
    public:
    string name;
    int price;
    int seates;
    string type;
    string color;
    };
    void print(Car c){//pasing function in objects

        cout<<c.name<<" "<<c.price<<" "<<c.seates<<" "<<c.type<<" "<<c.color<<endl;
    };

    void change(Car &c){//pasing function in objects
        
      c.name = "BMW"; 

    }
int main(){

    
   

    Car c1;
    c1.name = "Toyota";
    c1.price = 2000000;
    c1.seates = 5;
    c1.type = "Sedan";
    c1.color = "Blue";

    Car c2;
    c2.name = "Honda";
    c2.price = 1800000; 
    c2.seates = 5;
    c2.type = "SUV";
    c2.color = "Red";

     Car c3;
    c3.name = "swift";
    c3.price = 700000; 
    c3.seates = 5;
    c3.type = "sedan";
    c3.color = "white";

    print(c1);
    change(c1); 
    print(c1);
    print(c2);
    print(c3);

    

    return 0;
}