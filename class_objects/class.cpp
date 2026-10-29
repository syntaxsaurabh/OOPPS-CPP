
#include <iostream>
using namespace std;

class Student{//class ek blueprint hay jisme hum data members aur member functions ko define karte hay

    //object banane ke liye class ka use karte hay and ye ek instance hota hay jo class ka ek copy hota hay

    //Student is new datatype jo maine khud banaya hay
    public:
    string name;
    int rollNo;
    float gpa;



};

int main(){
    Student x1;
    x1.name = "Saurabh";
    x1.rollNo = 63;
    x1.gpa = 8.5;

    Student x2;
    x2.name = "Shashank";
    x2.rollNo = 64;
    x2.gpa = 8.2;

    cout<<x1.name<<" "<<x1.rollNo<<" "<<x1.gpa<<endl;
    cout<<x2.name<<" "<<x2.rollNo<<" "<<x2.gpa<<endl;

    return 0;

}
