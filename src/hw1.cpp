#include <iostream>
using namespace std;

int massCalc(int massSpaceShip) {
    int massFuel = (massSpaceShip / 5) - 22;
    if(massFuel < 0) {
        return massSpaceShip;
    }
    return massSpaceShip + massFuel;
}

int main() {
    int mass;
    cout << "Enter mass of SpaceShip [-1 to quit]: ";
    cin >> mass;
    while(mass != -1) {
        int totalFuel = massCalc(mass);
        cout << "Total fuel required to launch: " << totalFuel << endl;
        cout << "Enter mass of SpaceShip [-1 to quit]: ";
        cin >> mass;
    }
    system("PAUSE");
    return 0; 
}