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
void outputStruct(Restaurant);

int main() {
    //calls functions
    Restaurant r = tempStruct();
    outputStruct(r);
    Restaurant s = tempStruct();
    outputStruct(s);
    Restaurant u = tempStruct();
    outputStruct(u);
    Restaurant v = tempStruct();
    outputStruct(v);
   
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
    cin.ignore();
    cout << endl;
    //returns struct to main program
    return t; 
}

void outputStruct(Restaurant o) {
    //outputs structs data
    cout << o.name << endl;
    cout << o.address << endl;
    cout << o.rating << endl;
    cout << o.hours << endl;
    cout << o.cost << endl << endl;
}
