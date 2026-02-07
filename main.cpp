// COMSC-210 | Lab 3A | Christine Susic

#include <iostream>
using namespace std;

struct Restaurant {
    string name;
    string address;
    double ratingl
    int hours;
    int cost;
};

//prototypes
void tempStruct();
void outputStruct();

int main() {
    //calls functions
    
    return 0;
}

void tempStruct() {
    //creates temporary struct
    //receive user input to populate struct
    cout << "What is the Restaurant's name?" << endl;
    cin >> name;
    cout << "What is the Restaurant's address?" << endl;
    cin >> address;
    cout << "What is the Restaurant's rating?" << endl;
    cin >> rating;
    cout << "What are the Restaurant's hours?" << endl;
    cin >> hours;
    cout << "What is the cost of the Restaurant?" << endl;
    cin >> cost;
    //returns struct to main program
}

void outputStruct() {
    //outputs struct data
}