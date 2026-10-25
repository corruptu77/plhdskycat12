#include <iostream>
#include <string>
using namespace std;
#include <stdio.h>
#include "test.flow"

int main(int argc, char *argv[]) {
    cout<<"FLOW output"<<endl;
  if (argc>1) {
    string getNew = tokenise(argc[]);
    int run = parse(getNew);
  }

  return 0;
}



string tokenise(string code) {
    return code;
}

int parse(string code) {
   return -1; 
}

class data {

    public:
        string name;
        string held_data = {};
        void deleteThis() {
            delete this;
        }

};

class function {
    
};