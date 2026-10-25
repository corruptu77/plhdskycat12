#include <iostream>
#include <string>
using namespace std;

class Person {
    public: string name;
    int age;

    void doGreeting() {
        string yourName;
        
        cout<<"Hello, my name is "<<name<<endl;
        cout<<"I am "<<age<<" years old"<<endl;
        cout<<"What's your name? ";
        cin>>yourName;
        cout<<"Well hello, "<<yourName<<endl;
    }
};

int main() {
    Person visitor;
    visitor.name = "Johnkarr Isenlende";
    visitor.age = 26;

    Person visitor2;
    visitor2.name = "Sytkan L'Vance";
    visitor2.age = 24;

    visitor.doGreeting();
    visitor2.doGreeting();

    return 0;
}