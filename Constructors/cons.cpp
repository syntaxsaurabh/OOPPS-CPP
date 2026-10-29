#include <iostream>

using namespace std;

class Students{
    public:
    string name;
    int rollNo;
    float gpa;
        
    //here we are going to learn about constructors
    
    Students(string s,int r,float g){
        name=s;
        rollNo=r;
        gpa=g;
    }
};

int main() {
    Students s1("Saurabh Singh",63,7.5);
    Students s2("Hello",34,8.2);

    cout<<s2.name<<" "<<s2.rollNo<<" "<<s2.gpa<<endl;
    cout<<s1.name<<" "<<s1.rollNo<<" "<<s1.gpa<<endl;

    return 0;
}