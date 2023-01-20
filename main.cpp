#include <iostream>
using namespace std;
#include <string>

string getPlan() {
        string name;
        cout << "Choose plan " << endl;
        cin >> name;
    while ((name != "silver") && (name != "gold")) {
        cout << "I'm sorry, " << name << " is not a known plan" << endl;
        cout << "Choose plan " << endl;
        cin >> name;
    }
    return name;
}


unsigned getMonth () {
    unsigned num;
    cout << "Enter Your Month: " << endl;
    cin >> num;
    return num;
}

int computeCost(string name, unsigned num) {
    if (name == "silver") {    
        if (num == 1){
            return 90;
            }
        else{
            return 60;
            }
    }
    
    else if (name == "gold") {
        if (num == 1){
            return 90;
        }
        else if (2 <= num  && num <= 6) {
            return 70;
        }
        else{
            return 35;
            }
        }
}

int main() {
    string gp = getPlan();
    unsigned gm = getMonth();
    int cc = computeCost(gp,gm);
    cout << "The cost of your plan is: $" << cc << endl; 

    return 0;
}
