#include <iostream>
using namespace std;

class Cricketer{
    public:

    string name;
    int runs;
    int jeresyNo;
    //learning about this keyword
    
    Cricketer(string name,int runs,int jeresyNo){
       this->name=name;
       this->runs=runs;
       this->jeresyNo=jeresyNo;

    }
};


int main(){
    Cricketer c1("Virat Kohli",25000,17);
    Cricketer c2("Rohit Sharma",18000,25);

    cout<<c1.name<<" "<<c1.runs<<" "<<c1.jeresyNo<<endl;

    cout<<c2.name<<" "<<c2.runs<<" "<<c2.jeresyNo<<endl;


    return 0;
}