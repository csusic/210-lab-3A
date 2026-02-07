// COMSC-210 | Lab 3A | Christine Susic

#include <iostream>
using namespace std;

struct Restaurant {
    string name;
    string address;
    double rating;
    int hours;
    int cost;
};

//prototypes
Restaurant tempStruct();
void outputStruct();

int main() {
    //calls functions
    tempStruct();
    
    return 0;
}

Restaurant tempStruct() {
    //creates temporary struct
    Restaurant t;
    //receive user input to populate struct
    cout << "What is the Restaurant's name?" << endl;
    getline(cin, t.name);
    cout << "What is the Restaurant's address?" << endl;
    getline(cin, t.address);
    cout << "What is the Restaurant's rating?" << endl;
    cin >> t.rating;
    cout << "What are the Restaurant's hours?" << endl;
    cin >> t.hours;
    cout << "What is the cost of the Restaurant?" << endl;
    cin >> t.cost;
    //returns struct to main program
    return t; 
}

void outputStruct() {
    //outputs struct data
}
