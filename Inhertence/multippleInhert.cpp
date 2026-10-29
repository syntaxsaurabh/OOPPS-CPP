#include <iostream>
using namespace std;

class Cricketer{
    public:
    int runs;
    int wickets;
    int average;
};

class Engineer{
    public:
    int exprience;
    string Domain;      

    

};

class human:public Cricketer, public Engineer{
    public:
    string name;
    int age;
};

int main(){
    human h1;
    h1.name = "Saurabh";
    h1.age = 22;
    h1.runs = 1000;
    h1.wickets = 50;
    h1.average = 45;
    h1.exprience = 2;
    h1.Domain = "C++";

    cout << "Name: " << h1.name << endl;
    cout << "Age: " << h1.age << endl;
    cout << "Runs: " << h1.runs << endl;
    cout << "Wickets: " << h1.wickets << endl;
    cout << "Average: " << h1.average << endl;
    cout << "Experience: " << h1.exprience << endl;
    cout << "Domain: " << h1.Domain << endl;

    return 0;
}