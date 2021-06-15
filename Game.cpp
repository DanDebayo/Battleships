#include <iostream>
using namespace std;
#include "Game.h"

void shiplocation::Setclocation(string cloc) {
    carrierlocation = cloc;
}
void shiplocation::Setcdirection(string cdir) {
    carrierdirection = cdir;
}
void shiplocation::SetBlocation(string bloc){
    battleshiplocation = bloc;
}
void shiplocation::SetBdirection(string bdir) {
    battleshipdirection = bdir;
}
void shiplocation::Setcrlocation(string crloc) {
    cruiserlocation = crloc;
}
void shiplocation::Setcrdirection(string crdir) {
    cruiserdirection = crdir;
}
void shiplocation::Setsublocation(string subloc) {
    submarinelocation = subloc;
}
void shiplocation::Setsubdirection(string subdir) {
    submarinedirection = subdir;
}
void shiplocation::Setdeslocation(string desloc) {
    destroyerlocation = desloc;
}
void shiplocation::Setdesdirection(string desdir) {
    destroyerdirection = desdir;
}

void computer::clearcomp() {
    for(int i = 0; i < 10; i++ ){
        for(int j = 0; j < 10; j++){
            comboard[i][j] = '~';
        }
    }
}                                                    // THIS CLEARS THE FIRST COMPUTER BOARD

void computer::clearcom(){
    for (int i = 0; i < 10 ; i++){
        for (int j = 0; j < 10 ; j++){
            comptboard[i][j] = ' ';
        }
    }
}                                                     // THIS CLEARS THE SECOND COMPUTER BOARD

int computer::Checkwin() {
    int n = 0;
    for(int i = 0; i < 10; i++ ) {
        for (int j = 0; j < 10; j++) {
            if(comptboard[i][j] == hit){
                n++;
            }

        }
        if(n == 5){
            cout << "Player Wins" << endl;
        }
    }
    return n;
}                                                                  // THIS CHECKS THE WIN

int computer::playerattack() {
    cout << "Please select the location you want to attack" << endl;
    cin >> attacklocation;
    if(attacklocation == "A1"){
        if (comboard[0][0] == '~'){
            comptboard[0][0] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[0][0] == 'E'){
            comptboard[0][0] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[0][0] != 'E' || comboard[0][0] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "A2"){
        if (comboard[1][0] == '~'){
            comptboard[1][0] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[1][0] == 'E'){
            comptboard[1][0] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[1][0] != 'E' || comboard[1][0] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "A3"){
        if (comboard[2][0] == '~'){
            comptboard[2][0] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[2][0] == 'E'){
            comptboard[2][0] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[2][0] != 'E' || comboard[2][0] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "A4"){
        if (comboard[3][0] == '~'){
            comptboard[3][0] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[3][0] == 'E'){
            comptboard[3][0] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[3][0] != 'E' || comboard[3][0] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "A5"){
        if (comboard[4][0] == '~'){
            comptboard[4][0] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[4][0] == 'E'){
            comptboard[4][0] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[4][0] != 'E' || comboard[4][0] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "A6"){
        if (comboard[5][0] == '~'){
            comptboard[5][0] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[5][0] == 'E'){
            comptboard[5][0] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[5][0] != 'E' || comboard[5][0] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "A7"){
        if (comboard[6][0] == '~'){
            comptboard[6][0] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[6][0] == 'E'){
            comptboard[6][0] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[6][0] != 'E' || comboard[6][0] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "A8"){
        if (comboard[7][0] == '~'){
            comptboard[7][0] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[7][0] == 'E'){
            comptboard[7][0] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[7][0] != 'E' || comboard[7][0] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "A9"){
        if (comboard[8][0] == '~'){
            comptboard[8][0] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[8][0] == 'E'){
            comptboard[8][0] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[8][0] != 'E' || comboard[8][0] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "A10"){
        if (comboard[9][0] == '~'){
            comptboard[9][0] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[9][0] == 'E'){
            comptboard[9][0] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[9][0] != 'E' || comboard[9][0] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "B1"){
        if (comboard[0][1] == '~'){
            comptboard[0][1] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[0][1] == 'E'){
            comptboard[0][1] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[0][1] != 'E' || comboard[0][1] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "B2"){
        if (comboard[1][1] == '~'){
            comptboard[1][1] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[1][1] == 'E'){
            comptboard[1][1] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[1][1] != 'E' || comboard[1][1] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "B3"){
        if (comboard[2][1] == '~'){
            comptboard[2][1] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[2][1] == 'E'){
            comptboard[2][1] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[2][1] != 'E' || comboard[2][1] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "B4"){
        if (comboard[3][1] == '~'){
            comptboard[3][1] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[3][1] == 'E'){
            comptboard[3][1] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[3][1] != 'E' || comboard[3][1] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "B5"){
        if (comboard[4][1] == '~'){
            comptboard[4][1] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[4][1] == 'E'){
            comptboard[4][1] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[4][1] != 'E' || comboard[4][1] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "B6"){
        if (comboard[5][1] == '~'){
            comptboard[5][1] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[5][1] == 'E'){
            comptboard[5][1] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[5][1] != 'E' || comboard[5][1] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "B7"){
        if (comboard[6][1] == '~'){
            comptboard[6][1] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[6][1] == 'E'){
            comptboard[6][1] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[6][1] != 'E' || comboard[6][1] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "B8"){
        if (comboard[7][1] == '~'){
            comptboard[7][1] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[7][1] == 'E'){
            comptboard[7][1] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[7][1] != 'E' || comboard[7][1] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "B9"){
        if (comboard[8][1] == '~'){
            comptboard[8][1] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[8][1] == 'E'){
            comptboard[8][1] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[8][1] != 'E' || comboard[8][1] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "B10"){
        if (comboard[9][1] == '~'){
            comptboard[9][1] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[9][1] == 'E'){
            comptboard[9][1] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[9][1] != 'E' || comboard[9][1] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "C1"){
        if (comboard[0][2] == '~'){
            comptboard[0][2] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[0][2] == 'E'){
            comptboard[0][2] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[0][2] != 'E' || comboard[0][2] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "C2"){
        if (comboard[1][2] == '~'){
            comptboard[1][2] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[1][2] == 'E'){
            comptboard[1][2] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[1][2] != 'E' || comboard[1][2] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "C3"){
        if (comboard[2][2] == '~'){
            comptboard[2][2] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[2][2] == 'E'){
            comptboard[2][2] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[2][2] != 'E' || comboard[2][2] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "C4"){
        if (comboard[3][2] == '~'){
            comptboard[3][2] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[3][2] == 'E'){
            comptboard[3][2] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[3][2] != 'E' || comboard[3][2] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "C5"){
        if (comboard[4][2] == '~'){
            comptboard[4][2] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[4][2] == 'E'){
            comptboard[4][2] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[4][2] != 'E' || comboard[4][2] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "C6"){
        if (comboard[5][2] == '~'){
            comptboard[5][2] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[5][2] == 'E'){
            comptboard[5][2] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[5][2] != 'E' || comboard[5][2] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "C7"){
        if (comboard[6][2] == '~'){
            comptboard[6][2] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[6][2] == 'E'){
            comptboard[6][2] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[6][2] != 'E' || comboard[6][2] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "C8"){
        if (comboard[7][2] == '~'){
            comptboard[7][2] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[7][2] == 'E'){
            comptboard[7][2] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[7][2] != 'E' || comboard[7][2] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "C9"){
        if (comboard[8][2] == '~'){
            comptboard[8][2] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[8][2] == 'E'){
            comptboard[8][2] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[8][0] != 'E' || comboard[8][2] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "C10"){
        if (comboard[9][2] == '~'){
            comptboard[9][2] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[9][2] == 'E'){
            comptboard[9][2] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[9][2] != 'E' || comboard[9][2] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "D1"){
        if (comboard[0][3] == '~'){
            comptboard[0][3] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[0][3] == 'E'){
            comptboard[0][3] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[0][3] != 'E' || comboard[0][3] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "D2"){
        if (comboard[1][3] == '~'){
            comptboard[1][3] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[1][3] == 'E'){
            comptboard[1][3] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[1][3] != 'E' || comboard[1][3] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "D3"){
        if (comboard[2][3] == '~'){
            comptboard[2][3] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[2][3] == 'E'){
            comptboard[2][3] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[2][3] != 'E' || comboard[2][3] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "D4"){
        if (comboard[3][3] == '~'){
            comptboard[3][3] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[3][3] == 'E'){
            comptboard[3][3] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[3][3] != 'E' || comboard[3][3] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "D5"){
        if (comboard[4][3] == '~'){
            comptboard[4][3] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[4][3] == 'E'){
            comptboard[4][3] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[4][3] != 'E' || comboard[4][3] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "D6"){
        if (comboard[5][3] == '~'){
            comptboard[5][3] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[5][3] == 'E'){
            comptboard[5][3] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[5][3] != 'E' || comboard[5][3] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "D7"){
        if (comboard[6][3] == '~'){
            comptboard[6][3] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[6][3] == 'E'){
            comptboard[6][3] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[6][3] != 'E' || comboard[6][3] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "D8"){
        if (comboard[7][3] == '~'){
            comptboard[7][3] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[7][3] == 'E'){
            comptboard[7][3] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[7][3] != 'E' || comboard[7][3] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "D9"){
        if (comboard[8][3] == '~'){
            comptboard[8][3] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[8][3] == 'E'){
            comptboard[8][3] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[8][3] != 'E' || comboard[8][3] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "D10"){
        if (comboard[9][3] == '~'){
            comptboard[9][3] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[9][3] == 'E'){
            comptboard[9][3] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[9][3] != 'E' || comboard[9][3] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "E1"){
        if (comboard[0][4] == '~'){
            comptboard[0][4] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[0][4] == 'E'){
            comptboard[0][4] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[0][4] != 'E' || comboard[0][4] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "E2"){
        if (comboard[1][4] == '~'){
            comptboard[1][4] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[1][4] == 'E'){
            comptboard[1][4] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[1][4] != 'E' || comboard[1][4] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "E3"){
        if (comboard[2][4] == '~'){
            comptboard[2][4] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[2][4] == 'E'){
            comptboard[2][4] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[2][4] != 'E' || comboard[2][4] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "E4"){
        if (comboard[3][4] == '~'){
            comptboard[3][4] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[3][4] == 'E'){
            comptboard[3][4] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[3][4] != 'E' || comboard[3][4] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "E5"){
        if (comboard[4][4] == '~'){
            comptboard[4][4] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[4][4] == 'E'){
            comptboard[4][4] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[4][4] != 'E' || comboard[4][4] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "E6"){
        if (comboard[5][4] == '~'){
            comptboard[5][4] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[5][4] == 'E'){
            comptboard[5][4] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[5][4] != 'E' || comboard[5][4] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "E7"){
        if (comboard[6][4] == '~'){
            comptboard[6][4] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[6][4] == 'E'){
            comptboard[6][4] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[6][4] != 'E' || comboard[6][4] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "E8"){
        if (comboard[7][5] == '~'){
            comptboard[7][4] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[7][4] == 'E'){
            comptboard[7][4] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[7][4] != 'E' || comboard[7][4] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "E9"){
        if (comboard[8][4] == '~'){
            comptboard[8][4] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[8][4] == 'E'){
            comptboard[8][4] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[8][4] != 'E' || comboard[8][4] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "E10"){
        if (comboard[9][4] == '~'){
            comptboard[9][4] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[9][4] == 'E'){
            comptboard[9][4] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[9][4] != 'E' || comboard[9][4] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "F1"){
        if (comboard[0][5] == '~'){
            comptboard[0][5] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[0][5] == 'E'){
            comptboard[0][5] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[0][5] != 'E' || comboard[0][5] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "F2"){
        if (comboard[1][5] == '~'){
            comptboard[1][5] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[1][5] == 'E'){
            comptboard[1][5] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[1][5] != 'E' || comboard[1][5] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "F3"){
        if (comboard[2][5] == '~'){
            comptboard[2][5] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[2][5] == 'E'){
            comptboard[2][5] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[2][5] != 'E' || comboard[2][5] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "F4"){
        if (comboard[3][5] == '~'){
            comptboard[3][5] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[3][5] == 'E'){
            comptboard[3][5] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[3][5] != 'E' || comboard[3][5] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "F5"){
        if (comboard[4][5] == '~'){
            comptboard[4][5] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[4][5] == 'E'){
            comptboard[4][5] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[4][5] != 'E' || comboard[4][5] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "F6"){
        if (comboard[5][5] == '~'){
            comptboard[5][5] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[5][5] == 'E'){
            comptboard[5][5] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[5][5] != 'E' || comboard[5][5] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "F7"){
        if (comboard[6][5] == '~'){
            comptboard[6][5] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[6][5] == 'E'){
            comptboard[6][5] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[6][5] != 'E' || comboard[6][5] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "F8"){
        if (comboard[7][5] == '~'){
            comptboard[7][5] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[7][5] == 'E'){
            comptboard[7][5] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[7][5] != 'E' || comboard[7][5] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "F9"){
        if (comboard[8][5] == '~'){
            comptboard[8][5] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[8][5] == 'E'){
            comptboard[8][5] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[8][5] != 'E' || comboard[8][5] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "F10"){
        if (comboard[9][5] == '~'){
            comptboard[9][5] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[9][5] == 'E'){
            comptboard[9][5] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[9][5] != 'E' || comboard[9][5] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "G1"){
        if (comboard[0][6] == '~'){
            comptboard[0][6] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[0][6] == 'E'){
            comptboard[0][6] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[0][6] != 'E' || comboard[0][6] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "G2"){
        if (comboard[1][6] == '~'){
            comptboard[1][6] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[1][6] == 'E'){
            comptboard[1][6] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[1][6] != 'E' || comboard[1][6] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "G3"){
        if (comboard[2][6] == '~'){
            comptboard[2][6] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[2][6] == 'E'){
            comptboard[2][6] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[2][6] != 'E' || comboard[2][6] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "G4"){
        if (comboard[3][6] == '~'){
            comptboard[3][6] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[3][6] == 'E'){
            comptboard[3][6] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[3][6] != 'E' || comboard[3][6] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "G5"){
        if (comboard[4][6] == '~'){
            comptboard[4][6] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[4][6] == 'E'){
            comptboard[4][6] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[4][6] != 'E' || comboard[4][6] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "G6"){
        if (comboard[5][6] == '~'){
            comptboard[5][6] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[5][6] == 'E'){
            comptboard[5][6] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[5][6] != 'E' || comboard[5][6] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "G7"){
        if (comboard[6][6] == '~'){
            comptboard[6][6] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[6][6] == 'E'){
            comptboard[6][6] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[6][6] != 'E' || comboard[6][6] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "G8"){
        if (comboard[7][6] == '~'){
            comptboard[7][6] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[7][6] == 'E'){
            comptboard[7][6] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[7][6] != 'E' || comboard[7][6] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "G9"){
        if (comboard[8][6] == '~'){
            comptboard[8][6] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[8][6] == 'E'){
            comptboard[8][6] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[8][6] != 'E' || comboard[8][6] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "G10"){
        if (comboard[9][6] == '~'){
            comptboard[9][6] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[9][6] == 'E'){
            comptboard[9][6] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[9][6] != 'E' || comboard[9][6] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "H1"){
        if (comboard[0][7] == '~'){
            comptboard[0][7] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[0][7] == 'E'){
            comptboard[0][7] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[0][7] != 'E' || comboard[0][7] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "H2"){
        if (comboard[1][7] == '~'){
            comptboard[1][7] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[1][7] == 'E'){
            comptboard[1][7] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[1][7] != 'E' || comboard[1][7] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "H3"){
        if (comboard[2][7] == '~'){
            comptboard[2][7] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[2][7] == 'E'){
            comptboard[2][7] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[2][7] != 'E' || comboard[2][7] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "H4"){
        if (comboard[3][7] == '~'){
            comptboard[3][7] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[3][7] == 'E'){
            comptboard[3][7] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[3][7] != 'E' || comboard[3][7] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "H5"){
        if (comboard[4][7] == '~'){
            comptboard[4][7] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[4][7] == 'E'){
            comptboard[4][7] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[4][7] != 'E' || comboard[4][7] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "H6"){
        if (comboard[5][7] == '~'){
            comptboard[5][7] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[5][7] == 'E'){
            comptboard[5][7] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[5][7] != 'E' || comboard[5][7] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "H7"){
        if (comboard[6][7] == '~'){
            comptboard[6][7] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[6][7] == 'E'){
            comptboard[6][7] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[6][7] != 'E' || comboard[6][7] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "H8"){
        if (comboard[7][7] == '~'){
            comptboard[7][7] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[7][7] == 'E'){
            comptboard[7][7] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[7][7] != 'E' || comboard[7][7] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "H9"){
        if (comboard[8][7] == '~'){
            comptboard[8][7] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[8][7] == 'E'){
            comptboard[8][7] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[8][7] != 'E' || comboard[8][7] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "H10"){
        if (comboard[9][7] == '~'){
            comptboard[9][7] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[9][7] == 'E'){
            comptboard[9][7] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[9][7] != 'E' || comboard[9][7] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "I1"){
        if (comboard[0][8] == '~'){
            comptboard[0][8] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[0][8] == 'E'){
            comptboard[0][8] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[0][8] != 'E' || comboard[0][8] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "I2"){
        if (comboard[1][8] == '~'){
            comptboard[1][8] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[1][8] == 'E'){
            comptboard[1][8] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[1][8] != 'E' || comboard[1][8] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "I3"){
        if (comboard[2][8] == '~'){
            comptboard[2][8] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[2][8] == 'E'){
            comptboard[2][8] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[2][8] != 'E' || comboard[2][8] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "I4"){
        if (comboard[3][8] == '~'){
            comptboard[3][8] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[3][8] == 'E'){
            comptboard[3][8] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[3][8] != 'E' || comboard[3][8] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "I5"){
        if (comboard[4][8] == '~'){
            comptboard[4][8] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[4][8] == 'E'){
            comptboard[4][8] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[4][8] != 'E' || comboard[4][8] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "I6"){
        if (comboard[5][8] == '~'){
            comptboard[5][8] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[5][8] == 'E'){
            comptboard[5][8] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[5][8] != 'E' || comboard[5][8] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "I7"){
        if (comboard[6][8] == '~'){
            comptboard[6][8] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[6][8] == 'E'){
            comptboard[6][8] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[6][8] != 'E' || comboard[6][8] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "I8"){
        if (comboard[7][8] == '~'){
            comptboard[7][8] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[7][8] == 'E'){
            comptboard[7][8] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[7][8] != 'E' || comboard[7][8] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "I9"){
        if (comboard[8][8] == '~'){
            comptboard[8][8] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[8][8] == 'E'){
            comptboard[8][8] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[8][8] != 'E' || comboard[8][8] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "I10"){
        if (comboard[9][8] == '~'){
            comptboard[9][8] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[9][8] == 'E'){
            comptboard[9][8] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[9][8] != 'E' || comboard[9][8] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "J1"){
        if (comboard[0][9] == '~'){
            comptboard[0][9] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[0][9] == 'E'){
            comptboard[0][9] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[0][9] != 'E' || comboard[0][9] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "J2"){
        if (comboard[1][9] == '~'){
            comptboard[1][9] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[1][9] == 'E'){
            comptboard[1][9] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[1][9] != 'E' || comboard[1][9] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "J3"){
        if (comboard[2][9] == '~'){
            comptboard[2][9] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[2][9] == 'E'){
            comptboard[2][9] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[2][9] != 'E' || comboard[2][9] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "J4"){
        if (comboard[3][9] == '~'){
            comptboard[3][9] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[3][9] == 'E'){
            comptboard[3][9] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[3][9] != 'E' || comboard[3][9] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "J5"){
        if (comboard[4][9] == '~'){
            comptboard[4][9] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[4][9] == 'E'){
            comptboard[4][9] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[4][9] != 'E' || comboard[4][9] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "J6"){
        if (comboard[5][9] == '~'){
            comptboard[5][9] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[5][9] == 'E'){
            comptboard[5][9] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[5][9] != 'E' || comboard[5][9] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "J7"){
        if (comboard[6][9] == '~'){
            comptboard[6][9] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[6][9] == 'E'){
            comptboard[6][9] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[6][9] != 'E' || comboard[6][9] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "J8"){
        if (comboard[7][9] == '~'){
            comptboard[7][9] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[7][9] == 'E'){
            comptboard[7][9] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[7][9] != 'E' || comboard[7][9] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "J9"){
        if (comboard[8][9] == '~'){
            comptboard[8][9] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[8][9] == 'E'){
            comptboard[8][9] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[8][9] != 'E' || comboard[8][9] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }
    if(attacklocation == "J10"){
        if (comboard[9][9] == '~'){
            comptboard[9][9] = miss;
            showcomp();
            cout<< "You missed" << endl;
            return 0;
        }
        if (comboard[9][9] == 'E'){
            comptboard[9][9] = hit;
            showcomp();
            cout<< "You Got Me" << endl;
            return 0;
        }
        if (comboard[9][9] != 'E' || comboard[9][9] == '~'){
            cout << "That space has been taken" << endl;
            return -1;
        }
    }

}                                               // THIS IS THE PLAYER ATTACK COMMANDS

void computer::showcomp() {
    cout << "                 Computer                         "<<endl;
    cout << "    A   B   C   D   E   F   G   H   I   J " << endl;
    cout << "  -----------------------------------------" << endl;
    cout << "1 |_"<< comptboard[0][0] <<  "_|_" << comptboard[0][1] <<  "_|_" << comptboard[0][2] <<  "_|_" << comptboard[0][3] <<  "_|_" << comptboard[0][4] <<  "_|_" << comptboard[0][5] <<  "_|_" << comptboard[0][6] <<  "_|_" << comptboard[0][7] <<  "_|_" << comptboard[0][8] <<  "_|_" << comptboard[0][9] <<  "_|" << endl;

    cout << "2 |_"<< comptboard[1][0] <<  "_|_" << comptboard[1][1] <<  "_|_" << comptboard[1][2] <<  "_|_" << comptboard[1][3] <<  "_|_" << comptboard[1][4] <<  "_|_" << comptboard[1][5] <<  "_|_" << comptboard[1][6] <<  "_|_" << comptboard[1][7] <<  "_|_" << comptboard[1][8] <<  "_|_" << comptboard[1][9] <<  "_|" << endl;

    cout << "3 |_"<< comptboard[2][0] <<  "_|_" << comptboard[2][1] <<  "_|_" << comptboard[2][2] <<  "_|_" << comptboard[2][3] <<  "_|_" << comptboard[2][4] <<  "_|_" << comptboard[2][5] <<  "_|_" << comptboard[2][6] <<  "_|_" << comptboard[2][7] <<  "_|_" << comptboard[2][8] <<  "_|_" << comptboard[2][9] <<  "_|" << endl;

    cout << "4 |_"<< comptboard[3][0] <<  "_|_" << comptboard[3][1] <<  "_|_" << comptboard[3][2] <<  "_|_" << comptboard[3][3] <<  "_|_" << comptboard[3][4] <<  "_|_" << comptboard[3][5] <<  "_|_" << comptboard[3][6] <<  "_|_" << comptboard[3][7] <<  "_|_" << comptboard[3][8] <<  "_|_" << comptboard[3][9] <<  "_|" << endl;

    cout << "5 |_"<< comptboard[4][0] <<  "_|_" << comptboard[4][1] <<  "_|_" << comptboard[4][2] <<  "_|_" << comptboard[4][3] <<  "_|_" << comptboard[4][4] <<  "_|_" << comptboard[4][5] <<  "_|_" << comptboard[4][6] <<  "_|_" << comptboard[4][7] <<  "_|_" << comptboard[4][8] <<  "_|_" << comptboard[4][9] <<  "_|" << endl;

    cout << "6 |_"<< comptboard[5][0] <<  "_|_" << comptboard[5][1] <<  "_|_" << comptboard[5][2] <<  "_|_" << comptboard[5][3] <<  "_|_" << comptboard[5][4] <<  "_|_" << comptboard[5][5] <<  "_|_" << comptboard[5][6] <<  "_|_" << comptboard[5][7] <<  "_|_" << comptboard[5][8] <<  "_|_" << comptboard[5][9] <<  "_|" << endl;

    cout << "7 |_"<< comptboard[6][0] <<  "_|_" << comptboard[6][1] <<  "_|_" << comptboard[6][2] <<  "_|_" << comptboard[6][3] <<  "_|_" << comptboard[6][4] <<  "_|_" << comptboard[6][5] <<  "_|_" << comptboard[6][6] <<  "_|_" << comptboard[6][7] <<  "_|_" << comptboard[6][8] <<  "_|_" << comptboard[6][9] <<  "_|" << endl;

    cout << "8 |_"<< comptboard[7][0] <<  "_|_" << comptboard[7][1] <<  "_|_" << comptboard[7][2] <<  "_|_" << comptboard[7][3] <<  "_|_" << comptboard[7][4] <<  "_|_" << comptboard[7][5] <<  "_|_" << comptboard[7][6] <<  "_|_" << comptboard[7][7] <<  "_|_" << comptboard[7][8] <<  "_|_" << comptboard[7][9] <<  "_|" << endl;

    cout << "9 |_"<< comptboard[8][0] <<  "_|_" << comptboard[8][1] <<  "_|_" << comptboard[8][2] <<  "_|_" << comptboard[8][3] <<  "_|_" << comptboard[8][4] <<  "_|_" << comptboard[8][5] <<  "_|_" << comptboard[8][6] <<  "_|_" << comptboard[8][7] <<  "_|_" << comptboard[8][8] <<  "_|_" << comptboard[8][9] <<  "_|" << endl;

    cout << "10|_"<< comptboard[9][0] <<  "_|_" << comptboard[9][1] <<  "_|_" << comptboard[9][2] <<  "_|_" << comptboard[9][3] <<  "_|_" << comptboard[9][4] <<  "_|_" << comptboard[9][5] <<  "_|_" << comptboard[9][6] <<  "_|_" << comptboard[9][7] <<  "_|_" << comptboard[9][8] <<  "_|_" << comptboard[9][9] <<  "_|" << endl;

}                                              // THIS SHOWS THE COMPUTER BOARD

// THIS SET THE SHIPS FOR THE COMPUTER
void computer::shipset() {
    for(int i = 0; i < 10; i++ ){
        for(int j = 0; j < 10; j++){
            cout <<  comboard[i][j] << " ";
        }
        cout << endl;
    }
}

void computer::setship(){
    int s = 0;
    while (s < numships) {
        int i = rand() % 10;
        int j = rand() % 10;
        if (comboard[i][j] != 'E'){
            s++;
            comboard[i][j] = 'E';
        }
    }

}
// BLOCK ENDS HERE

void computer::Setshipnumber(int nships) {
    numships = nships;
}

void shiplocation::board() {
    cout << "    A   B   C   D   E   F   G   H   I   J " << endl;
    cout << "  -----------------------------------------" << endl;
    cout << "1 |___|___|___|___|___|___|___|___|___|___|" << endl;

    cout << "2 |___|___|___|___|___|___|___|___|___|___|" << endl;

    cout << "3 |___|___|___|___|___|___|___|___|___|___|" << endl;

    cout << "4 |___|___|___|___|___|___|___|___|___|___|" << endl;

    cout << "5 |___|___|___|___|___|___|___|___|___|___|" << endl;

    cout << "6 |___|___|___|___|___|___|___|___|___|___|" << endl;

    cout << "7 |___|___|___|___|___|___|___|___|___|___|" << endl;

    cout << "8 |___|___|___|___|___|___|___|___|___|___|" << endl;

    cout << "9 |___|___|___|___|___|___|___|___|___|___|" << endl;

    cout << "10|___|___|___|___|___|___|___|___|___|___|" << endl;

}                                   // THIS IS THE PREIVIEW BOARD

void shiplocation::clear(){
    for (int i = 0; i < 10 ; i++){
        for (int j = 0; j < 10 ; j++){
            table[i][j] = ' ';
        }
    }
}                            // THIS CLEARS THE PLAYERS BOARD

void shiplocation::printboard() {
    cout << "    A   B   C   D   E   F   G   H   I   J " << endl;
    cout << "  -----------------------------------------" << endl;
    cout << "1 |_"<< table[0][0] <<  "_|_" << table[0][1] <<  "_|_" << table[0][2] <<  "_|_" << table[0][3] <<  "_|_" << table[0][4] <<  "_|_" << table[0][5] <<  "_|_" << table[0][6] <<  "_|_" << table[0][7] <<  "_|_" << table[0][8] <<  "_|_" << table[0][9] <<  "_|" << endl;

    cout << "2 |_"<< table[1][0] <<  "_|_" << table[1][1] <<  "_|_" << table[1][2] <<  "_|_" << table[1][3] <<  "_|_" << table[1][4] <<  "_|_" << table[1][5] <<  "_|_" << table[1][6] <<  "_|_" << table[1][7] <<  "_|_" << table[1][8] <<  "_|_" << table[1][9] <<  "_|" << endl;

    cout << "3 |_"<< table[2][0] <<  "_|_" << table[2][1] <<  "_|_" << table[2][2] <<  "_|_" << table[2][3] <<  "_|_" << table[2][4] <<  "_|_" << table[2][5] <<  "_|_" << table[2][6] <<  "_|_" << table[2][7] <<  "_|_" << table[2][8] <<  "_|_" << table[2][9] <<  "_|" << endl;

    cout << "4 |_"<< table[3][0] <<  "_|_" << table[3][1] <<  "_|_" << table[3][2] <<  "_|_" << table[3][3] <<  "_|_" << table[3][4] <<  "_|_" << table[3][5] <<  "_|_" << table[3][6] <<  "_|_" << table[3][7] <<  "_|_" << table[3][8] <<  "_|_" << table[3][9] <<  "_|" << endl;

    cout << "5 |_"<< table[4][0] <<  "_|_" << table[4][1] <<  "_|_" << table[4][2] <<  "_|_" << table[4][3] <<  "_|_" << table[4][4] <<  "_|_" << table[4][5] <<  "_|_" << table[4][6] <<  "_|_" << table[4][7] <<  "_|_" << table[4][8] <<  "_|_" << table[4][9] <<  "_|" << endl;

    cout << "6 |_"<< table[5][0] <<  "_|_" << table[5][1] <<  "_|_" << table[5][2] <<  "_|_" << table[5][3] <<  "_|_" << table[5][4] <<  "_|_" << table[5][5] <<  "_|_" << table[5][6] <<  "_|_" << table[5][7] <<  "_|_" << table[5][8] <<  "_|_" << table[5][9] <<  "_|" << endl;

    cout << "7 |_"<< table[6][0] <<  "_|_" << table[6][1] <<  "_|_" << table[6][2] <<  "_|_" << table[6][3] <<  "_|_" << table[6][4] <<  "_|_" << table[6][5] <<  "_|_" << table[6][6] <<  "_|_" << table[6][7] <<  "_|_" << table[6][8] <<  "_|_" << table[6][9] <<  "_|" << endl;

    cout << "8 |_"<< table[7][0] <<  "_|_" << table[7][1] <<  "_|_" << table[7][2] <<  "_|_" << table[7][3] <<  "_|_" << table[7][4] <<  "_|_" << table[7][5] <<  "_|_" << table[7][6] <<  "_|_" << table[7][7] <<  "_|_" << table[7][8] <<  "_|_" << table[7][9] <<  "_|" << endl;

    cout << "9 |_"<< table[8][0] <<  "_|_" << table[8][1] <<  "_|_" << table[8][2] <<  "_|_" << table[8][3] <<  "_|_" << table[8][4] <<  "_|_" << table[8][5] <<  "_|_" << table[8][6] <<  "_|_" << table[8][7] <<  "_|_" << table[8][8] <<  "_|_" << table[8][9] <<  "_|" << endl;

    cout << "10|_"<< table[9][0] <<  "_|_" << table[9][1] <<  "_|_" << table[9][2] <<  "_|_" << table[9][3] <<  "_|_" << table[9][4] <<  "_|_" << table[9][5] <<  "_|_" << table[9][6] <<  "_|_" << table[9][7] <<  "_|_" << table[9][8] <<  "_|_" << table[9][9] <<  "_|" << endl;
}                                                 // THSIS SHOWS WHERE THE SHIPS ARE PLACED AND COMPUTER ATTACKS

void shiplocation::computerattack() {
    int i;
    int j;
    i = rand() % 10;
    j = rand() % 10;
    if (table[i][j] == ' ') {
        table[i][j] = 'O';
        printboard();
        cout << "I missed you" << endl;
    }if (table[i][j] == ' 5'){
        for(int i = 0; i < 10; i++ ) {
            for (int j = 0; j < 10; j++) {
                if (table[i][j] == '5'){
                    table[i][j] = 'X';
                    cout << "I got you" << endl;
                }
            }
        }
    }
}                                                            // THIS ARE THE COMPUTER ATTACK COMMANDS

int shiplocation::checkwin() {
    for(int i = 0; i < 10; i++ ) {
        for (int j = 0; j < 10; j++) {
            if (table[i][j] != '5' || table[i][j] != '4' || table[i][j] != '3' || table[i][j] != 'E' ||
                table[i][j] != '2'){
                cout << "Computer wins" << endl;
                return 0;
            }
            if (table[i][j] == '5' || table[i][j] == '4' || table[i][j] == '3' || table[i][j] == 'E' ||
                table[i][j] == '2'){
                return -1;
            }
        }
    }
}

// THESE ARE THE SHIP PLACEMENT COMMANTS

int shiplocation::Carrier() {
    if (carrierlocation == "A1" && carrierdirection == "VD") {
        for (int i=0, j=0; i <= 4; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;

        }
        return 0;
    }
    if (carrierlocation == "A2" && carrierdirection == "VD") {
        for (int i=1, j=0; i <= 5; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "A3" && carrierdirection == "VD") {
        for (int i=2, j=0; i <= 6; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "A4" && carrierdirection == "VD") {
        for (int i=3, j=0; i <= 7; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "A5" && carrierdirection == "VD") {
        for (int i=4, j=0; i <= 8; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "A6" && carrierdirection == "VD") {
        for (int i=5, j=0; i <= 9; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B1" && carrierdirection == "VD") {
        for (int i=0, j=1; i <= 4; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B2" && carrierdirection == "VD") {
        for (int i=1, j=1; i <= 5; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B3" && carrierdirection == "VD") {
        for (int i=2, j=1; i <= 6; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B4" && carrierdirection == "VD") {
        for (int i=3, j=1; i <= 7; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B5" && carrierdirection == "VD") {
        for (int i=4, j=1; i <= 8; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B6" && carrierdirection == "VD") {
        for (int i=5, j=1; i <= 9; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    } if (carrierlocation == "C1" && carrierdirection == "VD") {
        for (int i=0, j=2; i <= 4; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "C2" && carrierdirection == "VD") {
        for (int i=1, j=2; i <= 5; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "C3" && carrierdirection == "VD") {
        for (int i=2, j=2; i <= 6; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "C4" && carrierdirection == "VD") {
        for (int i=3, j=2; i <= 7; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "C5" && carrierdirection == "VD") {
        for (int i=4, j=2; i <= 8; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "C6" && carrierdirection == "VD") {
        for (int i=5, j=2; i <= 9; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    } if (carrierlocation == "D1" && carrierdirection == "VD") {
        for (int i=0, j=3; i <= 4; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "D2" && carrierdirection == "VD") {
        for (int i=1, j=3; i <= 5; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "D3" && carrierdirection == "VD") {
        for (int i=2, j=3; i <= 6; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "D4" && carrierdirection == "VD") {
        for (int i=3, j=3; i <= 7; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "D5" && carrierdirection == "VD") {
        for (int i=4, j=3; i <= 8; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "D6" && carrierdirection == "VD") {
        for (int i=5, j=3; i <= 9; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    } if (carrierlocation == "E1" && carrierdirection == "VD") {
        for (int i=0, j=4; i <= 4; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "E2" && carrierdirection == "VD") {
        for (int i=1, j=4; i <= 5; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "E3" && carrierdirection == "VD") {
        for (int i=2, j=4; i <= 6; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "E4" && carrierdirection == "VD") {
        for (int i=3, j=4; i <= 7; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "E5" && carrierdirection == "VD") {
        for (int i=4, j=4; i <= 8; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "E6" && carrierdirection == "VD") {
        for (int i=5, j=4; i <= 9; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F1" && carrierdirection == "VD") {
        for (int i=0, j=5; i <= 4; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "F2" && carrierdirection == "VD") {
        for (int i=1, j=5; i <= 5; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "F3" && carrierdirection == "VD") {
        for (int i=2, j=5; i <= 6; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "F4" && carrierdirection == "VD") {
        for (int i=3, j=5; i <= 7; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "F5" && carrierdirection == "VD") {
        for (int i=4, j=5; i <= 8; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "F6" && carrierdirection == "VD") {
        for (int i=5, j=5; i <= 9; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "G1" && carrierdirection == "VD") {
        for (int i=0, j=6; i <= 4; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "G2" && carrierdirection == "VD") {
        for (int i=1, j=6; i <= 5; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "G3" && carrierdirection == "VD") {
        for (int i=2, j=6; i <= 6; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "G4" && carrierdirection == "VD") {
        for (int i=3, j=6; i <= 7; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "G5" && carrierdirection == "VD") {
        for (int i=4, j=6; i <= 8; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "G6" && carrierdirection == "VD") {
        for (int i=5, j=6; i <= 9; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "H1" && carrierdirection == "VD") {
        for (int i=0, j=7; i <= 4; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "H2" && carrierdirection == "VD") {
        for (int i=1, j=7; i <= 5; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "H3" && carrierdirection == "VD") {
        for (int i=2, j=7; i <= 6; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "H4" && carrierdirection == "VD") {
        for (int i=3, j=7; i <= 7; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "H5" && carrierdirection == "VD") {
        for (int i=4, j=7; i <= 8; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "H6" && carrierdirection == "VD") {
        for (int i=5, j=7; i <= 9; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "I1" && carrierdirection == "VD") {
        for (int i=0, j=8; i <= 4; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "I2" && carrierdirection == "VD") {
        for (int i=1, j=8; i <= 5; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "I3" && carrierdirection == "VD") {
        for (int i=2, j=8; i <= 6; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "I4" && carrierdirection == "VD") {
        for (int i=3, j=8; i <= 7; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "I5" && carrierdirection == "VD") {
        for (int i=4, j=8; i <= 8; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "I6" && carrierdirection == "VD") {
        for (int i=5, j=8; i <= 9; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "J1" && carrierdirection == "VD") {
        for (int i=0, j=9; i <= 4; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "J2" && carrierdirection == "VD") {
        for (int i=1, j=9; i <= 5; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "J3" && carrierdirection == "VD") {
        for (int i=2, j=9; i <= 6; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "J4" && carrierdirection == "VD") {
        for (int i=3, j=9; i <= 7; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "J5" && carrierdirection == "VD") {
        for (int i=4, j=9; i <= 8; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "J6" && carrierdirection == "VD") {
        for (int i=5, j=9; i <= 9; i++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "A10" && carrierdirection == "VU") {
        for (int i=9, j=0; i >= 5; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "A9" && carrierdirection == "VU") {
        for (int i=8, j=0; i >= 4; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "A8" && carrierdirection == "VU") {
        for (int i=7, j=0; i >= 3; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "A7" && carrierdirection == "VU") {
        for (int i=6, j=0; i >= 2; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "A6" && carrierdirection == "VU") {
        for (int i=5, j=0; i >= 1; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "A5" && carrierdirection == "VU") {
        for (int i=4, j=0; i >= 0; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B10" && carrierdirection == "VU") {
        for (int i=9, j=1; i >= 5; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B9" && carrierdirection == "VU") {
        for (int i=8, j=1; i >= 4; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B8" && carrierdirection == "VU") {
        for (int i=7, j=1; i >= 3; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B7" && carrierdirection == "VU") {
        for (int i=6, j=1; i >= 2; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B6" && carrierdirection == "VU") {
        for (int i=5, j=1; i >= 1; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B5" && carrierdirection == "VU") {
        for (int i=4, j=1; i >= 0; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }  if (carrierlocation == "C10" && carrierdirection == "VU") {
        for (int i=9, j=2; i >= 5; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "C9" && carrierdirection == "VU") {
        for (int i=8, j=2; i >= 4; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "C8" && carrierdirection == "VU") {
        for (int i=7, j=2; i >= 3; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "C7" && carrierdirection == "VU") {
        for (int i=6, j=2; i >= 2; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "C6" && carrierdirection == "VU") {
        for (int i=5, j=2; i >= 1; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "C5" && carrierdirection == "VU") {
        for (int i=4, j=2; i >= 0; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }  if (carrierlocation == "D10" && carrierdirection == "VU") {
        for (int i=9, j=3; i >= 5; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "D9" && carrierdirection == "VU") {
        for (int i=8, j=3; i >= 4; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "D8" && carrierdirection == "VU") {
        for (int i=7, j=3; i >= 3; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "D7" && carrierdirection == "VU") {
        for (int i=6, j=3; i >= 2; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "D6" && carrierdirection == "VU") {
        for (int i=5, j=3; i >= 1; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "D5" && carrierdirection == "VU") {
        for (int i=4, j=3; i >= 0; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }  if (carrierlocation == "E10" && carrierdirection == "VU") {
        for (int i=9, j=4; i >= 5; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "E9" && carrierdirection == "VU") {
        for (int i=8, j=4; i >= 4; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "E8" && carrierdirection == "VU") {
        for (int i=7, j=4; i >= 3; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "E7" && carrierdirection == "VU") {
        for (int i=6, j=4; i >= 2; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "E6" && carrierdirection == "VU") {
        for (int i=5, j=4; i >= 1; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "E5" && carrierdirection == "VU") {
        for (int i=4, j=4; i >= 0; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    } if (carrierlocation == "F10" && carrierdirection == "VU") {
        for (int i=9, j=5; i >= 5; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "F9" && carrierdirection == "VU") {
        for (int i=8, j=5; i >= 4; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "F8" && carrierdirection == "VU") {
        for (int i=7, j=5; i >= 3; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "F7" && carrierdirection == "VU") {
        for (int i=6, j=5; i >= 2; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "F6" && carrierdirection == "VU") {
        for (int i=5, j=5; i >= 1; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "F5" && carrierdirection == "VU") {
        for (int i=4, j=5; i >= 0; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    } if (carrierlocation == "G10" && carrierdirection == "VU") {
        for (int i=9, j=6; i >= 5; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "G9" && carrierdirection == "VU") {
        for (int i=8, j=6; i >= 4; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "G8" && carrierdirection == "VU") {
        for (int i=7, j=6; i >= 3; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "G7" && carrierdirection == "VU") {
        for (int i=6, j=6; i >= 2; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "G6" && carrierdirection == "VU") {
        for (int i=5, j=6; i >= 1; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "G5" && carrierdirection == "VU") {
        for (int i=4, j=6; i >= 0; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    } if (carrierlocation == "H10" && carrierdirection == "VU") {
        for (int i=9, j=7; i >= 5; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "H9" && carrierdirection == "VU") {
        for (int i=8, j=7; i >= 4; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "H8" && carrierdirection == "VU") {
        for (int i=7, j=7; i >= 3; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "H7" && carrierdirection == "VU") {
        for (int i=6, j=7; i >= 2; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "H6" && carrierdirection == "VU") {
        for (int i=5, j=7; i >= 1; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "H5" && carrierdirection == "VU") {
        for (int i=4, j=7; i >= 0; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    } if (carrierlocation == "I10" && carrierdirection == "VU") {
        for (int i=9, j=8; i >= 5; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "I9" && carrierdirection == "VU") {
        for (int i=8, j=8; i >= 4; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "I8" && carrierdirection == "VU") {
        for (int i=7, j=8; i >= 3; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "I7" && carrierdirection == "VU") {
        for (int i=6, j=8; i >= 2; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "I6" && carrierdirection == "VU") {
        for (int i=5, j=8; i >= 1; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "I5" && carrierdirection == "VU") {
        for (int i=4, j=8; i >= 0; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    } if (carrierlocation == "J10" && carrierdirection == "VU") {
        for (int i=9, j=9; i >= 5; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "J9" && carrierdirection == "VU") {
        for (int i=8, j=9; i >= 4; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "J8" && carrierdirection == "VU") {
        for (int i=7, j=9; i >= 3; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "J7" && carrierdirection == "VU") {
        for (int i=6, j=9; i >= 2; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "J6" && carrierdirection == "VU") {
        for (int i=5, j=9; i >= 1; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "J5" && carrierdirection == "VU") {
        for (int i=4, j=9; i >= 0; i--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "A1" && carrierdirection == "HR"){
        for(int i=0, j=0; j <= 4; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "A2" && carrierdirection == "HR"){
        for(int i=1, j=0; j <= 4; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "A3" && carrierdirection == "HR"){
        for(int i=2, j=0; j <= 4; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "A4" && carrierdirection == "HR"){
        for(int i=3, j=0; j <=4 ; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "A5" && carrierdirection == "HR"){
        for(int i=4, j=0; j <= 4; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "A6" && carrierdirection == "HR"){
        for(int i=5, j=0; j <= 4; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "A7" && carrierdirection == "HR"){
        for(int i=6, j=0; j <= 4; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "A8" && carrierdirection == "HR"){
        for(int i=7, j=0; j <= 4; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "A9" && carrierdirection == "HR"){
        for(int i=8, j=0; j <= 4; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "A10" && carrierdirection == "HR"){
        for(int i=9, j=0; j <=4 ; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "B1" && carrierdirection == "HR"){
        for(int i=0, j=1; j <= 5; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "B2" && carrierdirection == "HR"){
        for(int i=1, j=1; j <= 5; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "B3" && carrierdirection == "HR"){
        for(int i=2, j=1; j <= 5; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "B4" && carrierdirection == "HR"){
        for(int i=3, j=1; j <= 5; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "B5" && carrierdirection == "HR"){
        for(int i=4, j=1; j <= 5; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "B6" && carrierdirection == "HR"){
        for(int i=5, j=1; j <= 5; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "B7" && carrierdirection == "HR"){
        for(int i=6, j=1; j <= 5; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "B8" && carrierdirection == "HR"){
        for(int i=7, j=1; j <= 5; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "B9" && carrierdirection == "HR"){
        for(int i=8, j=1; j <= 5; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "B10" && carrierdirection == "HR"){
        for(int i=9, j=1; j <=5; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "C1" && carrierdirection == "HR"){
        for(int i=0, j=2; j <= 6; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "C2" && carrierdirection == "HR"){
        for(int i=1, j=2; j <= 6; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "C3" && carrierdirection == "HR"){
        for(int i=2, j=2; j <= 6; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "C4" && carrierdirection == "HR"){
        for(int i=3, j=2; j <= 6; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "C5" && carrierdirection == "HR"){
        for(int i=4, j=2; j <= 6; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "C6" && carrierdirection == "HR"){
        for(int i=5, j=2; j <= 6; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "C7" && carrierdirection == "HR"){
        for(int i=6, j=2; j <= 6; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "C8" && carrierdirection == "HR"){
        for(int i=7, j=2; j <= 6; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "C9" && carrierdirection == "HR"){
        for(int i=8, j=2; j <= 6; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "C10" && carrierdirection == "HR"){
        for(int i=9, j=2; j <=6; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "D1" && carrierdirection == "HR"){
        for(int i=0, j=3; j <= 7; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "D2" && carrierdirection == "HR"){
        for(int i=1, j=3; j <= 7; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "D3" && carrierdirection == "HR"){
        for(int i=2, j=3; j <= 7; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "D4" && carrierdirection == "HR"){
        for(int i=3, j=3; j <= 7; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "D5" && carrierdirection == "HR"){
        for(int i=4, j=3; j <= 7; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "D6" && carrierdirection == "HR"){
        for(int i=5, j=3; j <= 7; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "D7" && carrierdirection == "HR"){
        for(int i=6, j=3; j <= 7; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "D8" && carrierdirection == "HR"){
        for(int i=7, j=3; j <= 7; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "D9" && carrierdirection == "HR"){
        for(int i=8, j=3; j <= 7; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "D10" && carrierdirection == "HR"){
        for(int i=9, j=3; j <=7; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E1" && carrierdirection == "HR"){
        for(int i=0, j=4; j <= 8; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E2" && carrierdirection == "HR"){
        for(int i=1, j=4; j <= 8; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E3" && carrierdirection == "HR"){
        for(int i=2, j=4; j <= 8; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E4" && carrierdirection == "HR"){
        for(int i=3, j=4; j <= 8; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E5" && carrierdirection == "HR"){
        for(int i=4, j=4; j <= 8; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E6" && carrierdirection == "HR"){
        for(int i=5, j=4; j <= 8; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E7" && carrierdirection == "HR"){
        for(int i=6, j=4; j <= 8; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E8" && carrierdirection == "HR"){
        for(int i=7, j=4; j <= 8; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E9" && carrierdirection == "HR"){
        for(int i=8, j=4; j <= 8; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E10" && carrierdirection == "HR"){
        for(int i=9, j=4; j <=8; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F1" && carrierdirection == "HR"){
        for(int i=0, j=5; j <= 9; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F2" && carrierdirection == "HR"){
        for(int i=1, j=5; j <= 9; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F3" && carrierdirection == "HR"){
        for(int i=2, j=5; j <= 9; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F4" && carrierdirection == "HR"){
        for(int i=3, j=5; j <= 9; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F5" && carrierdirection == "HR"){
        for(int i=4, j=5; j <= 9; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F6" && carrierdirection == "HR"){
        for(int i=5, j=5; j <= 9; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F7" && carrierdirection == "HR"){
        for(int i=6, j=5; j <= 9; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F8" && carrierdirection == "HR"){
        for(int i=7, j=5; j <= 9; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F9" && carrierdirection == "HR"){
        for(int i=8, j=5; j <= 9; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F10" && carrierdirection == "HR"){
        for(int i=9, j=5; j <=9; j++){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "J10" && carrierdirection == "HL"){
        for(int i=9, j=9; j >= 5; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "J9" && carrierdirection == "HL"){
        for(int i=8, j=9; j >= 5; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "J8" && carrierdirection == "HL"){
        for(int i=7, j=9; j >= 5; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "J7" && carrierdirection == "HL"){
        for(int i=6, j=9; j >= 5; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "J6" && carrierdirection == "HL"){
        for(int i=5, j=9; j >= 5; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "J5" && carrierdirection == "HL"){
        for(int i=4, j=9; j >= 5; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "J4" && carrierdirection == "HL"){
        for(int i=3, j=9; j >= 5; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "J3" && carrierdirection == "HL"){
        for(int i=2, j=9; j >= 5; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "J2" && carrierdirection == "HL"){
        for(int i=1, j=9; j >= 5; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "J1" && carrierdirection == "HL"){
        for(int i=0, j=9; j >= 5; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "I10" && carrierdirection == "HL"){
        for(int i=9, j=8; j >= 4; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "I9" && carrierdirection == "HL"){
        for(int i=8, j=8; j >= 4; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "I8" && carrierdirection == "HL"){
        for(int i=7, j=8; j >= 4; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "I7" && carrierdirection == "HL"){
        for(int i=6, j=8; j >= 4; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "I6" && carrierdirection == "HL"){
        for(int i=5, j=8; j >= 4; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "I5" && carrierdirection == "HL"){
        for(int i=4, j=8; j >= 4; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "I4" && carrierdirection == "HL"){
        for(int i=3, j=8; j >= 4; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "I3" && carrierdirection == "HL"){
        for(int i=2, j=8; j >= 4; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "I2" && carrierdirection == "HL"){
        for(int i=1, j=8; j >= 4; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "I1" && carrierdirection == "HL"){
        for(int i=0, j=8; j >= 4; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "H10" && carrierdirection == "HL"){
        for(int i=9, j=7; j >= 3; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "H9" && carrierdirection == "HL"){
        for(int i=8, j=7; j >= 3; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "H8" && carrierdirection == "HL"){
        for(int i=7, j=7; j >= 3; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "H7" && carrierdirection == "HL"){
        for(int i=6, j=7; j >= 3; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "H6" && carrierdirection == "HL"){
        for(int i=5, j=7; j >= 3; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "H5" && carrierdirection == "HL"){
        for(int i=4, j=7; j >= 3; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "H4" && carrierdirection == "HL"){
        for(int i=3, j=7; j >= 3; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "H3" && carrierdirection == "HL"){
        for(int i=2, j=7; j >= 3; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "H2" && carrierdirection == "HL"){
        for(int i=1, j=7; j >= 3; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "H1" && carrierdirection == "HL"){
        for(int i=0, j=7; j >= 3; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "G10" && carrierdirection == "HL"){
        for(int i=9, j=6; j >= 2; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "G9" && carrierdirection == "HL"){
        for(int i=8, j=6; j >= 2; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "G8" && carrierdirection == "HL"){
        for(int i=7, j=6; j >= 2; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "G7" && carrierdirection == "HL"){
        for(int i=6, j=6; j >= 2; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "G6" && carrierdirection == "HL"){
        for(int i=5, j=6; j >= 2; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "G5" && carrierdirection == "HL"){
        for(int i=4, j=6; j >= 2; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "G4" && carrierdirection == "HL"){
        for(int i=3, j=6; j >= 2; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "G3" && carrierdirection == "HL"){
        for(int i=2, j=6; j >= 2; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "G2" && carrierdirection == "HL"){
        for(int i=1, j=6; j >= 2; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "G1" && carrierdirection == "HL"){
        for(int i=0, j=6; j >= 2; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "F10" && carrierdirection == "HL"){
        for(int i=9, j=5; j >= 1; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F9" && carrierdirection == "HL"){
        for(int i=8, j=5; j >= 1; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F8" && carrierdirection == "HL"){
        for(int i=7, j=5; j >= 1; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F7" && carrierdirection == "HL"){
        for(int i=6, j=5; j >= 1; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F6" && carrierdirection == "HL"){
        for(int i=5, j=5; j >= 1; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F5" && carrierdirection == "HL"){
        for(int i=4, j=5; j >= 1; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F4" && carrierdirection == "HL"){
        for(int i=3, j=5; j >= 1; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F3" && carrierdirection == "HL"){
        for(int i=2, j=5; j >= 1; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F2" && carrierdirection == "HL"){
        for(int i=1, j=5; j >= 1; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "F1" && carrierdirection == "HL"){
        for(int i=0, j=5; j >= 1; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    if (carrierlocation == "E10" && carrierdirection == "HL"){
        for(int i=9, j=4; j >= 0; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E9" && carrierdirection == "HL"){
        for(int i=8, j=4; j >= 0; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E8" && carrierdirection == "HL"){
        for(int i=7, j=4; j >= 0; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E7" && carrierdirection == "HL"){
        for(int i=6, j=4; j >= 0; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E6" && carrierdirection == "HL"){
        for(int i=5, j=4; j >= 0; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E5" && carrierdirection == "HL"){
        for(int i=4, j=4; j >= 0; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E4" && carrierdirection == "HL"){
        for(int i=3, j=4; j >= 0; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E3" && carrierdirection == "HL"){
        for(int i=2, j=4; j >= 0; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E2" && carrierdirection == "HL"){
        for(int i=1, j=4; j >= 0; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }if (carrierlocation == "E1" && carrierdirection == "HL"){
        for(int i=0, j=4; j >= 0; j--){
            if (table [i][j] == ' ')
                table [i][j]=carrier;
        }
        return 0;
    }
    else{
        cout << "Please enter a new space" << endl;
        return -1;
    }
}

int shiplocation::Battleship() {
    if (battleshiplocation == "A1" && battleshipdirection == "VD") {
        for (int i = 0, j = 0; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 0; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A2" && battleshipdirection == "VD") {
        for (int i = 1, j = 0; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 0; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A3" && battleshipdirection == "VD") {
        for (int i = 2, j = 0; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 0; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A4" && battleshipdirection == "VD") {
        for (int i = 3, j = 0; i <= 6; i++) {
            if (table[i][j] != ' '){
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 0; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A5" && battleshipdirection == "VD") {
        for (int i=4, j=0; i <= 7; i++){
            if (table [i][j] != ' '){
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 0; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A6" && battleshipdirection == "VD") {
        for (int i=5, j=0; i <= 8; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=0; i <= 8; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A7" && battleshipdirection == "VD") {
        for (int i=6, j=0; i <= 9; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=0; i <= 9; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B1" && battleshipdirection == "VD") {
        for (int i=0, j=1; i <= 3; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=0, j=1; i <= 3; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B2" && battleshipdirection == "VD") {
        for (int i=1, j=1; i <= 4; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=1, j=1; i <= 4; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B3" && battleshipdirection == "VD") {
        for (int i=2, j=1; i <= 5; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=2, j=1; i <= 5; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B4" && battleshipdirection == "VD") {
        for (int i=3, j=1; i <= 6; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=1; i <= 6; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B5" && battleshipdirection == "VD") {
        for (int i=4, j=1; i <= 7; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=1; i <= 7; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B6" && battleshipdirection == "VD") {
        for (int i=5, j=1; i <= 8; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=1; i <= 8; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B7" && battleshipdirection == "VD") {
        for (int i=6, j=1; i <= 9; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=1; i <= 9; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C1" && battleshipdirection == "VD") {
        for (int i=0, j=2; i <= 3; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=0, j=2; i <= 3; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C2" && battleshipdirection == "VD") {
        for (int i=1, j=2; i <= 4; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=1, j=2; i <= 4; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C3" && battleshipdirection == "VD") {
        for (int i=2, j=2; i <= 5; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=2, j=2; i <= 5; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C4" && battleshipdirection == "VD") {
        for (int i=3, j=2; i <= 6; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=2; i <= 6; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C5" && battleshipdirection == "VD") {
        for (int i=4, j=2; i <= 7; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=2; i <= 7; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C6" && battleshipdirection == "VD") {
        for (int i=5, j=2; i <= 8; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=2; i <= 8; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C7" && battleshipdirection == "VD") {
        for (int i=6, j=2; i <= 9; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=2; i <= 9; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D1" && battleshipdirection == "VD") {
        for (int i=0, j=3; i <= 3; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=0, j=3; i <= 3; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D2" && battleshipdirection == "VD") {
        for (int i=1, j=3; i <= 4; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=1, j=3; i <= 4; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D3" && battleshipdirection == "VD") {
        for (int i=2, j=3; i <= 5; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=2, j=3; i <= 5; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D4" && battleshipdirection == "VD") {
        for (int i=3, j=3; i <= 6; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=3; i <= 6; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D5" && battleshipdirection == "VD") {
        for (int i=4, j=3; i <= 7; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=3; i <= 7; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D6" && battleshipdirection == "VD") {
        for (int i=5, j=3; i <= 8; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=3; i <= 8; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D7" && battleshipdirection == "VD") {
        for (int i=6, j=3; i <= 9; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=3; i <= 9; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E1" && battleshipdirection == "VD") {
        for (int i=0, j=4; i <= 3; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=0, j=4; i <= 3; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E2" && battleshipdirection == "VD") {
        for (int i=1, j=4; i <= 4; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=1, j=4; i <= 4; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E3" && battleshipdirection == "VD") {
        for (int i=2, j=4; i <= 5; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=2, j=4; i <= 5; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E4" && battleshipdirection == "VD") {
        for (int i=3, j=4; i <= 6; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=4; i <= 6; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E5" && battleshipdirection == "VD") {
        for (int i=4, j=4; i <= 7; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=4; i <= 7; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E6" && battleshipdirection == "VD") {
        for (int i=5, j=4; i <= 8; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=4; i <= 8; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E7" && battleshipdirection == "VD") {
        for (int i=6, j=4; i <= 9; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=4; i <= 9; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F1" && battleshipdirection == "VD") {
        for (int i=0, j=5; i <= 3; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=0, j=5; i <= 3; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F2" && battleshipdirection == "VD") {
        for (int i=1, j=5; i <= 4; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=1, j=5; i <= 4; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F3" && battleshipdirection == "VD") {
        for (int i=2, j=5; i <= 5; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=2, j=5; i <= 5; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F4" && battleshipdirection == "VD") {
        for (int i=3, j=5; i <= 6; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=5; i <= 6; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F5" && battleshipdirection == "VD") {
        for (int i=4, j=5; i <= 7; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=5; i <= 7; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F6" && battleshipdirection == "VD") {
        for (int i=5, j=5; i <= 8; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=5; i <= 8; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F7" && battleshipdirection == "VD") {
        for (int i=6, j=5; i <= 9; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=5; i <= 9; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G1" && battleshipdirection == "VD") {
        for (int i=0, j=6; i <= 3; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=0, j=6; i <= 3; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G2" && battleshipdirection == "VD") {
        for (int i=1, j=6; i <= 4; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=1, j=6; i <= 4; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G3" && battleshipdirection == "VD") {
        for (int i=2, j=6; i <= 5; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=2, j=6; i <= 5; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G4" && battleshipdirection == "VD") {
        for (int i=3, j=6; i <= 6; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=6; i <= 6; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G5" && battleshipdirection == "VD") {
        for (int i=4, j=6; i <= 7; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=6; i <= 7; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G6" && battleshipdirection == "VD") {
        for (int i=5, j=6; i <= 8; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=6; i <= 8; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G7" && battleshipdirection == "VD") {
        for (int i=6, j=6; i <= 9; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=6; i <= 9; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H1" && battleshipdirection == "VD") {
        for (int i=0, j=7; i <= 3; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=0, j=7; i <= 3; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H2" && battleshipdirection == "VD") {
        for (int i=1, j=7; i <= 4; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=1, j=7; i <= 4; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H3" && battleshipdirection == "VD") {
        for (int i=2, j=7; i <= 5; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=2, j=7; i <= 5; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H4" && battleshipdirection == "VD") {
        for (int i=3, j=7; i <= 6; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=7; i <= 6; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H5" && battleshipdirection == "VD") {
        for (int i=4, j=7; i <= 7; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=7; i <= 7; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H6" && battleshipdirection == "VD") {
        for (int i=5, j=7; i <= 8; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=7; i <= 8; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H7" && battleshipdirection == "VD") {
        for (int i=6, j=7; i <= 9; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=7; i <= 9; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I1" && battleshipdirection == "VD") {
        for (int i=0, j=8; i <= 3; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=0, j=8; i <= 3; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I2" && battleshipdirection == "VD") {
        for (int i=1, j=8; i <= 4; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=1, j=8; i <= 4; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I3" && battleshipdirection == "VD") {
        for (int i=2, j=8; i <= 5; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=2, j=8; i <= 5; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I4" && battleshipdirection == "VD") {
        for (int i=3, j=8; i <= 6; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=8; i <= 6; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I5" && battleshipdirection == "VD") {
        for (int i=4, j=8; i <= 7; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=8; i <= 7; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I6" && battleshipdirection == "VD") {
        for (int i=5, j=8; i <= 8; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=8; i <= 8; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I7" && battleshipdirection == "VD") {
        for (int i=6, j=8; i <= 9; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=8; i <= 9; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J1" && battleshipdirection == "VD") {
        for (int i=0, j=9; i <= 3; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=0, j=9; i <= 3; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J2" && battleshipdirection == "VD") {
        for (int i=1, j=9; i <= 4; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=1, j=9; i <= 4; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J3" && battleshipdirection == "VD") {
        for (int i=3, j=9; i <= 5; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=9; i <= 5; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J4" && battleshipdirection == "VD") {
        for (int i=3, j=9; i <= 6; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=9; i <= 6; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J5" && battleshipdirection == "VD") {
        for (int i=4, j=9; i <= 7; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=9; i <= 7; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J6" && battleshipdirection == "VD") {
        for (int i=5, j=9; i <= 8; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=9; i <= 8; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J7" && battleshipdirection == "VD") {
        for (int i=6, j=9; i <= 9; i++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=9; i <= 9; i++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A10" && battleshipdirection == "VU") {
        for (int i=9, j=0; i >= 6; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=9, j=0; i >= 6; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A9" && battleshipdirection == "VU") {
        for (int i=8, j=0; i >= 5; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=8, j=0; i >= 5; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A8" && battleshipdirection == "VU") {
        for (int i=7, j=0; i >= 4; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=7, j=0; i >= 4; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A7" && battleshipdirection == "VU") {
        for (int i=6, j=0; i >= 3; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=0; i >= 3; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A6" && battleshipdirection == "VU") {
        for (int i=5, j=0; i >= 2; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=0; i >= 2; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A5" && battleshipdirection == "VU") {
        for (int i=4, j=0; i >= 1; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=0; i >= 1; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A4" && battleshipdirection == "VU") {
        for (int i=3, j=0; i >= 0; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=0; i >= 0; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B10" && battleshipdirection == "VU") {
        for (int i=9, j=1; i >= 0; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=9, j=1; i >= 0; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B9" && battleshipdirection == "VU") {
        for (int i=8, j=1; i >= 5; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=8, j=1; i >= 5; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B8" && battleshipdirection == "VU") {
        for (int i=7, j=1; i >= 4; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=7, j=1; i >= 4; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B7" && battleshipdirection == "VU") {
        for (int i=6, j=1; i >= 3; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=1; i >= 3; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B6" && battleshipdirection == "VU") {
        for (int i=5, j=1; i >= 2; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=1; i >= 2; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B5" && battleshipdirection == "VU") {
        for (int i=4, j=1; i >= 1; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=1; i >= 1; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B4" && battleshipdirection == "VU") {
        for (int i=3, j=1; i >= 0; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=1; i >= 0; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C10" && battleshipdirection == "VU") {
        for (int i=9, j=2; i >= 6; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=9, j=2; i >= 6; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C9" && battleshipdirection == "VU") {
        for (int i=8, j=2; i >= 5; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=8, j=2; i >= 5; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C8" && battleshipdirection == "VU") {
        for (int i=7, j=2; i >= 4; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=7, j=2; i >= 4; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C7" && battleshipdirection == "VU") {
        for (int i=6, j=2; i >= 3; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=2; i >= 3; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C6" && battleshipdirection == "VU") {
        for (int i=5, j=2; i >= 2; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=2; i >= 2; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C5" && battleshipdirection == "VU") {
        for (int i=4, j=2; i >= 1; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=2; i >= 1; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C4" && battleshipdirection == "VU") {
        for (int i=3, j=2; i >= 0; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=2; i >= 0; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D10" && battleshipdirection == "VU") {
        for (int i=9, j=3; i >= 6; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=9, j=3; i >= 6; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D9" && battleshipdirection == "VU") {
        for (int i=8, j=3; i >= 5; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=8, j=3; i >= 5; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D8" && battleshipdirection == "VU") {
        for (int i=7, j=3; i >= 4; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=7, j=3; i >= 4; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D7" && battleshipdirection == "VU") {
        for (int i=6, j=3; i >= 3; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=3; i >= 3; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D6" && battleshipdirection == "VU") {
        for (int i=5, j=3; i >= 2; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=3; i >= 2; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D5" && battleshipdirection == "VU") {
        for (int i=4, j=3; i >= 1; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=3; i >= 1; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D4" && battleshipdirection == "VU") {
        for (int i=3, j=3; i >= 0; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=3; i >= 0; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E10" && battleshipdirection == "VU") {
        for (int i=9, j=4; i >= 6; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=9, j=4; i >= 6; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E9" && battleshipdirection == "VU") {
        for (int i=8, j=4; i >= 5; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=8, j=4; i >= 5; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E8" && battleshipdirection == "VU") {
        for (int i=7, j=4; i >= 4; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=7, j=4; i >= 4; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E7" && battleshipdirection == "VU") {
        for (int i=6, j=4; i >= 3; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=4; i >= 3; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E6" && battleshipdirection == "VU") {
        for (int i=5, j=4; i >= 2; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=4; i >= 2; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E5" && battleshipdirection == "VU") {
        for (int i=4, j=4; i >= 1; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=4; i >= 1; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E4" && battleshipdirection == "VU") {
        for (int i=3, j=4; i >= 0; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=4; i >= 0; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F10" && battleshipdirection == "VU") {
        for (int i=9, j=5; i >= 6; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=9, j=5; i >= 6; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F9" && battleshipdirection == "VU") {
        for (int i=8, j=5; i >= 5; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=8, j=5; i >= 5; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F8" && battleshipdirection == "VU") {
        for (int i=7, j=5; i >= 4; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=7, j=5; i >= 4; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F7" && battleshipdirection == "VU") {
        for (int i=6, j=5; i >= 3; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=5; i >= 3; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F6" && battleshipdirection == "VU") {
        for (int i=5, j=5; i >= 2; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=5; i >= 2; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F5" && battleshipdirection == "VU") {
        for (int i=4, j=5; i >= 1; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=5; i >= 1; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F4" && battleshipdirection == "VU") {
        for (int i=3, j=5; i >= 0; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=5; i >= 0; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G10" && battleshipdirection == "VU") {
        for (int i=9, j=6; i >= 6; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=9, j=6; i >= 6; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G9" && battleshipdirection == "VU") {
        for (int i=8, j=6; i >= 5; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=8, j=6; i >= 5; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G8" && battleshipdirection == "VU") {
        for (int i=7, j=6; i >= 4; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=7, j=6; i >= 4; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G7" && battleshipdirection == "VU") {
        for (int i=6, j=6; i >= 3; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=6; i >= 3; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G6" && battleshipdirection == "VU") {
        for (int i=5, j=6; i >= 2; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=6; i >= 2; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G5" && battleshipdirection == "VU") {
        for (int i=4, j=6; i >= 1; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=6; i >= 1; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G4" && battleshipdirection == "VU") {
        for (int i=3, j=6; i >= 0; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=6; i >= 0; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H10" && battleshipdirection == "VU") {
        for (int i=9, j=7; i >= 6; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=9, j=7; i >= 6; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H9" && battleshipdirection == "VU") {
        for (int i=8, j=7; i >= 5; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=8, j=7; i >= 5; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H8" && battleshipdirection == "VU") {
        for (int i=7, j=7; i >= 4; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=7, j=7; i >= 4; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H7" && battleshipdirection == "VU") {
        for (int i=6, j=7; i >= 3; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=7; i >= 3; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H6" && battleshipdirection == "VU") {
        for (int i=5, j=7; i >= 2; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=7; i >= 2; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H5" && battleshipdirection == "VU") {
        for (int i=4, j=7; i >= 1; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=7; i >= 1; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H4" && battleshipdirection == "VU") {
        for (int i=3, j=7; i >= 0; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=7; i >= 0; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I10" && battleshipdirection == "VU") {
        for (int i=9, j=8; i >= 6; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=9, j=8; i >= 6; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I9" && battleshipdirection == "VU") {
        for (int i=8, j=8; i >= 5; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=8, j=8; i >= 5; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I8" && battleshipdirection == "VU") {
        for (int i=7, j=8; i >= 4; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=7, j=8; i >= 4; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I7" && battleshipdirection == "VU") {
        for (int i=6, j=8; i >= 3; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=8; i >= 3; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I6" && battleshipdirection == "VU") {
        for (int i=5, j=8; i >= 2; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=8; i >= 2; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I5" && battleshipdirection == "VU") {
        for (int i=4, j=8; i >= 1; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=8; i >= 1; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I4" && battleshipdirection == "VU") {
        for (int i=3, j=8; i >= 0; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=8; i >= 0; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J10" && battleshipdirection == "VU") {
        for (int i=9, j=9; i >= 6; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=9, j=9; i >= 6; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J9" && battleshipdirection == "VU") {
        for (int i=8, j=9; i >= 5; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=8, j=9; i >= 5; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J8" && battleshipdirection == "VU") {
        for (int i=7, j=9; i >= 4; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=7, j=9; i >= 4; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J7" && battleshipdirection == "VU") {
        for (int i=6, j=9; i >= 3; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=6, j=9; i >= 3; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J6" && battleshipdirection == "VU") {
        for (int i=5, j=9; i >= 2; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=5, j=9; i >= 2; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J5" && battleshipdirection == "VU") {
        for (int i=4, j=9; i >= 1; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=4, j=9; i >= 1; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J4" && battleshipdirection == "VU") {
        for (int i=3, j=9; i >= 0; i--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i=3, j=9; i >= 0; i--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A1" && battleshipdirection == "HR"){
        for(int i=0, j=0; j <= 3; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=0; j <= 3; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A2" && battleshipdirection == "HR"){
        for(int i=1, j=0; j <= 3; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=0; j <= 3; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A3" && battleshipdirection == "HR"){
        for(int i=2, j=0; j <= 3; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=0; j <= 3; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A4" && battleshipdirection == "HR"){
        for(int i=3, j=0; j <= 3; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=0; j <= 3; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A5" && battleshipdirection == "HR"){
        for(int i=4, j=0; j <= 3; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=0; j <= 3; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A6" && battleshipdirection == "HR"){
        for(int i=5, j=0; j <= 3; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=5, j=0; j <= 3; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A7" && battleshipdirection == "HR"){
        for(int i=6, j=0; j <= 3; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=0; j <= 3; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A8" && battleshipdirection == "HR"){
        for(int i=7, j=0; j <= 3; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=0; j <= 3; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A9" && battleshipdirection == "HR"){
        for(int i=8, j=0; j <= 3; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=0; j <= 3; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "A10" && battleshipdirection == "HR"){
        for(int i=9, j=0; j <= 3; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=0; j <= 3; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B1" && battleshipdirection == "HR"){
        for(int i=0, j=1; j <= 4; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=1; j <= 4; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B2" && battleshipdirection == "HR"){
        for(int i=1, j=1; j <= 4; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=1; j <= 4; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B3" && battleshipdirection == "HR"){
        for(int i=2, j=1; j <= 4; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=1; j <= 4; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B4" && battleshipdirection == "HR"){
        for(int i=3, j=1; j <= 4; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=1; j <= 4; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B5" && battleshipdirection == "HR"){
        for(int i=4, j=1; j <= 4; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=1; j <= 4; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B6" && battleshipdirection == "HR"){
        for(int i=5, j=1; j <= 4; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=5, j=1; j <= 4; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B7" && battleshipdirection == "HR"){
        for(int i=6, j=1; j <= 4; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=1; j <= 4; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B8" && battleshipdirection == "HR"){
        for(int i=7, j=1; j <= 4; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=1; j <= 4; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B9" && battleshipdirection == "HR"){
        for(int i=8, j=1; j <= 4; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=1; j <= 4; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "B10" && battleshipdirection == "HR"){
        for(int i=9, j=1; j <= 4; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=1; j <= 4; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C1" && battleshipdirection == "HR"){
        for(int i=0, j=2; j <= 5; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=2; j <= 5; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C2" && battleshipdirection == "HR"){
        for(int i=1, j=2; j <= 5; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=2; j <= 5; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C3" && battleshipdirection == "HR"){
        for(int i=2, j=2; j <= 5; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=2; j <= 5; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C4" && battleshipdirection == "HR"){
        for(int i=3, j=2; j <= 5; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=2; j <= 5; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C5" && battleshipdirection == "HR"){
        for(int i=4, j=2; j <= 5; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=2; j <= 5; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C6" && battleshipdirection == "HR"){
        for(int i=5, j=2; j <= 5; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=50, j=2; j <= 5; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C7" && battleshipdirection == "HR"){
        for(int i=6, j=2; j <= 5; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=2; j <= 5; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C8" && battleshipdirection == "HR"){
        for(int i=7, j=2; j <= 5; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=2; j <= 5; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C9" && battleshipdirection == "HR"){
        for(int i=8, j=2; j <= 5; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=2; j <= 5; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "C10" && battleshipdirection == "HR"){
        for(int i=9, j=2; j <= 5; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=2; j <= 5; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D1" && battleshipdirection == "HR"){
        for(int i=0, j=3; j <= 6; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=3; j <= 6; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D2" && battleshipdirection == "HR"){
        for(int i=1, j=3; j <= 6; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=3; j <= 6; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D3" && battleshipdirection == "HR"){
        for(int i=2, j=3; j <= 6; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=3; j <= 6; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D4" && battleshipdirection == "HR"){
        for(int i=3, j=3; j <= 6; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=3; j <= 6; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D5" && battleshipdirection == "HR"){
        for(int i=4, j=3; j <= 6; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=3; j <= 6; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D6" && battleshipdirection == "HR"){
        for(int i=5, j=3; j <= 6; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=5, j=3; j <= 6; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D7" && battleshipdirection == "HR"){
        for(int i=6, j=3; j <= 6; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=3; j <= 6; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D8" && battleshipdirection == "HR"){
        for(int i=7, j=3; j <= 6; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=3; j <= 6; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D9" && battleshipdirection == "HR"){
        for(int i=8, j=3; j <= 6; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=3; j <= 6; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D10" && battleshipdirection == "HR"){
        for(int i=9, j=3; j <= 6; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=3; j <= 6; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E1" && battleshipdirection == "HR"){
        for(int i=0, j=4; j <= 7; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=4; j <= 7; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E2" && battleshipdirection == "HR"){
        for(int i=1, j=4; j <= 7; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=4; j <= 7; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E3" && battleshipdirection == "HR"){
        for(int i=2, j=4; j <= 7; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=4; j <= 7; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E4" && battleshipdirection == "HR"){
        for(int i=3, j=4; j <= 7; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=4; j <= 7; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E5" && battleshipdirection == "HR"){
        for(int i=4, j=4; j <= 7; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=4; j <= 7; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E6" && battleshipdirection == "HR"){
        for(int i=5, j=4; j <= 7; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=5, j=4; j <= 7; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E7" && battleshipdirection == "HR"){
        for(int i=6, j=4; j <= 7; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=4; j <= 7; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E8" && battleshipdirection == "HR"){
        for(int i=7, j=4; j <= 7; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=4; j <= 7; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E9" && battleshipdirection == "HR"){
        for(int i=8, j=4; j <= 7; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=4; j <= 7; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E10" && battleshipdirection == "HR"){
        for(int i=9, j=4; j <= 7; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=4; j <= 7; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F1" && battleshipdirection == "HR"){
        for(int i=0, j=5; j <= 8; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=5; j <= 8; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F2" && battleshipdirection == "HR"){
        for(int i=1, j=5; j <= 8; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=5; j <= 8; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F3" && battleshipdirection == "HR"){
        for(int i=2, j=5; j <= 8; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=5; j <= 8; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F4" && battleshipdirection == "HR"){
        for(int i=3, j=5; j <= 8; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=5; j <= 8; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F5" && battleshipdirection == "HR"){
        for(int i=4, j=5; j <= 8; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=5; j <= 8; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F6" && battleshipdirection == "HR"){
        for(int i=7, j=5; j <= 8; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=5; j <= 8; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F7" && battleshipdirection == "HR"){
        for(int i=6, j=5; j <= 8; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=5; j <= 8; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F8" && battleshipdirection == "HR"){
        for(int i=7, j=5; j <= 8; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=5; j <= 8; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F9" && battleshipdirection == "HR"){
        for(int i=8, j=5; j <= 8; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=5; j <= 8; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F10" && battleshipdirection == "HR"){
        for(int i=9, j=5; j <= 8; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=5; j <= 8; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G1" && battleshipdirection == "HR"){
        for(int i=0, j=6; j <= 9; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=6; j <= 9; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G2" && battleshipdirection == "HR"){
        for(int i=1, j=6; j <= 9; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=6; j <= 9; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G3" && battleshipdirection == "HR"){
        for(int i=2, j=6; j <= 9; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=6; j <= 9; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G4" && battleshipdirection == "HR"){
        for(int i=3, j=6; j <= 9; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=6; j <= 9; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G5" && battleshipdirection == "HR"){
        for(int i=4, j=6; j <= 9; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=6; j <= 9; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G6" && battleshipdirection == "HR"){
        for(int i=7, j=6; j <= 9; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=6; j <= 9; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G7" && battleshipdirection == "HR"){
        for(int i=6, j=6; j <= 9; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=6; j <= 9; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G8" && battleshipdirection == "HR"){
        for(int i=7, j=6; j <= 9; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=6; j <= 9; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G9" && battleshipdirection == "HR"){
        for(int i=8, j=6; j <= 9; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=6; j <= 9; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G10" && battleshipdirection == "HR"){
        for(int i=9, j=6; j <= 9; j++){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=6; j <= 9; j++){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J10" && battleshipdirection == "HL"){
        for(int i=9, j=9; j >= 6; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=9; j >= 6; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J9" && battleshipdirection == "HL"){
        for(int i=8, j=9; j >= 6; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=9; j >= 6; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J8" && battleshipdirection == "HL"){
        for(int i=9, j=7; j >= 4; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=9; j >= 4; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J7" && battleshipdirection == "HL"){
        for(int i=6, j=9; j >= 6; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=9; j >= 6; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J6" && battleshipdirection == "HL"){
        for(int i=5, j=9; j >= 6; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=5, j=9; j >= 6; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J5" && battleshipdirection == "HL"){
        for(int i=4, j=9; j >= 6; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=9; j >= 6; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J4" && battleshipdirection == "HL"){
        for(int i=3, j=9; j >= 6; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=9; j >= 6; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J3" && battleshipdirection == "HL"){
        for(int i=2, j=9; j >= 6; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=9; j >= 6; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J2" && battleshipdirection == "HL"){
        for(int i=1, j=9; j >= 6; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=9; j >= 6; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "J1" && battleshipdirection == "HL"){
        for(int i=0, j=9; j >= 6; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=9; j >= 6; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I10" && battleshipdirection == "HL"){
        for(int i=9, j=8; j >= 5; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=8; j >= 5; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I9" && battleshipdirection == "HL"){
        for(int i=8, j=8; j >= 5; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=8; j >= 5; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I8" && battleshipdirection == "HL"){
        for(int i=7, j=8; j >= 5; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=8; j >= 5; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I7" && battleshipdirection == "HL"){
        for(int i=6, j=8; j >= 5; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6,j=8; j >= 5; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I6" && battleshipdirection == "HL"){
        for(int i=5, j=8; j >= 5; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=5, j=8; j >= 5; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I5" && battleshipdirection == "HL"){
        for(int i=4, j=8; j >= 5; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=8; j >= 5; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I4" && battleshipdirection == "HL"){
        for(int i=3, j=8; j >= 5; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=8; j >= 5; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I3" && battleshipdirection == "HL"){
        for(int i=2, j=8; j >= 5; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=8; j >= 5; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I2" && battleshipdirection == "HL"){
        for(int i=1, j=8; j >= 5; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=8; j >= 5; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "I1" && battleshipdirection == "HL"){
        for(int i=0, j=8; j >= 5; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=8; j >= 5; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H10" && battleshipdirection == "HL"){
        for(int i=9, j=7; j >= 4; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=7; j >= 4; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H9" && battleshipdirection == "HL"){
        for(int i=8, j=7; j >= 4; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=7; j >= 4; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H8" && battleshipdirection == "HL"){
        for(int i=7, j=7; j >= 4; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=7; j >= 4; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H7" && battleshipdirection == "HL"){
        for(int i=6, j=7; j >= 4; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=7; j >= 4; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H6" && battleshipdirection == "HL"){
        for(int i=5, j=7; j >= 4; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=5, j=7; j >= 4; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H5" && battleshipdirection == "HL"){
        for(int i=4, j=7; j >= 4; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=7; j >= 4; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H4" && battleshipdirection == "HL"){
        for(int i=3, j=7; j >= 4; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=7; j >= 4; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H3" && battleshipdirection == "HL"){
        for(int i=2, j=7; j >= 4; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=7; j >= 4; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H2" && battleshipdirection == "HL"){
        for(int i=1, j=7; j >= 4; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=7; j >= 4; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "H1" && battleshipdirection == "HL"){
        for(int i=0, j=7; j >= 4; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=7; j >= 4; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G10" && battleshipdirection == "HL"){
        for(int i=9, j=6; j >= 3; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=6; j >= 3; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G9" && battleshipdirection == "HL"){
        for(int i=8, j=6; j >= 3; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=6; j >= 3; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G8" && battleshipdirection == "HL"){
        for(int i=7, j=6; j >= 3; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=6; j >= 3; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G7" && battleshipdirection == "HL"){
        for(int i=6, j=6; j >= 3; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=6; j >= 3; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G6" && battleshipdirection == "HL"){
        for(int i=5, j=6; j >= 3; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=5, j=6; j >= 3; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G5" && battleshipdirection == "HL"){
        for(int i=4, j=6; j >= 3; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=6; j >= 3; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G4" && battleshipdirection == "HL"){
        for(int i=3, j=6; j >= 3; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=6; j >= 3; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G3" && battleshipdirection == "HL"){
        for(int i=2, j=6; j >= 3; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=6; j >= 3; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G2" && battleshipdirection == "HL"){
        for(int i=1, j=6; j >= 3; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=6; j >= 3; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "G1" && battleshipdirection == "HL"){
        for(int i=0, j=6; j >= 3; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=6; j >= 3; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F10" && battleshipdirection == "HL"){
        for(int i=9, j=5; j >= 2; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=5; j >= 2; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F9" && battleshipdirection == "HL"){
        for(int i=8, j=5; j >= 2; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=5; j >= 2; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F8" && battleshipdirection == "HL"){
        for(int i=7, j=5; j >= 2; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=5; j >= 2; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F7" && battleshipdirection == "HL"){
        for(int i=6, j=5; j >= 2; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=5; j >= 2; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F6" && battleshipdirection == "HL"){
        for(int i=5, j=5; j >= 2; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=5, j=5; j >= 2; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F5" && battleshipdirection == "HL"){
        for(int i=4, j=5; j >= 2; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=5; j >= 2; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F4" && battleshipdirection == "HL"){
        for(int i=3, j=5; j >= 2; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=5; j >= 2; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F3" && battleshipdirection == "HL"){
        for(int i=2, j=5; j >= 2; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=5; j >= 2; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F2" && battleshipdirection == "HL"){
        for(int i=1, j=5; j >= 2; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=5; j >= 2; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "F1" && battleshipdirection == "HL"){
        for(int i=0, j=5; j >= 2; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=5; j >= 2; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E10" && battleshipdirection == "HL"){
        for(int i=9, j=4; j >= 1; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=4; j >= 1; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E9" && battleshipdirection == "HL"){
        for(int i=8, j=4; j >= 1; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=4; j >= 1; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E8" && battleshipdirection == "HL"){
        for(int i=7, j=4; j >= 1; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=4; j >= 1; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E7" && battleshipdirection == "HL"){
        for(int i=6, j=4; j >= 1; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=4; j >= 1; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E6" && battleshipdirection == "HL"){
        for(int i=5, j=4; j >= 1; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=5, j=4; j >= 1; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E5" && battleshipdirection == "HL"){
        for(int i=4, j=4; j >= 1; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=4; j >= 1; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E4" && battleshipdirection == "HL"){
        for(int i=3, j=4; j >= 1; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=4; j >= 1; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E3" && battleshipdirection == "HL"){
        for(int i=2, j=4; j >= 1; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=4; j >= 1; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E2" && battleshipdirection == "HL"){
        for(int i=1, j=4; j >= 1; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=4; j >= 1; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "E1" && battleshipdirection == "HL"){
        for(int i=0, j=4; j >= 1; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=4; j >= 1; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D10" && battleshipdirection == "HL"){
        for(int i=9, j=3; j >= 0; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=9, j=3; j >= 0; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D9" && battleshipdirection == "HL"){
        for(int i=8, j=3; j >= 0; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=8, j=3; j >= 0; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D8" && battleshipdirection == "HL"){
        for(int i=7, j=3; j >= 0; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=7, j=3; j >= 0; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D7" && battleshipdirection == "HL"){
        for(int i=6, j=3; j >= 0; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=6, j=4; j >= 0; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D6" && battleshipdirection == "HL"){
        for(int i=5, j=3; j >= 0; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=5, j=3; j >= 0; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D5" && battleshipdirection == "HL"){
        for(int i=4, j=3; j >= 0; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=4, j=3; j >= 0; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D4" && battleshipdirection == "HL"){
        for(int i=3, j=3; j >= 0; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=3, j=3; j >= 0; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D3" && battleshipdirection == "HL"){
        for(int i=2, j=3; j >= 0; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=2, j=3; j >= 0; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D2" && battleshipdirection == "HL"){
        for(int i=1, j=3; j >= 0; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=1, j=3; j >= 0; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (battleshiplocation == "D1" && battleshipdirection == "HL"){
        for(int i=0, j=3; j >= 0; j--){
            if (table [i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for(int i=0, j=3; j >= 0; j--){
            if (table [i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
}

int shiplocation::Cruiser() {
    if (cruiserlocation == "A1" && cruiserdirection == "VD") {
        for (int i = 0, j = 0; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 0; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A2" && cruiserdirection == "VD") {
        for (int i = 1, j = 0; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 0; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A3" && cruiserdirection == "VD") {
        for (int i = 2, j = 0; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 0; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A4" && cruiserdirection == "VD") {
        for (int i = 3, j = 0; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 0; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A5" && cruiserdirection == "VD") {
        for (int i = 4, j = 0; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 0; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A6" && cruiserdirection == "VD") {
        for (int i = 5, j = 0; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 0; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A7" && cruiserdirection == "VD") {
        for (int i = 6, j = 0; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 0; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A8" && cruiserdirection == "VD") {
        for (int i = 7, j = 0; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 0; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B1" && cruiserdirection == "VD") {
        for (int i = 0, j = 1; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 1; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B2" && cruiserdirection == "VD") {
        for (int i = 1, j = 1; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 1; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B3" && cruiserdirection == "VD") {
        for (int i = 2, j = 1; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 1; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B4" && cruiserdirection == "VD") {
        for (int i = 3, j = 1; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 1; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B5" && cruiserdirection == "VD") {
        for (int i = 4, j = 1; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 1; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B6" && cruiserdirection == "VD") {
        for (int i = 5, j = 1; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 1; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B7" && cruiserdirection == "VD") {
        for (int i = 6, j = 1; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 1; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B8" && cruiserdirection == "VD") {
        for (int i = 7, j = 1; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i =7, j = 1; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C1" && cruiserdirection == "VD") {
        for (int i = 0, j = 2; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 2; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C2" && cruiserdirection == "VD") {
        for (int i = 1, j = 2; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 2; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C3" && cruiserdirection == "VD") {
        for (int i = 2, j = 2; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C4" && cruiserdirection == "VD") {
        for (int i = 3, j = 2; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C5" && cruiserdirection == "VD") {
        for (int i = 4, j = 2; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C6" && cruiserdirection == "VD") {
        for (int i = 5, j = 2; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 2; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C7" && cruiserdirection == "VD") {
        for (int i = 6, j = 2; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C8" && cruiserdirection == "VD") {
        for (int i = 7, j = 2; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D1" && cruiserdirection == "VD") {
        for (int i = 0, j = 3; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 3; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D2" && cruiserdirection == "VD") {
        for (int i = 1, j = 3; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 3; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D3" && cruiserdirection == "VD") {
        for (int i = 2, j = 3; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D4" && cruiserdirection == "VD") {
        for (int i = 3, j = 3; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D5" && cruiserdirection == "VD") {
        for (int i = 4, j = 3; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D6" && cruiserdirection == "VD") {
        for (int i = 5, j = 3; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D7" && cruiserdirection == "VD") {
        for (int i = 6, j = 3; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D8" && cruiserdirection == "VD") {
        for (int i = 7, j = 3; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E1" && cruiserdirection == "VD") {
        for (int i = 0, j = 4; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 4; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E2" && cruiserdirection == "VD") {
        for (int i = 1, j = 4; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 4; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E3" && cruiserdirection == "VD") {
        for (int i = 2, j = 4; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 4; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E4" && cruiserdirection == "VD") {
        for (int i = 3, j = 4; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E5" && cruiserdirection == "VD") {
        for (int i = 4, j = 4; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E6" && cruiserdirection == "VD") {
        for (int i = 5, j = 4; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E7" && cruiserdirection == "VD") {
        for (int i = 6, j = 4; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E8" && cruiserdirection == "VD") {
        for (int i = 7, j = 4; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F1" && cruiserdirection == "VD") {
        for (int i = 0, j = 5; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 5; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F2" && cruiserdirection == "VD") {
        for (int i = 1, j = 5; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 5; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F3" && cruiserdirection == "VD") {
        for (int i = 2, j = 5; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F4" && cruiserdirection == "VD") {
        for (int i = 3, j = 5; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F5" && cruiserdirection == "VD") {
        for (int i = 4, j = 5; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = battleship;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F6" && cruiserdirection == "VD") {
        for (int i = 5, j = 5; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F7" && cruiserdirection == "VD") {
        for (int i = 6, j = 5; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F8" && cruiserdirection == "VD") {
        for (int i = 7, j = 5; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G1" && cruiserdirection == "VD") {
        for (int i = 0, j = 6; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 6; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G2" && cruiserdirection == "VD") {
        for (int i = 1, j = 6; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 6; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G3" && cruiserdirection == "VD") {
        for (int i = 2, j = 6; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G4" && cruiserdirection == "VD") {
        for (int i = 3, j = 6; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G5" && cruiserdirection == "VD") {
        for (int i = 4, j = 6; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G6" && cruiserdirection == "VD") {
        for (int i = 5, j = 6; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G7" && cruiserdirection == "VD") {
        for (int i = 6, j = 6; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G8" && cruiserdirection == "VD") {
        for (int i = 7, j = 6; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H1" && cruiserdirection == "VD") {
        for (int i = 0, j = 7; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 7; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H2" && cruiserdirection == "VD") {
        for (int i = 1, j = 7; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 7; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H3" && cruiserdirection == "VD") {
        for (int i = 2, j = 7; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H4" && cruiserdirection == "VD") {
        for (int i = 3, j = 7; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H5" && cruiserdirection == "VD") {
        for (int i = 4, j = 7; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H6" && cruiserdirection == "VD") {
        for (int i = 5, j = 7; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H7" && cruiserdirection == "VD") {
        for (int i = 6, j = 7; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H8" && cruiserdirection == "VD") {
        for (int i = 7, j = 7; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I1" && cruiserdirection == "VD") {
        for (int i = 0, j = 8; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 8; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I2" && cruiserdirection == "VD") {
        for (int i = 1, j = 8; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 8; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I3" && cruiserdirection == "VD") {
        for (int i = 2, j = 8; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 8; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I4" && cruiserdirection == "VD") {
        for (int i = 3, j = 8; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 8; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I5" && cruiserdirection == "VD") {
        for (int i = 4, j = 8; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 8; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I6" && cruiserdirection == "VD") {
        for (int i = 5, j = 8; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 8; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I7" && cruiserdirection == "VD") {
        for (int i = 6, j = 8; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 8; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I8" && cruiserdirection == "VD") {
        for (int i = 7, j = 8; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 8; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J1" && cruiserdirection == "VD") {
        for (int i = 0, j = 9; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 9; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J2" && cruiserdirection == "VD") {
        for (int i = 1, j = 9; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 9; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J3" && cruiserdirection == "VD") {
        for (int i = 3, j = 9; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J4" && cruiserdirection == "VD") {
        for (int i = 3, j = 9; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J5" && cruiserdirection == "VD") {
        for (int i = 4, j = 9; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 9; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J6" && cruiserdirection == "VD") {
        for (int i = 5, j = 9; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 9; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J7" && cruiserdirection == "VD") {
        for (int i = 6, j = 9; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 9; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J8" && cruiserdirection == "VD") {
        for (int i = 7, j = 9; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 9; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A10" && cruiserdirection == "VU") {
        for (int i = 9, j = 0; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 0; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A9" && cruiserdirection == "VU") {
        for (int i = 8, j = 0; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 0; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A8" && cruiserdirection == "VU") {
        for (int i = 7, j = 0; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 0; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A7" && cruiserdirection == "VU") {
        for (int i = 6, j = 0; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 0; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A6" && cruiserdirection == "VU") {
        for (int i = 5, j = 0; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 0; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A5" && cruiserdirection == "VU") {
        for (int i = 4, j = 0; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 0; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A4" && cruiserdirection == "VU") {
        for (int i = 3, j = 0; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 0; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A3" && cruiserdirection == "VU") {
        for (int i = 2, j = 0; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 0; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B10" && cruiserdirection == "VU") {
        for (int i = 9, j = 1; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 1; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B9" && cruiserdirection == "VU") {
        for (int i = 8, j = 1; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 1; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B8" && cruiserdirection == "VU") {
        for (int i = 7, j = 1; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 1; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B7" && cruiserdirection == "VU") {
        for (int i = 6, j = 1; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 1; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B6" && cruiserdirection == "VU") {
        for (int i = 5, j = 1; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 1; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B5" && cruiserdirection == "VU") {
        for (int i = 4, j = 1; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 1; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B4" && cruiserdirection == "VU") {
        for (int i = 3, j = 1; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 1; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B3" && cruiserdirection == "VU") {
        for (int i = 2, j = 1; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 1; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C10" && cruiserdirection == "VU") {
        for (int i = 9, j = 2; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 2; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C9" && cruiserdirection == "VU") {
        for (int i = 8, j = 2; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 2; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C8" && cruiserdirection == "VU") {
        for (int i = 7, j = 2; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C7" && cruiserdirection == "VU") {
        for (int i = 6, j = 2; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C6" && cruiserdirection == "VU") {
        for (int i = 5, j = 2; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 2; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C5" && cruiserdirection == "VU") {
        for (int i = 4, j = 2; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C4" && cruiserdirection == "VU") {
        for (int i = 3, j = 2; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C3" && cruiserdirection == "VU") {
        for (int i = 2, j = 2; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D10" && cruiserdirection == "VU") {
        for (int i = 9, j = 3; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 3; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D9" && cruiserdirection == "VU") {
        for (int i = 8, j = 3; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 3; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D8" && cruiserdirection == "VU") {
        for (int i = 7, j = 3; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D7" && cruiserdirection == "VU") {
        for (int i = 6, j = 3; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D6" && cruiserdirection == "VU") {
        for (int i = 5, j = 3; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D5" && cruiserdirection == "VU") {
        for (int i = 4, j = 3; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D4" && cruiserdirection == "VU") {
        for (int i = 3, j = 3; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D3" && cruiserdirection == "VU") {
        for (int i = 2, j = 3; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E10" && cruiserdirection == "VU") {
        for (int i = 9, j = 4; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 4; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E9" && cruiserdirection == "VU") {
        for (int i = 8, j = 4; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 4; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E8" && cruiserdirection == "VU") {
        for (int i = 7, j = 4; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E7" && cruiserdirection == "VU") {
        for (int i = 6, j = 4; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E6" && cruiserdirection == "VU") {
        for (int i = 5, j = 4; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E5" && cruiserdirection == "VU") {
        for (int i = 4, j = 4; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E4" && cruiserdirection == "VU") {
        for (int i = 3, j = 4; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F10" && cruiserdirection == "VU") {
        for (int i = 9, j = 5; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 5; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F9" && cruiserdirection == "VU") {
        for (int i = 8, j = 5; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 5; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F8" && cruiserdirection == "VU") {
        for (int i = 7, j = 5; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F7" && cruiserdirection == "VU") {
        for (int i = 6, j = 5; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F6" && cruiserdirection == "VU") {
        for (int i = 5, j = 5; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F5" && cruiserdirection == "VU") {
        for (int i = 4, j = 5; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F4" && cruiserdirection == "VU") {
        for (int i = 3, j = 5; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F3" && cruiserdirection == "VU") {
        for (int i = 2, j = 5; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G10" && cruiserdirection == "VU") {
        for (int i = 9, j = 6; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 6; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G9" && cruiserdirection == "VU") {
        for (int i = 8, j = 6; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 6; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G8" && cruiserdirection == "VU") {
        for (int i = 7, j = 6; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G7" && cruiserdirection == "VU") {
        for (int i = 6, j = 6; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G6" && cruiserdirection == "VU") {
        for (int i = 5, j = 6; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G5" && cruiserdirection == "VU") {
        for (int i = 4, j = 6; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G4" && cruiserdirection == "VU") {
        for (int i = 3, j = 6; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G3" && cruiserdirection == "VU") {
        for (int i = 2, j = 6; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H10" && cruiserdirection == "VU") {
        for (int i = 9, j = 7; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 7; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H9" && cruiserdirection == "VU") {
        for (int i = 8, j = 7; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 7; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H8" && cruiserdirection == "VU") {
        for (int i = 7, j = 7; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H7" && cruiserdirection == "VU") {
        for (int i = 6, j = 7; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H6" && cruiserdirection == "VU") {
        for (int i = 5, j = 7; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H5" && cruiserdirection == "VU") {
        for (int i = 4, j = 7; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H4" && cruiserdirection == "VU") {
        for (int i = 3, j = 7; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H3" && cruiserdirection == "VU") {
        for (int i = 2, j = 7; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I10" && cruiserdirection == "VU") {
        for (int i = 9, j = 8; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 8; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I9" && cruiserdirection == "VU") {
        for (int i = 8, j = 8; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 8; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I8" && cruiserdirection == "VU") {
        for (int i = 7, j = 8; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 8; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I7" && cruiserdirection == "VU") {
        for (int i = 6, j = 8; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 8; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I6" && cruiserdirection == "VU") {
        for (int i = 5, j = 8; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 8; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I5" && cruiserdirection == "VU") {
        for (int i = 4, j = 8; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 8; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I4" && cruiserdirection == "VU") {
        for (int i = 3, j = 8; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 8; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I3" && cruiserdirection == "VU") {
        for (int i = 2, j = 8; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 8; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J10" && cruiserdirection == "VU") {
        for (int i = 9, j = 9; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 9; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J9" && cruiserdirection == "VU") {
        for (int i = 8, j = 9; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 9; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J8" && cruiserdirection == "VU") {
        for (int i = 7, j = 9; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 9; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J7" && cruiserdirection == "VU") {
        for (int i = 6, j = 9; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 9; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J6" && cruiserdirection == "VU") {
        for (int i = 5, j = 9; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 9; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J5" && cruiserdirection == "VU") {
        for (int i = 4, j = 9; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 9; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J4" && cruiserdirection == "VU") {
        for (int i = 3, j = 9; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J3" && cruiserdirection == "VU") {
        for (int i = 2, j = 9; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 9; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A1" && cruiserdirection == "HR") {
        for (int i = 0, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A2" && cruiserdirection == "HR") {
        for (int i = 1, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A3" && cruiserdirection == "HR") {
        for (int i = 2, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A4" && cruiserdirection == "HR") {
        for (int i = 3, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A5" && cruiserdirection == "HR") {
        for (int i = 4, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A6" && cruiserdirection == "HR") {
        for (int i = 5, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A7" && cruiserdirection == "HR") {
        for (int i = 6, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A8" && cruiserdirection == "HR") {
        for (int i = 7, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A9" && cruiserdirection == "HR") {
        for (int i = 8, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "A10" && cruiserdirection == "HR") {
        for (int i = 9, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B1" && cruiserdirection == "HR") {
        for (int i = 0, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B2" && cruiserdirection == "HR") {
        for (int i = 1, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B3" && cruiserdirection == "HR") {
        for (int i = 2, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B4" && cruiserdirection == "HR") {
        for (int i = 3, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B5" && cruiserdirection == "HR") {
        for (int i = 4, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B6" && cruiserdirection == "HR") {
        for (int i = 5, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B7" && cruiserdirection == "HR") {
        for (int i = 6, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B8" && cruiserdirection == "HR") {
        for (int i = 7, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B9" && cruiserdirection == "HR") {
        for (int i = 8, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "B10" && cruiserdirection == "HR") {
        for (int i = 9, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C1" && cruiserdirection == "HR") {
        for (int i = 0, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C2" && cruiserdirection == "HR") {
        for (int i = 1, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C3" && cruiserdirection == "HR") {
        for (int i = 2, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C4" && cruiserdirection == "HR") {
        for (int i = 3, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C5" && cruiserdirection == "HR") {
        for (int i = 4, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C6" && cruiserdirection == "HR") {
        for (int i = 5, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 50, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C7" && cruiserdirection == "HR") {
        for (int i = 6, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C8" && cruiserdirection == "HR") {
        for (int i = 7, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C9" && cruiserdirection == "HR") {
        for (int i = 8, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C10" && cruiserdirection == "HR") {
        for (int i = 9, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D1" && cruiserdirection == "HR") {
        for (int i = 0, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D2" && cruiserdirection == "HR") {
        for (int i = 1, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D3" && cruiserdirection == "HR") {
        for (int i = 2, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D4" && cruiserdirection == "HR") {
        for (int i = 3, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D5" && cruiserdirection == "HR") {
        for (int i = 4, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D6" && cruiserdirection == "HR") {
        for (int i = 5, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D7" && cruiserdirection == "HR") {
        for (int i = 6, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D8" && cruiserdirection == "HR") {
        for (int i = 7, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D9" && cruiserdirection == "HR") {
        for (int i = 8, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D10" && cruiserdirection == "HR") {
        for (int i = 9, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E1" && cruiserdirection == "HR") {
        for (int i = 0, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E2" && cruiserdirection == "HR") {
        for (int i = 1, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E3" && cruiserdirection == "HR") {
        for (int i = 2, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E4" && cruiserdirection == "HR") {
        for (int i = 3, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E5" && cruiserdirection == "HR") {
        for (int i = 4, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E6" && cruiserdirection == "HR") {
        for (int i = 5, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E7" && cruiserdirection == "HR") {
        for (int i = 6, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E8" && cruiserdirection == "HR") {
        for (int i = 7, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E9" && cruiserdirection == "HR") {
        for (int i = 8, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E10" && cruiserdirection == "HR") {
        for (int i = 9, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F1" && cruiserdirection == "HR") {
        for (int i = 0, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F2" && cruiserdirection == "HR") {
        for (int i = 1, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F3" && cruiserdirection == "HR") {
        for (int i = 2, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F4" && cruiserdirection == "HR") {
        for (int i = 3, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F5" && cruiserdirection == "HR") {
        for (int i = 4, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F6" && cruiserdirection == "HR") {
        for (int i = 5, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F7" && cruiserdirection == "HR") {
        for (int i = 6, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F8" && cruiserdirection == "HR") {
        for (int i = 7, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F9" && cruiserdirection == "HR") {
        for (int i = 8, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F10" && cruiserdirection == "HR") {
        for (int i = 9, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G1" && cruiserdirection == "HR") {
        for (int i = 0, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G2" && cruiserdirection == "HR") {
        for (int i = 1, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G3" && cruiserdirection == "HR") {
        for (int i = 2, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G4" && cruiserdirection == "HR") {
        for (int i = 3, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G5" && cruiserdirection == "HR") {
        for (int i = 4, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G6" && cruiserdirection == "HR") {
        for (int i = 5, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G7" && cruiserdirection == "HR") {
        for (int i = 6, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G8" && cruiserdirection == "HR") {
        for (int i = 7, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G9" && cruiserdirection == "HR") {
        for (int i = 8, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G10" && cruiserdirection == "HR") {
        for (int i = 9, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H1" && cruiserdirection == "HR") {
        for (int i = 0, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H2" && cruiserdirection == "HR") {
        for (int i = 1, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H3" && cruiserdirection == "HR") {
        for (int i = 2, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H4" && cruiserdirection == "HR") {
        for (int i = 3, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H5" && cruiserdirection == "HR") {
        for (int i = 4, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H6" && cruiserdirection == "HR") {
        for (int i = 5, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H7" && cruiserdirection == "HR") {
        for (int i = 6, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H8" && cruiserdirection == "HR") {
        for (int i = 7, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H9" && cruiserdirection == "HR") {
        for (int i = 8, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H10" && cruiserdirection == "HR") {
        for (int i = 9, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J10" && cruiserdirection == "HL"){
        for (int i = 9, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J9" && cruiserdirection == "HL") {
        for (int i = 8, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J8" && cruiserdirection == "HL") {
        for (int i = 7, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J7" && cruiserdirection == "HL") {
        for (int i = 6, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J6" && cruiserdirection == "HL") {
        for (int i = 5, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J5" && cruiserdirection == "HL") {
        for (int i = 4, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J4" && cruiserdirection == "HL") {
        for (int i = 3, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J3" && cruiserdirection == "HL") {
        for (int i = 2, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J2" && cruiserdirection == "HL") {
        for (int i = 1, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "J1" && cruiserdirection == "HL") {
        for (int i = 0, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I10" && cruiserdirection == "HL") {
        for (int i = 9, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I9" && cruiserdirection == "HL") {
        for (int i = 8, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I8" && cruiserdirection == "HL") {
        for (int i = 7, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I7" && cruiserdirection == "HL") {
        for (int i = 6, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I6" && cruiserdirection == "HL") {
        for (int i = 5, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I5" && cruiserdirection == "HL") {
        for (int i = 4, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I4" && cruiserdirection == "HL") {
        for (int i = 3, j = 8; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 8; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I3" && cruiserdirection == "HL") {
        for (int i = 2, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I2" && cruiserdirection == "HL") {
        for (int i = 1, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "I1" && cruiserdirection == "HL") {
        for (int i = 0, j = 8; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 8; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H10" && cruiserdirection == "HL") {
        for (int i = 9, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H9" && cruiserdirection == "HL") {
        for (int i = 8, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H8" && cruiserdirection == "HL") {
        for (int i = 7, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H7" && cruiserdirection == "HL") {
        for (int i = 6, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H6" && cruiserdirection == "HL") {
        for (int i = 5, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H5" && cruiserdirection == "HL") {
        for (int i = 4, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H4" && cruiserdirection == "HL") {
        for (int i = 3, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H3" && cruiserdirection == "HL") {
        for (int i = 2, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H2" && cruiserdirection == "HL") {
        for (int i = 1, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "H1" && cruiserdirection == "HL") {
        for (int i = 0, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G10" && cruiserdirection == "HL") {
        for (int i = 9, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G9" && cruiserdirection == "HL") {
        for (int i = 8, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G8" && cruiserdirection == "HL") {
        for (int i = 7, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G7" && cruiserdirection == "HL") {
        for (int i = 6, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G6" && cruiserdirection == "HL") {
        for (int i = 5, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G5" && cruiserdirection == "HL") {
        for (int i = 4, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G4" && cruiserdirection == "HL") {
        for (int i = 3, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G3" && cruiserdirection == "HL") {
        for (int i = 2, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G2" && cruiserdirection == "HL") {
        for (int i = 1, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "G1" && cruiserdirection == "HL") {
        for (int i = 0, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F10" && cruiserdirection == "HL") {
        for (int i = 9, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F9" && cruiserdirection == "HL") {
        for (int i = 8, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F8" && cruiserdirection == "HL") {
        for (int i = 7, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F7" && cruiserdirection == "HL") {
        for (int i = 6, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F6" && cruiserdirection == "HL") {
        for (int i = 5, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F5" && cruiserdirection == "HL") {
        for (int i = 4, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F4" && cruiserdirection == "HL") {
        for (int i = 3, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F3" && cruiserdirection == "HL") {
        for (int i = 2, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F2" && cruiserdirection == "HL") {
        for (int i = 1, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "F1" && cruiserdirection == "HL") {
        for (int i = 0, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E10" && cruiserdirection == "HL") {
        for (int i = 9, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E9" && cruiserdirection == "HL") {
        for (int i = 8, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E8" && cruiserdirection == "HL") {
        for (int i = 7, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E7" && cruiserdirection == "HL") {
        for (int i = 6, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E6" && cruiserdirection == "HL") {
        for (int i = 5, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E5" && cruiserdirection == "HL") {
        for (int i = 4, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E4" && cruiserdirection == "HL") {
        for (int i = 3, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E3" && cruiserdirection == "HL") {
        for (int i = 2, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E2" && cruiserdirection == "HL") {
        for (int i = 1, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "E1" && cruiserdirection == "HL") {
        for (int i = 0, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D10" && cruiserdirection == "HL") {
        for (int i = 9, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D9" && cruiserdirection == "HL") {
        for (int i = 8, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D8" && cruiserdirection == "HL") {
        for (int i = 7, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D7" && cruiserdirection == "HL") {
        for (int i = 6, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D6" && cruiserdirection == "HL") {
        for (int i = 5, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D5" && cruiserdirection == "HL") {
        for (int i = 4, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D4" && cruiserdirection == "HL") {
        for (int i = 3, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D3" && cruiserdirection == "HL") {
        for (int i = 2, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D2" && cruiserdirection == "HL") {
        for (int i = 1, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "D1" && cruiserdirection == "HL") {
        for (int i = 0, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C10" && cruiserdirection == "HL") {
        for (int i = 9, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C9" && cruiserdirection == "HL") {
        for (int i = 8, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C8" && cruiserdirection == "HL") {
        for (int i = 7, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C7" && cruiserdirection == "HL") {
        for (int i = 6, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C6" && cruiserdirection == "HL") {
        for (int i = 5, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C5" && cruiserdirection == "HL") {
        for (int i = 4, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C4" && cruiserdirection == "HL") {
        for (int i = 3, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C3" && cruiserdirection == "HL") {
        for (int i = 2, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C2" && cruiserdirection == "HL") {
        for (int i = 1, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (cruiserlocation == "C1" && cruiserdirection == "HL") {
        for (int i = 0, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }


}

int shiplocation::Submarine()  {
    if (submarinelocation == "A1" && submarinedirection == "VD") {
        for (int i = 0, j = 0; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 0; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A2" && submarinedirection == "VD") {
        for (int i = 1, j = 0; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 0; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A3" && submarinedirection == "VD") {
        for (int i = 2, j = 0; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 0; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A4" && submarinedirection == "VD") {
        for (int i = 3, j = 0; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 0; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A5" && submarinedirection == "VD") {
        for (int i = 4, j = 0; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 0; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A6" && submarinedirection == "VD") {
        for (int i = 5, j = 0; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 0; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A7" && submarinedirection == "VD") {
        for (int i = 6, j = 0; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 0; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A8" && submarinedirection == "VD") {
        for (int i = 7, j = 0; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 0; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B1" && submarinedirection == "VD") {
        for (int i = 0, j = 1; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 1; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B2" && submarinedirection == "VD") {
        for (int i = 1, j = 1; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 1; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B3" && submarinedirection == "VD") {
        for (int i = 2, j = 1; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 1; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B4" && submarinedirection == "VD") {
        for (int i = 3, j = 1; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 1; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B5" && submarinedirection == "VD") {
        for (int i = 4, j = 1; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 1; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B6" && submarinedirection == "VD") {
        for (int i = 5, j = 1; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 1; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B7" && submarinedirection == "VD") {
        for (int i = 6, j = 1; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 1; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B8" && submarinedirection == "VD") {
        for (int i = 7, j = 1; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i =7, j = 1; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C1" && submarinedirection == "VD") {
        for (int i = 0, j = 2; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 2; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C2" && submarinedirection == "VD") {
        for (int i = 1, j = 2; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 2; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C3" && submarinedirection == "VD") {
        for (int i = 2, j = 2; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C4" && submarinedirection == "VD") {
        for (int i = 3, j = 2; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C5" && submarinedirection == "VD") {
        for (int i = 4, j = 2; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C6" && submarinedirection == "VD") {
        for (int i = 5, j = 2; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 2; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C7" && submarinedirection == "VD") {
        for (int i = 6, j = 2; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C8" && submarinedirection == "VD") {
        for (int i = 7, j = 2; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D1" && submarinedirection == "VD") {
        for (int i = 0, j = 3; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 3; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D2" && submarinedirection == "VD") {
        for (int i = 1, j = 3; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 3; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D3" && submarinedirection == "VD") {
        for (int i = 2, j = 3; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D4" && submarinedirection == "VD") {
        for (int i = 3, j = 3; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D5" && submarinedirection == "VD") {
        for (int i = 4, j = 3; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D6" && submarinedirection == "VD") {
        for (int i = 5, j = 3; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D7" && submarinedirection == "VD") {
        for (int i = 6, j = 3; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D8" && submarinedirection == "VD") {
        for (int i = 7, j = 3; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E1" && submarinedirection == "VD") {
        for (int i = 0, j = 4; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 4; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E2" && submarinedirection == "VD") {
        for (int i = 1, j = 4; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 4; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E3" && submarinedirection == "VD") {
        for (int i = 2, j = 4; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 4; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E4" && submarinedirection == "VD") {
        for (int i = 3, j = 4; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E5" && submarinedirection == "VD") {
        for (int i = 4, j = 4; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E6" && submarinedirection == "VD") {
        for (int i = 5, j = 4; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E7" && submarinedirection == "VD") {
        for (int i = 6, j = 4; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E8" && submarinedirection == "VD") {
        for (int i = 7, j = 4; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F1" && submarinedirection == "VD") {
        for (int i = 0, j = 5; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 5; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F2" && submarinedirection == "VD") {
        for (int i = 1, j = 5; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 5; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F3" && submarinedirection == "VD") {
        for (int i = 2, j = 5; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F4" && submarinedirection == "VD") {
        for (int i = 3, j = 5; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F5" && submarinedirection == "VD") {
        for (int i = 4, j = 5; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F6" && submarinedirection == "VD") {
        for (int i = 5, j = 5; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F7" && submarinedirection == "VD") {
        for (int i = 6, j = 5; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F8" && submarinedirection == "VD") {
        for (int i = 7, j = 5; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G1" && submarinedirection == "VD") {
        for (int i = 0, j = 6; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 6; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G2" && submarinedirection == "VD") {
        for (int i = 1, j = 6; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 6; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G3" && submarinedirection == "VD") {
        for (int i = 2, j = 6; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G4" && submarinedirection == "VD") {
        for (int i = 3, j = 6; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G5" && submarinedirection == "VD") {
        for (int i = 4, j = 6; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G6" && submarinedirection == "VD") {
        for (int i = 5, j = 6; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G7" && submarinedirection == "VD") {
        for (int i = 6, j = 6; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G8" && submarinedirection == "VD") {
        for (int i = 7, j = 6; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H1" && submarinedirection == "VD") {
        for (int i = 0, j = 7; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 7; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H2" && submarinedirection == "VD") {
        for (int i = 1, j = 7; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 7; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H3" && submarinedirection == "VD") {
        for (int i = 2, j = 7; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H4" && submarinedirection == "VD") {
        for (int i = 3, j = 7; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H5" && submarinedirection == "VD") {
        for (int i = 4, j = 7; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H6" && submarinedirection == "VD") {
        for (int i = 5, j = 7; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H7" && submarinedirection == "VD") {
        for (int i = 6, j = 7; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H8" && submarinedirection == "VD") {
        for (int i = 7, j = 7; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I1" && submarinedirection == "VD") {
        for (int i = 0, j = 8; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 8; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I2" && submarinedirection == "VD") {
        for (int i = 1, j = 8; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 8; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I3" && submarinedirection == "VD") {
        for (int i = 2, j = 8; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 8; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I4" && submarinedirection == "VD") {
        for (int i = 3, j = 8; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 8; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I5" && submarinedirection == "VD") {
        for (int i = 4, j = 8; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 8; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I6" && submarinedirection == "VD") {
        for (int i = 5, j = 8; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 8; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I7" && submarinedirection == "VD") {
        for (int i = 6, j = 8; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 8; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I8" && submarinedirection == "VD") {
        for (int i = 7, j = 8; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 8; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J1" && submarinedirection == "VD") {
        for (int i = 0, j = 9; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 9; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J2" && submarinedirection == "VD") {
        for (int i = 1, j = 9; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 9; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J3" && submarinedirection == "VD") {
        for (int i = 3, j = 9; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J4" && submarinedirection == "VD") {
        for (int i = 3, j = 9; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J5" && submarinedirection == "VD") {
        for (int i = 4, j = 9; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 9; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J6" && submarinedirection == "VD") {
        for (int i = 5, j = 9; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 9; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J7" && submarinedirection == "VD") {
        for (int i = 6, j = 9; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 9; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J8" && submarinedirection == "VD") {
        for (int i = 7, j = 9; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 9; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A10" && submarinedirection == "VU") {
        for (int i = 9, j = 0; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 0; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A9" && submarinedirection == "VU") {
        for (int i = 8, j = 0; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 0; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A8" && submarinedirection == "VU") {
        for (int i = 7, j = 0; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 0; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A7" && submarinedirection == "VU") {
        for (int i = 6, j = 0; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 0; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A6" && submarinedirection == "VU") {
        for (int i = 5, j = 0; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 0; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A5" && submarinedirection == "VU") {
        for (int i = 4, j = 0; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 0; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A4" && submarinedirection == "VU") {
        for (int i = 3, j = 0; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 0; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A3" && submarinedirection == "VU") {
        for (int i = 2, j = 0; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 0; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B10" && submarinedirection == "VU") {
        for (int i = 9, j = 1; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 1; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B9" && submarinedirection == "VU") {
        for (int i = 8, j = 1; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 1; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B8" && submarinedirection == "VU") {
        for (int i = 7, j = 1; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 1; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B7" && submarinedirection == "VU") {
        for (int i = 6, j = 1; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 1; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B6" && submarinedirection == "VU") {
        for (int i = 5, j = 1; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 1; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B5" && submarinedirection == "VU") {
        for (int i = 4, j = 1; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 1; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B4" && submarinedirection == "VU") {
        for (int i = 3, j = 1; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 1; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B3" && submarinedirection == "VU") {
        for (int i = 2, j = 1; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 1; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C10" && submarinedirection == "VU") {
        for (int i = 9, j = 2; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 2; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C9" && submarinedirection == "VU") {
        for (int i = 8, j = 2; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 2; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C8" && submarinedirection == "VU") {
        for (int i = 7, j = 2; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C7" && submarinedirection == "VU") {
        for (int i = 6, j = 2; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C6" && submarinedirection == "VU") {
        for (int i = 5, j = 2; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 2; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C5" && submarinedirection == "VU") {
        for (int i = 4, j = 2; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C4" && submarinedirection == "VU") {
        for (int i = 3, j = 2; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C3" && submarinedirection == "VU") {
        for (int i = 2, j = 2; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D10" && submarinedirection == "VU") {
        for (int i = 9, j = 3; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 3; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D9" && submarinedirection == "VU") {
        for (int i = 8, j = 3; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 3; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D8" && submarinedirection == "VU") {
        for (int i = 7, j = 3; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D7" && submarinedirection == "VU") {
        for (int i = 6, j = 3; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D6" && submarinedirection == "VU") {
        for (int i = 5, j = 3; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D5" && submarinedirection == "VU") {
        for (int i = 4, j = 3; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D4" && submarinedirection == "VU") {
        for (int i = 3, j = 3; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D3" && submarinedirection == "VU") {
        for (int i = 2, j = 3; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E10" && submarinedirection == "VU") {
        for (int i = 9, j = 4; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 4; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E9" && submarinedirection == "VU") {
        for (int i = 8, j = 4; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 4; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E8" && submarinedirection == "VU") {
        for (int i = 7, j = 4; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E7" && submarinedirection == "VU") {
        for (int i = 6, j = 4; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E6" && submarinedirection == "VU") {
        for (int i = 5, j = 4; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E5" && submarinedirection == "VU") {
        for (int i = 4, j = 4; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E4" && submarinedirection == "VU") {
        for (int i = 3, j = 4; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F10" && submarinedirection == "VU") {
        for (int i = 9, j = 5; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 5; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F9" && submarinedirection == "VU") {
        for (int i = 8, j = 5; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 5; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F8" && submarinedirection == "VU") {
        for (int i = 7, j = 5; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F7" && submarinedirection == "VU") {
        for (int i = 6, j = 5; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F6" && submarinedirection == "VU") {
        for (int i = 5, j = 5; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F5" && submarinedirection == "VU") {
        for (int i = 4, j = 5; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F4" && submarinedirection == "VU") {
        for (int i = 3, j = 5; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F3" && submarinedirection == "VU") {
        for (int i = 2, j = 5; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G10" && submarinedirection == "VU") {
        for (int i = 9, j = 6; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 6; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G9" && submarinedirection == "VU") {
        for (int i = 8, j = 6; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 6; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G8" && submarinedirection == "VU") {
        for (int i = 7, j = 6; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G7" && submarinedirection == "VU") {
        for (int i = 6, j = 6; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G6" && submarinedirection == "VU") {
        for (int i = 5, j = 6; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G5" && submarinedirection == "VU") {
        for (int i = 4, j = 6; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G4" && submarinedirection == "VU") {
        for (int i = 3, j = 6; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G3" && submarinedirection == "VU") {
        for (int i = 2, j = 6; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H10" && submarinedirection == "VU") {
        for (int i = 9, j = 7; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 7; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H9" && submarinedirection == "VU") {
        for (int i = 8, j = 7; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 7; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H8" && submarinedirection == "VU") {
        for (int i = 7, j = 7; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H7" && submarinedirection == "VU") {
        for (int i = 6, j = 7; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H6" && submarinedirection == "VU") {
        for (int i = 5, j = 7; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H5" && submarinedirection == "VU") {
        for (int i = 4, j = 7; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H4" && submarinedirection == "VU") {
        for (int i = 3, j = 7; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H3" && submarinedirection == "VU") {
        for (int i = 2, j = 7; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I10" && submarinedirection == "VU") {
        for (int i = 9, j = 8; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 8; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I9" && submarinedirection == "VU") {
        for (int i = 8, j = 8; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 8; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I8" && submarinedirection == "VU") {
        for (int i = 7, j = 8; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 8; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I7" && submarinedirection == "VU") {
        for (int i = 6, j = 8; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 8; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I6" && submarinedirection == "VU") {
        for (int i = 5, j = 8; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 8; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I5" && submarinedirection == "VU") {
        for (int i = 4, j = 8; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 8; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I4" && submarinedirection == "VU") {
        for (int i = 3, j = 8; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 8; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I3" && submarinedirection == "VU") {
        for (int i = 2, j = 8; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 8; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J10" && submarinedirection == "VU") {
        for (int i = 9, j = 9; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 9; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J9" && submarinedirection == "VU") {
        for (int i = 8, j = 9; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 9; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J8" && submarinedirection == "VU") {
        for (int i = 7, j = 9; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 9; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J7" && submarinedirection == "VU") {
        for (int i = 6, j = 9; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 9; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J6" && submarinedirection == "VU") {
        for (int i = 5, j = 9; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 9; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J5" && submarinedirection == "VU") {
        for (int i = 4, j = 9; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 9; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J4" && submarinedirection == "VU") {
        for (int i = 3, j = 9; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J3" && submarinedirection == "VU") {
        for (int i = 2, j = 9; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 9; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A1" && submarinedirection == "HR") {
        for (int i = 0, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A2" && submarinedirection == "HR") {
        for (int i = 1, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A3" && submarinedirection == "HR") {
        for (int i = 2, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A4" && submarinedirection == "HR") {
        for (int i = 3, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A5" && submarinedirection == "HR") {
        for (int i = 4, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A6" && submarinedirection == "HR") {
        for (int i = 5, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A7" && submarinedirection == "HR") {
        for (int i = 6, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A8" && submarinedirection == "HR") {
        for (int i = 7, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A9" && submarinedirection == "HR") {
        for (int i = 8, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "A10" && submarinedirection == "HR") {
        for (int i = 9, j = 0; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 0; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B1" && submarinedirection == "HR") {
        for (int i = 0, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B2" && submarinedirection == "HR") {
        for (int i = 1, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B3" && submarinedirection == "HR") {
        for (int i = 2, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B4" && submarinedirection == "HR") {
        for (int i = 3, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B5" && submarinedirection == "HR") {
        for (int i = 4, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B6" && submarinedirection == "HR") {
        for (int i = 5, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B7" && submarinedirection == "HR") {
        for (int i = 6, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B8" && submarinedirection == "HR") {
        for (int i = 7, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B9" && submarinedirection == "HR") {
        for (int i = 8, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "B10" && submarinedirection == "HR") {
        for (int i = 9, j = 1; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 1; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C1" && submarinedirection == "HR") {
        for (int i = 0, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C2" && submarinedirection == "HR") {
        for (int i = 1, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C3" && submarinedirection == "HR") {
        for (int i = 2, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C4" && submarinedirection == "HR") {
        for (int i = 3, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C5" && submarinedirection == "HR") {
        for (int i = 4, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C6" && submarinedirection == "HR") {
        for (int i = 5, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 50, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C7" && submarinedirection == "HR") {
        for (int i = 6, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C8" && submarinedirection == "HR") {
        for (int i = 7, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C9" && submarinedirection == "HR") {
        for (int i = 8, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C10" && submarinedirection == "HR") {
        for (int i = 9, j = 2; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D1" && submarinedirection == "HR") {
        for (int i = 0, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D2" && submarinedirection == "HR") {
        for (int i = 1, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D3" && submarinedirection == "HR") {
        for (int i = 2, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D4" && submarinedirection == "HR") {
        for (int i = 3, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D5" && submarinedirection == "HR") {
        for (int i = 4, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D6" && submarinedirection == "HR") {
        for (int i = 5, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D7" && submarinedirection == "HR") {
        for (int i = 6, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D8" && submarinedirection == "HR") {
        for (int i = 7, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D9" && submarinedirection == "HR") {
        for (int i = 8, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D10" && submarinedirection == "HR") {
        for (int i = 9, j = 3; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 3; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E1" && submarinedirection == "HR") {
        for (int i = 0, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E2" && submarinedirection == "HR") {
        for (int i = 1, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E3" && submarinedirection == "HR") {
        for (int i = 2, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E4" && submarinedirection == "HR") {
        for (int i = 3, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E5" && submarinedirection == "HR") {
        for (int i = 4, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E6" && submarinedirection == "HR") {
        for (int i = 5, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E7" && submarinedirection == "HR") {
        for (int i = 6, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E8" && submarinedirection == "HR") {
        for (int i = 7, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E9" && submarinedirection == "HR") {
        for (int i = 8, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E10" && submarinedirection == "HR") {
        for (int i = 9, j = 4; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 4; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F1" && submarinedirection == "HR") {
        for (int i = 0, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F2" && submarinedirection == "HR") {
        for (int i = 1, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F3" && submarinedirection == "HR") {
        for (int i = 2, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F4" && submarinedirection == "HR") {
        for (int i = 3, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F5" && submarinedirection == "HR") {
        for (int i = 4, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F6" && submarinedirection == "HR") {
        for (int i = 5, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F7" && submarinedirection == "HR") {
        for (int i = 6, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F8" && submarinedirection == "HR") {
        for (int i = 7, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F9" && submarinedirection == "HR") {
        for (int i = 8, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F10" && submarinedirection == "HR") {
        for (int i = 9, j = 5; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 5; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G1" && submarinedirection == "HR") {
        for (int i = 0, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G2" && submarinedirection == "HR") {
        for (int i = 1, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G3" && submarinedirection == "HR") {
        for (int i = 2, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G4" && submarinedirection == "HR") {
        for (int i = 3, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G5" && submarinedirection == "HR") {
        for (int i = 4, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G6" && submarinedirection == "HR") {
        for (int i = 5, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G7" && submarinedirection == "HR") {
        for (int i = 6, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G8" && submarinedirection == "HR") {
        for (int i = 7, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G9" && submarinedirection == "HR") {
        for (int i = 8, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G10" && submarinedirection == "HR") {
        for (int i = 9, j = 6; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 6; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H1" && submarinedirection == "HR") {
        for (int i = 0, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H2" && submarinedirection == "HR") {
        for (int i = 1, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H3" && submarinedirection == "HR") {
        for (int i = 2, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H4" && submarinedirection == "HR") {
        for (int i = 3, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H5" && submarinedirection == "HR") {
        for (int i = 4, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H6" && submarinedirection == "HR") {
        for (int i = 5, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H7" && submarinedirection == "HR") {
        for (int i = 6, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H8" && submarinedirection == "HR") {
        for (int i = 7, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H9" && submarinedirection == "HR") {
        for (int i = 8, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H10" && submarinedirection == "HR") {
        for (int i = 9, j = 7; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 7; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J10" && submarinedirection == "HL"){
        for (int i = 9, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J9" && submarinedirection == "HL") {
        for (int i = 8, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J8" && submarinedirection == "HL") {
        for (int i = 7, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J7" && submarinedirection == "HL") {
        for (int i = 6, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J6" && submarinedirection == "HL") {
        for (int i = 5, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J5" && submarinedirection == "HL") {
        for (int i = 4, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J4" && submarinedirection == "HL") {
        for (int i = 3, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J3" && submarinedirection == "HL") {
        for (int i = 2, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J2" && submarinedirection == "HL") {
        for (int i = 1, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "J1" && submarinedirection == "HL") {
        for (int i = 0, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I10" && submarinedirection == "HL") {
        for (int i = 9, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I9" && submarinedirection == "HL") {
        for (int i = 8, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I8" && submarinedirection == "HL") {
        for (int i = 7, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = cruiser;
            }
        }
        return 0;
    }
    if (submarinelocation == "I7" && submarinedirection == "HL") {
        for (int i = 6, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I6" && submarinedirection == "HL") {
        for (int i = 5, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I5" && submarinedirection == "HL") {
        for (int i = 4, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I4" && submarinedirection == "HL") {
        for (int i = 3, j = 8; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 8; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I3" && submarinedirection == "HL") {
        for (int i = 2, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I2" && submarinedirection == "HL") {
        for (int i = 1, j = 8; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 8; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "I1" && submarinedirection == "HL") {
        for (int i = 0, j = 8; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 8; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H10" && submarinedirection == "HL") {
        for (int i = 9, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H9" && submarinedirection == "HL") {
        for (int i = 8, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H8" && submarinedirection == "HL") {
        for (int i = 7, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H7" && submarinedirection == "HL") {
        for (int i = 6, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H6" && submarinedirection == "HL") {
        for (int i = 5, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H5" && submarinedirection == "HL") {
        for (int i = 4, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H4" && submarinedirection == "HL") {
        for (int i = 3, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H3" && submarinedirection == "HL") {
        for (int i = 2, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H2" && submarinedirection == "HL") {
        for (int i = 1, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "H1" && submarinedirection == "HL") {
        for (int i = 0, j = 7; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 7; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G10" && submarinedirection == "HL") {
        for (int i = 9, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G9" && submarinedirection == "HL") {
        for (int i = 8, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G8" && submarinedirection == "HL") {
        for (int i = 7, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G7" && submarinedirection == "HL") {
        for (int i = 6, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G6" && submarinedirection == "HL") {
        for (int i = 5, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G5" && submarinedirection == "HL") {
        for (int i = 4, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G4" && submarinedirection == "HL") {
        for (int i = 3, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G3" && submarinedirection == "HL") {
        for (int i = 2, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G2" && submarinedirection == "HL") {
        for (int i = 1, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "G1" && submarinedirection == "HL") {
        for (int i = 0, j = 6; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 6; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F10" && submarinedirection == "HL") {
        for (int i = 9, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F9" && submarinedirection == "HL") {
        for (int i = 8, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F8" && submarinedirection == "HL") {
        for (int i = 7, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F7" && submarinedirection == "HL") {
        for (int i = 6, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F6" && submarinedirection == "HL") {
        for (int i = 5, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F5" && submarinedirection == "HL") {
        for (int i = 4, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F4" && submarinedirection == "HL") {
        for (int i = 3, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F3" && submarinedirection == "HL") {
        for (int i = 2, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F2" && submarinedirection == "HL") {
        for (int i = 1, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "F1" && submarinedirection == "HL") {
        for (int i = 0, j = 5; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 5; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E10" && submarinedirection == "HL") {
        for (int i = 9, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E9" && submarinedirection == "HL") {
        for (int i = 8, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E8" && submarinedirection == "HL") {
        for (int i = 7, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E7" && submarinedirection == "HL") {
        for (int i = 6, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E6" && submarinedirection == "HL") {
        for (int i = 5, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E5" && submarinedirection == "HL") {
        for (int i = 4, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E4" && submarinedirection == "HL") {
        for (int i = 3, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E3" && submarinedirection == "HL") {
        for (int i = 2, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E2" && submarinedirection == "HL") {
        for (int i = 1, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "E1" && submarinedirection == "HL") {
        for (int i = 0, j = 4; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 4; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D10" && submarinedirection == "HL") {
        for (int i = 9, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D9" && submarinedirection == "HL") {
        for (int i = 8, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D8" && submarinedirection == "HL") {
        for (int i = 7, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D7" && submarinedirection == "HL") {
        for (int i = 6, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D6" && submarinedirection == "HL") {
        for (int i = 5, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D5" && submarinedirection == "HL") {
        for (int i = 4, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D4" && submarinedirection == "HL") {
        for (int i = 3, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D3" && submarinedirection == "HL") {
        for (int i = 2, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D2" && submarinedirection == "HL") {
        for (int i = 1, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "D1" && submarinedirection == "HL") {
        for (int i = 0, j = 3; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 3; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C10" && submarinedirection == "HL") {
        for (int i = 9, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C9" && submarinedirection == "HL") {
        for (int i = 8, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C8" && submarinedirection == "HL") {
        for (int i = 7, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C7" && submarinedirection == "HL") {
        for (int i = 6, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C6" && submarinedirection == "HL") {
        for (int i = 5, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C5" && submarinedirection == "HL") {
        for (int i = 4, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C4" && submarinedirection == "HL") {
        for (int i = 3, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C3" && submarinedirection == "HL") {
        for (int i = 2, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C2" && submarinedirection == "HL") {
        for (int i = 1, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }
    if (submarinelocation == "C1" && submarinedirection == "HL") {
        for (int i = 0, j = 2; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 2; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = submarine;
            }
        }
        return 0;
    }


}

int shiplocation::Destroyer() {
    if (destroyerlocation == "A1" && destroyerdirection == "VD") {
        for (int i = 0, j = 0; i <= 1; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 0; i <= 1; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A2" && destroyerdirection == "VD") {
        for (int i = 1, j = 0; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 0; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A3" && destroyerdirection == "VD") {
        for (int i = 2, j = 0; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 0; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A4" && destroyerdirection == "VD") {
        for (int i = 3, j = 0; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 0; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A5" && destroyerdirection == "VD") {
        for (int i = 4, j = 0; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 0; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A6" && destroyerdirection == "VD") {
        for (int i = 5, j = 0; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 0; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A7" && destroyerdirection == "VD") {
        for (int i = 6, j = 0; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 0; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A8" && destroyerdirection == "VD") {
        for (int i = 7, j = 0; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 0; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A9" && destroyerdirection == "VD") {
        for (int i = 8, j = 0; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 0; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B1" && destroyerdirection == "VD") {
        for (int i = 0, j = 1; i <= 1; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 1; i <= 1; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B2" && destroyerdirection == "VD") {
        for (int i = 1, j = 1; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 1; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B3" && destroyerdirection == "VD") {
        for (int i = 2, j = 1; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 1; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B4" && destroyerdirection == "VD") {
        for (int i = 3, j = 1; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 1; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B5" && destroyerdirection == "VD") {
        for (int i = 4, j = 1; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 1; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B6" && destroyerdirection == "VD") {
        for (int i = 5, j = 1; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 1; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B7" && destroyerdirection == "VD") {
        for (int i = 6, j = 1; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 1; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B8" && destroyerdirection == "VD") {
        for (int i = 7, j = 1; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i =7, j = 1; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B9" && destroyerdirection == "VD") {
        for (int i = 8, j = 1; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i =8, j = 1; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C1" && destroyerdirection == "VD") {
        for (int i = 0, j = 2; i <= 1; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 2; i <= 1; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C2" && destroyerdirection == "VD") {
        for (int i = 1, j = 2; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 2; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C3" && destroyerdirection == "VD") {
        for (int i = 2, j = 2; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C4" && destroyerdirection == "VD") {
        for (int i = 3, j = 2; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C5" && destroyerdirection == "VD") {
        for (int i = 4, j = 2; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C6" && destroyerdirection == "VD") {
        for (int i = 5, j = 2; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 2; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C7" && destroyerdirection == "VD") {
        for (int i = 6, j = 2; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C8" && destroyerdirection == "VD") {
        for (int i = 7, j = 2; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C9" && destroyerdirection == "VD") {
        for (int i = 8, j = 2; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 2; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D1" && destroyerdirection == "VD") {
        for (int i = 0, j = 3; i <= 1; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 3; i <= 1; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D2" && destroyerdirection == "VD") {
        for (int i = 1, j = 3; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 3; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D3" && destroyerdirection == "VD") {
        for (int i = 2, j = 3; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D4" && destroyerdirection == "VD") {
        for (int i = 3, j = 3; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D5" && destroyerdirection == "VD") {
        for (int i = 4, j = 3; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D6" && destroyerdirection == "VD") {
        for (int i = 5, j = 3; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D7" && destroyerdirection == "VD") {
        for (int i = 6, j = 3; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D8" && destroyerdirection == "VD") {
        for (int i = 7, j = 3; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D9" && destroyerdirection == "VD") {
        for (int i = 8, j = 3; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 3; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E1" && destroyerdirection == "VD") {
        for (int i = 0, j = 4; i <= 1; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 4; i <= 1; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E2" && destroyerdirection == "VD") {
        for (int i = 1, j = 4; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 4; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E3" && destroyerdirection == "VD") {
        for (int i = 2, j = 4; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 4; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E4" && destroyerdirection == "VD") {
        for (int i = 3, j = 4; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E5" && destroyerdirection == "VD") {
        for (int i = 4, j = 4; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E6" && destroyerdirection == "VD") {
        for (int i = 5, j = 4; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E7" && destroyerdirection == "VD") {
        for (int i = 6, j = 4; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E8" && destroyerdirection == "VD") {
        for (int i = 7, j = 4; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E9" && destroyerdirection == "VD") {
        for (int i = 8, j = 4; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 4; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F1" && destroyerdirection == "VD") {
        for (int i = 0, j = 5; i <= 1; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 5; i <= 1; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F2" && destroyerdirection == "VD") {
        for (int i = 1, j = 5; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 5; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F3" && destroyerdirection == "VD") {
        for (int i = 2, j = 5; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F4" && destroyerdirection == "VD") {
        for (int i = 3, j = 5; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F5" && destroyerdirection == "VD") {
        for (int i = 4, j = 5; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F6" && destroyerdirection == "VD") {
        for (int i = 5, j = 5; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F7" && destroyerdirection == "VD") {
        for (int i = 6, j = 5; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F8" && destroyerdirection == "VD") {
        for (int i = 7, j = 5; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F9" && destroyerdirection == "VD") {
        for (int i = 8, j = 5; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 5; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G1" && destroyerdirection == "VD") {
        for (int i = 0, j = 6; i <= 1; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 6; i <= 1; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G2" && destroyerdirection == "VD") {
        for (int i = 1, j = 6; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 6; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G3" && destroyerdirection == "VD") {
        for (int i = 2, j = 6; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G4" && destroyerdirection == "VD") {
        for (int i = 3, j = 6; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G5" && destroyerdirection == "VD") {
        for (int i = 4, j = 6; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G6" && destroyerdirection == "VD") {
        for (int i = 5, j = 6; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G7" && destroyerdirection == "VD") {
        for (int i = 6, j = 6; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G8" && destroyerdirection == "VD") {
        for (int i = 7, j = 6; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G9" && destroyerdirection == "VD") {
        for (int i = 8, j = 6; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 6; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H1" && destroyerdirection == "VD") {
        for (int i = 0, j = 7; i <= 1; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 7; i <= 1; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H2" && destroyerdirection == "VD") {
        for (int i = 1, j = 7; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 7; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H3" && destroyerdirection == "VD") {
        for (int i = 2, j = 7; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H4" && destroyerdirection == "VD") {
        for (int i = 3, j = 7; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H5" && destroyerdirection == "VD") {
        for (int i = 4, j = 7; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H6" && destroyerdirection == "VD") {
        for (int i = 5, j = 7; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H7" && destroyerdirection == "VD") {
        for (int i = 6, j = 7; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H8" && destroyerdirection == "VD") {
        for (int i = 7, j = 7; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H9" && destroyerdirection == "VD") {
        for (int i = 8, j = 7; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 7; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I1" && destroyerdirection == "VD") {
        for (int i = 0, j = 8; i <= 1; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 8; i <= 1; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I2" && destroyerdirection == "VD") {
        for (int i = 1, j = 8; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 8; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I3" && destroyerdirection == "VD") {
        for (int i = 2, j = 8; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 8; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I4" && destroyerdirection == "VD") {
        for (int i = 3, j = 8; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 8; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I5" && destroyerdirection == "VD") {
        for (int i = 4, j = 8; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 8; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I6" && destroyerdirection == "VD") {
        for (int i = 5, j = 8; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 8; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I7" && destroyerdirection == "VD") {
        for (int i = 6, j = 8; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 8; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I8" && destroyerdirection == "VD") {
        for (int i = 7, j = 8; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 8; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I9" && destroyerdirection == "VD") {
        for (int i = 8, j = 8; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 8; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J1" && destroyerdirection == "VD") {
        for (int i = 0, j = 9; i <= 1; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 9; i <= 1; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J2" && destroyerdirection == "VD") {
        for (int i = 1, j = 9; i <= 2; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 9; i <= 2; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J3" && destroyerdirection == "VD") {
        for (int i = 3, j = 9; i <= 3; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; i <= 3; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J4" && destroyerdirection == "VD") {
        for (int i = 3, j = 9; i <= 4; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; i <= 4; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J5" && destroyerdirection == "VD") {
        for (int i = 4, j = 9; i <= 5; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 9; i <= 5; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J6" && destroyerdirection == "VD") {
        for (int i = 5, j = 9; i <= 6; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 9; i <= 6; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J7" && destroyerdirection == "VD") {
        for (int i = 6, j = 9; i <= 7; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 9; i <= 7; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J8" && destroyerdirection == "VD") {
        for (int i = 7, j = 9; i <= 8; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 9; i <= 8; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J9" && destroyerdirection == "VD") {
        for (int i = 8, j = 9; i <= 9; i++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 9; i <= 9; i++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A10" && destroyerdirection == "VU") {
        for (int i = 9, j = 0; i >= 8; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 0; i >= 8; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A9" && destroyerdirection == "VU") {
        for (int i = 8, j = 0; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 0; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A8" && destroyerdirection == "VU") {
        for (int i = 7, j = 0; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 0; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A7" && destroyerdirection == "VU") {
        for (int i = 6, j = 0; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 0; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A6" && destroyerdirection == "VU") {
        for (int i = 5, j = 0; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 0; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A5" && destroyerdirection == "VU") {
        for (int i = 4, j = 0; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 0; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A4" && destroyerdirection == "VU") {
        for (int i = 3, j = 0; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 0; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A3" && destroyerdirection == "VU") {
        for (int i = 2, j = 0; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 0; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A2" && destroyerdirection == "VU") {
        for (int i = 1, j = 0; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 0; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B10" && destroyerdirection == "VU") {
        for (int i = 9, j = 1; i >= 8; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 1; i >= 8; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B9" && destroyerdirection == "VU") {
        for (int i = 8, j = 1; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 1; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B8" && destroyerdirection == "VU") {
        for (int i = 7, j = 1; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 1; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B7" && destroyerdirection == "VU") {
        for (int i = 6, j = 1; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 1; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B6" && destroyerdirection == "VU") {
        for (int i = 5, j = 1; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 1; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B5" && destroyerdirection == "VU") {
        for (int i = 4, j = 1; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 1; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B4" && destroyerdirection == "VU") {
        for (int i = 3, j = 1; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 1; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B3" && destroyerdirection == "VU") {
        for (int i = 2, j = 1; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 1; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B2" && destroyerdirection == "VU") {
        for (int i = 1, j = 1; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 1; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C10" && destroyerdirection == "VU") {
        for (int i = 9, j = 2; i >= 8; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 2; i >= 8; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C9" && destroyerdirection == "VU") {
        for (int i = 8, j = 2; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 2; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C8" && destroyerdirection == "VU") {
        for (int i = 7, j = 2; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C7" && destroyerdirection == "VU") {
        for (int i = 6, j = 2; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C6" && destroyerdirection == "VU") {
        for (int i = 5, j = 2; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 2; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C5" && destroyerdirection == "VU") {
        for (int i = 4, j = 2; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C4" && destroyerdirection == "VU") {
        for (int i = 3, j = 2; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C3" && destroyerdirection == "VU") {
        for (int i = 2, j = 2; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C2" && destroyerdirection == "VU") {
        for (int i = 1, j = 2; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 2; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D10" && destroyerdirection == "VU") {
        for (int i = 9, j = 3; i >= 8; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 3; i >= 8; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D9" && destroyerdirection == "VU") {
        for (int i = 8, j = 3; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 3; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D8" && destroyerdirection == "VU") {
        for (int i = 7, j = 3; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D7" && destroyerdirection == "VU") {
        for (int i = 6, j = 3; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D6" && destroyerdirection == "VU") {
        for (int i = 5, j = 3; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D5" && destroyerdirection == "VU") {
        for (int i = 4, j = 3; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D4" && destroyerdirection == "VU") {
        for (int i = 3, j = 3; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D3" && destroyerdirection == "VU") {
        for (int i = 2, j = 3; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D2" && destroyerdirection == "VU") {
        for (int i = 1, j = 3; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 3; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E10" && destroyerdirection == "VU"){
        for (int i = 9, j = 4; i >= 8; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 4; i >= 8; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E9" && destroyerdirection == "VU") {
        for (int i = 8, j = 4; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 4; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E8" && destroyerdirection == "VU") {
        for (int i = 7, j = 4; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E7" && destroyerdirection == "VU") {
        for (int i = 6, j = 4; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E6" && destroyerdirection == "VU") {
        for (int i = 5, j = 4; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E5" && destroyerdirection == "VU") {
        for (int i = 4, j = 4; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E4" && destroyerdirection == "VU") {
        for (int i = 3, j = 4; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E3" && destroyerdirection == "VU") {
        for (int i = 2, j = 4; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 4; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E2" && destroyerdirection == "VU") {
        for (int i = 1, j = 4; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 4; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F10" && destroyerdirection == "VU") {
        for (int i = 9, j = 5; i >= 8; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 5; i >= 8; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F9" && destroyerdirection == "VU") {
        for (int i = 8, j = 5; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 5; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F8" && destroyerdirection == "VU") {
        for (int i = 7, j = 5; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F7" && destroyerdirection == "VU") {
        for (int i = 6, j = 5; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F6" && destroyerdirection == "VU") {
        for (int i = 5, j = 5; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F5" && destroyerdirection == "VU") {
        for (int i = 4, j = 5; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F4" && destroyerdirection == "VU") {
        for (int i = 3, j = 5; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F3" && destroyerdirection == "VU") {
        for (int i = 2, j = 5; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F2" && destroyerdirection == "VU") {
        for (int i = 1, j = 5; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 5; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G10" && destroyerdirection == "VU") {
        for (int i = 9, j = 6; i >= 8; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 6; i >= 8; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G9" && destroyerdirection == "VU") {
        for (int i = 8, j = 6; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 6; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G8" && destroyerdirection == "VU") {
        for (int i = 7, j = 6; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G7" && destroyerdirection == "VU") {
        for (int i = 6, j = 6; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G6" && destroyerdirection == "VU") {
        for (int i = 5, j = 6; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G5" && destroyerdirection == "VU") {
        for (int i = 4, j = 6; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G4" && destroyerdirection == "VU") {
        for (int i = 3, j = 6; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G3" && destroyerdirection == "VU") {
        for (int i = 2, j = 6; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G2" && destroyerdirection == "VU") {
        for (int i = 1, j = 6; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 6; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H10" && destroyerdirection == "VU") {
        for (int i = 9, j = 7; i >= 8; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 7; i >= 8; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H9" && destroyerdirection == "VU") {
        for (int i = 8, j = 7; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 7; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H8" && destroyerdirection == "VU") {
        for (int i = 7, j = 7; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H7" && destroyerdirection == "VU") {
        for (int i = 6, j = 7; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H6" && destroyerdirection == "VU") {
        for (int i = 5, j = 7; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H5" && destroyerdirection == "VU") {
        for (int i = 4, j = 7; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H4" && destroyerdirection == "VU") {
        for (int i = 3, j = 7; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H3" && destroyerdirection == "VU") {
        for (int i = 2, j = 7; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H2" && destroyerdirection == "VU") {
        for (int i = 1, j = 7; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 7; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I10" && destroyerdirection == "VU") {
        for (int i = 9, j = 8; i >= 8; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 8; i >= 8; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I9" && destroyerdirection == "VU") {
        for (int i = 8, j = 8; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 8; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I8" && destroyerdirection == "VU") {
        for (int i = 7, j = 8; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 8; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I7" && destroyerdirection == "VU") {
        for (int i = 6, j = 8; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 8; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I6" && destroyerdirection == "VU") {
        for (int i = 5, j = 8; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 8; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I5" && destroyerdirection == "VU") {
        for (int i = 4, j = 8; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 8; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I4" && destroyerdirection == "VU") {
        for (int i = 3, j = 8; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 8; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I3" && destroyerdirection == "VU") {
        for (int i = 2, j = 8; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 8; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I2" && destroyerdirection == "VU") {
        for (int i = 1, j = 8; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 8; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J10" && destroyerdirection == "VU") {
        for (int i = 9, j = 9; i >= 8; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 9; i >= 8; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J9" && destroyerdirection == "VU") {
        for (int i = 8, j = 9; i >= 7; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 9; i >= 7; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J8" && destroyerdirection == "VU") {
        for (int i = 7, j = 9; i >= 6; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 9; i >= 6; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J7" && destroyerdirection == "VU") {
        for (int i = 6, j = 9; i >= 5; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 9; i >= 5; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J6" && destroyerdirection == "VU") {
        for (int i = 5, j = 9; i >= 4; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 9; i >= 4; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J5" && destroyerdirection == "VU") {
        for (int i = 4, j = 9; i >= 3; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 9; i >= 3; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J4" && destroyerdirection == "VU") {
        for (int i = 3, j = 9; i >= 2; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; i >= 2; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J3" && destroyerdirection == "VU") {
        for (int i = 2, j = 9; i >= 1; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 9; i >= 1; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J2" && destroyerdirection == "VU") {
        for (int i = 1, j = 9; i >= 0; i--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 9; i >= 0; i--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A1" && destroyerdirection == "HR") {
        for (int i = 0, j = 0; j <= 1; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 0; j <= 1; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A2" && destroyerdirection == "HR") {
        for (int i = 1, j = 0; j <= 1; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 0; j <= 1; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A3" && destroyerdirection == "HR") {
        for (int i = 2, j = 0; j <= 1; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 0; j <= 1; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A4" && destroyerdirection == "HR") {
        for (int i = 3, j = 0; j <= 1; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 0; j <= 1; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A5" && destroyerdirection == "HR") {
        for (int i = 4, j = 0; j <= 1; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 0; j <= 1; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A6" && destroyerdirection == "HR") {
        for (int i = 5, j = 0; j <= 1; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 0; j <= 1; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A7" && destroyerdirection == "HR") {
        for (int i = 6, j = 0; j <= 1; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 0; j <= 1; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A8" && destroyerdirection == "HR") {
        for (int i = 7, j = 0; j <= 1; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 0; j <= 1; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A9" && destroyerdirection == "HR") {
        for (int i = 8, j = 0; j <= 1; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 0; j <= 1; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "A10" && destroyerdirection == "HR") {
        for (int i = 9, j = 0; j <= 1; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 0; j <= 1; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B1" && destroyerdirection == "HR") {
        for (int i = 0, j = 1; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 1; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B2" && destroyerdirection == "HR") {
        for (int i = 1, j = 1; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 1; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B3" && destroyerdirection == "HR") {
        for (int i = 2, j = 1; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 1; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B4" && destroyerdirection == "HR") {
        for (int i = 3, j = 1; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 1; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B5" && destroyerdirection == "HR") {
        for (int i = 4, j = 1; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 1; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B6" && destroyerdirection == "HR") {
        for (int i = 5, j = 1; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 1; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B7" && destroyerdirection == "HR") {
        for (int i = 6, j = 1; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 1; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B8" && destroyerdirection == "HR") {
        for (int i = 7, j = 1; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 1; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B9" && destroyerdirection == "HR") {
        for (int i = 8, j = 1; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 1; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B10" && destroyerdirection == "HR") {
        for (int i = 9, j = 1; j <= 2; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 1; j <= 2; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C1" && destroyerdirection == "HR") {
        for (int i = 0, j = 2; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 2; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C2" && destroyerdirection == "HR") {
        for (int i = 1, j = 2; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 2; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C3" && destroyerdirection == "HR") {
        for (int i = 2, j = 2; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C4" && destroyerdirection == "HR") {
        for (int i = 3, j = 2; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C5" && destroyerdirection == "HR") {
        for (int i = 4, j = 2; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C6" && destroyerdirection == "HR") {
        for (int i = 5, j = 2; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 50, j = 2; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C7" && destroyerdirection == "HR") {
        for (int i = 6, j = 2; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C8" && destroyerdirection == "HR") {
        for (int i = 7, j = 2; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C9" && destroyerdirection == "HR") {
        for (int i = 8, j = 2; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 2; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C10" && destroyerdirection == "HR") {
        for (int i = 9, j = 2; j <= 3; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 2; j <= 3; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D1" && destroyerdirection == "HR") {
        for (int i = 0, j = 3; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 3; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D2" && destroyerdirection == "HR") {
        for (int i = 1, j = 3; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 3; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D3" && destroyerdirection == "HR") {
        for (int i = 2, j = 3; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D4" && destroyerdirection == "HR") {
        for (int i = 3, j = 3; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D5" && destroyerdirection == "HR") {
        for (int i = 4, j = 3; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D6" && destroyerdirection == "HR") {
        for (int i = 5, j = 3; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D7" && destroyerdirection == "HR") {
        for (int i = 6, j = 3; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D8" && destroyerdirection == "HR") {
        for (int i = 7, j = 3; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D9" && destroyerdirection == "HR") {
        for (int i = 8, j = 3; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 3; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D10" && destroyerdirection == "HR") {
        for (int i = 9, j = 3; j <= 4; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 3; j <= 4; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E1" && destroyerdirection == "HR") {
        for (int i = 0, j = 4; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 4; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E2" && destroyerdirection == "HR") {
        for (int i = 1, j = 4; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 4; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E3" && destroyerdirection == "HR") {
        for (int i = 2, j = 4; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 4; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E4" && destroyerdirection == "HR") {
        for (int i = 3, j = 4; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E5" && destroyerdirection == "HR") {
        for (int i = 4, j = 4; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E6" && destroyerdirection == "HR") {
        for (int i = 5, j = 4; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E7" && destroyerdirection == "HR") {
        for (int i = 6, j = 4; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E8" && destroyerdirection == "HR") {
        for (int i = 7, j = 4; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E9" && destroyerdirection == "HR") {
        for (int i = 8, j = 4; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 4; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E10" && destroyerdirection == "HR") {
        for (int i = 9, j = 4; j <= 5; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 4; j <= 5; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F1" && destroyerdirection == "HR") {
        for (int i = 0, j = 5; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 5; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F2" && destroyerdirection == "HR") {
        for (int i = 1, j = 5; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 5; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F3" && destroyerdirection == "HR") {
        for (int i = 2, j = 5; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F4" && destroyerdirection == "HR") {
        for (int i = 3, j = 5; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F5" && destroyerdirection == "HR") {
        for (int i = 4, j = 5; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F6" && destroyerdirection == "HR") {
        for (int i = 5, j = 5; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F7" && destroyerdirection == "HR") {
        for (int i = 6, j = 5; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F8" && destroyerdirection == "HR") {
        for (int i = 7, j = 5; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F9" && destroyerdirection == "HR") {
        for (int i = 8, j = 5; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 5; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F10" && destroyerdirection == "HR") {
        for (int i = 9, j = 5; j <= 6; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 5; j <= 6; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G1" && destroyerdirection == "HR") {
        for (int i = 0, j = 6; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 6; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G2" && destroyerdirection == "HR") {
        for (int i = 1, j = 6; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 6; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G3" && destroyerdirection == "HR") {
        for (int i = 2, j = 6; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G4" && destroyerdirection == "HR") {
        for (int i = 3, j = 6; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G5" && destroyerdirection == "HR") {
        for (int i = 4, j = 6; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G6" && destroyerdirection == "HR") {
        for (int i = 5, j = 6; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G7" && destroyerdirection == "HR") {
        for (int i = 6, j = 6; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G8" && destroyerdirection == "HR") {
        for (int i = 7, j = 6; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G9" && destroyerdirection == "HR") {
        for (int i = 8, j = 6; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 6; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G10" && destroyerdirection == "HR") {
        for (int i = 9, j = 6; j <= 7; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 6; j <= 7; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H1" && destroyerdirection == "HR") {
        for (int i = 0, j = 7; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 7; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H2" && destroyerdirection == "HR") {
        for (int i = 1, j = 7; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 7; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H3" && destroyerdirection == "HR") {
        for (int i = 2, j = 7; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H4" && destroyerdirection == "HR") {
        for (int i = 3, j = 7; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H5" && destroyerdirection == "HR") {
        for (int i = 4, j = 7; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H6" && destroyerdirection == "HR") {
        for (int i = 5, j = 7; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H7" && destroyerdirection == "HR") {
        for (int i = 6, j = 7; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H8" && destroyerdirection == "HR") {
        for (int i = 7, j = 7; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H9" && destroyerdirection == "HR") {
        for (int i = 8, j = 7; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 7; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H10" && destroyerdirection == "HR") {
        for (int i = 9, j = 7; j <= 8; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 7; j <= 8; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I1" && destroyerdirection == "HR") {
        for (int i = 0, j = 8; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 8; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I2" && destroyerdirection == "HR") {
        for (int i = 1, j = 8; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 8; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I3" && destroyerdirection == "HR") {
        for (int i = 2, j = 8; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 8; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I4" && destroyerdirection == "HR") {
        for (int i = 3, j = 8; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 8; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I5" && destroyerdirection == "HR") {
        for (int i = 4, j = 8; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 8; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I6" && destroyerdirection == "HR") {
        for (int i = 5, j = 8; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 8; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I7" && destroyerdirection == "HR") {
        for (int i = 6, j = 8; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 8; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I8" && destroyerdirection == "HR") {
        for (int i = 7, j = 8; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 8; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I9" && destroyerdirection == "HR") {
        for (int i = 8, j = 8; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 8; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I10" && destroyerdirection == "HR") {
        for (int i = 9, j = 8; j <= 9; j++) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 8; j <= 9; j++) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J10" && destroyerdirection == "HL"){
        for (int i = 9, j = 9; j >= 8; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 9; j >= 8; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J9" && destroyerdirection == "HL") {
        for (int i = 8, j = 9; j >= 8; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 9; j >= 8; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J8" && destroyerdirection == "HL") {
        for (int i = 7, j = 9; j >= 8; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 9; j >= 8; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J7" && destroyerdirection == "HL") {
        for (int i = 6, j = 9; j >= 8; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 9; j >= 8; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J6" && destroyerdirection == "HL") {
        for (int i = 5, j = 9; j >= 8; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 9; j >= 8; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J5" && destroyerdirection == "HL") {
        for (int i = 4, j = 9; j >= 8; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 9; j >= 8; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J4" && destroyerdirection == "HL") {
        for (int i = 3, j = 9; j >= 8; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 9; j >= 8; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J3" && destroyerdirection == "HL") {
        for (int i = 2, j = 9; j >= 8; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 9; j >= 8; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J2" && destroyerdirection == "HL") {
        for (int i = 1, j = 9; j >= 8; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 9; j >= 8; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "J1" && destroyerdirection == "HL") {
        for (int i = 0, j = 9; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 9; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I10" && destroyerdirection == "HL") {
        for (int i = 9, j = 8; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 8; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I9" && destroyerdirection == "HL") {
        for (int i = 8, j = 8; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 8; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I8" && destroyerdirection == "HL") {
        for (int i = 7, j = 8; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 8; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I7" && destroyerdirection == "HL") {
        for (int i = 6, j = 8; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 8; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I6" && destroyerdirection == "HL") {
        for (int i = 5, j = 8; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 8; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I5" && destroyerdirection == "HL") {
        for (int i = 4, j = 8; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 8; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I4" && destroyerdirection == "HL") {
        for (int i = 3, j = 8; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 8; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I3" && destroyerdirection == "HL") {
        for (int i = 2, j = 8; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 8; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I2" && destroyerdirection == "HL") {
        for (int i = 1, j = 8; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 8; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "I1" && destroyerdirection == "HL") {
        for (int i = 0, j = 8; j >= 7; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 8; j >= 7; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H10" && destroyerdirection == "HL") {
        for (int i = 9, j = 7; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 7; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H9" && destroyerdirection == "HL") {
        for (int i = 8, j = 7; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 7; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H8" && destroyerdirection == "HL") {
        for (int i = 7, j = 7; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 7; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H7" && destroyerdirection == "HL") {
        for (int i = 6, j = 7; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 7; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H6" && destroyerdirection == "HL") {
        for (int i = 5, j = 7; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 7; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H5" && destroyerdirection == "HL") {
        for (int i = 4, j = 7; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 7; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H4" && destroyerdirection == "HL") {
        for (int i = 3, j = 7; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 7; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H3" && destroyerdirection == "HL") {
        for (int i = 2, j = 7; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 7; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H2" && destroyerdirection == "HL") {
        for (int i = 1, j = 7; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 7; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "H1" && destroyerdirection == "HL") {
        for (int i = 0, j = 7; j >= 6; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 7; j >= 6; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G10" && destroyerdirection == "HL") {
        for (int i = 9, j = 6; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 6; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G9" && destroyerdirection == "HL") {
        for (int i = 8, j = 6; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 6; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G8" && destroyerdirection == "HL") {
        for (int i = 7, j = 6; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 6; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G7" && destroyerdirection == "HL") {
        for (int i = 6, j = 6; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 6; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G6" && destroyerdirection == "HL") {
        for (int i = 5, j = 6; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 6; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G5" && destroyerdirection == "HL") {
        for (int i = 4, j = 6; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 6; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G4" && destroyerdirection == "HL") {
        for (int i = 3, j = 6; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 6; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G3" && destroyerdirection == "HL") {
        for (int i = 2, j = 6; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 6; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G2" && destroyerdirection == "HL") {
        for (int i = 1, j = 6; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 6; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "G1" && destroyerdirection == "HL") {
        for (int i = 0, j = 6; j >= 5; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 6; j >= 5; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F10" && destroyerdirection == "HL") {
        for (int i = 9, j = 5; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 5; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F9" && destroyerdirection == "HL") {
        for (int i = 8, j = 5; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 5; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F8" && destroyerdirection == "HL") {
        for (int i = 7, j = 5; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 5; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F7" && destroyerdirection == "HL") {
        for (int i = 6, j = 5; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 5; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F6" && destroyerdirection == "HL") {
        for (int i = 5, j = 5; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 5; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F5" && destroyerdirection == "HL") {
        for (int i = 4, j = 5; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 5; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F4" && destroyerdirection == "HL") {
        for (int i = 3, j = 5; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 5; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F3" && destroyerdirection == "HL") {
        for (int i = 2, j = 5; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 5; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F2" && destroyerdirection == "HL") {
        for (int i = 1, j = 5; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 5; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "F1" && destroyerdirection == "HL") {
        for (int i = 0, j = 5; j >= 4; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 5; j >= 4; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E10" && destroyerdirection == "HL") {
        for (int i = 9, j = 4; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 4; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E9" && destroyerdirection == "HL") {
        for (int i = 8, j = 4; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 4; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E8" && destroyerdirection == "HL") {
        for (int i = 7, j = 4; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 4; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E7" && destroyerdirection == "HL") {
        for (int i = 6, j = 4; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 4; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E6" && destroyerdirection == "HL") {
        for (int i = 5, j = 4; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 4; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E5" && destroyerdirection == "HL") {
        for (int i = 4, j = 4; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 4; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E4" && destroyerdirection == "HL") {
        for (int i = 3, j = 4; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 4; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E3" && destroyerdirection == "HL") {
        for (int i = 2, j = 4; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 4; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E2" && destroyerdirection == "HL") {
        for (int i = 1, j = 4; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 4; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "E1" && destroyerdirection == "HL") {
        for (int i = 0, j = 4; j >= 3; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 4; j >= 3; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D10" && destroyerdirection == "HL") {
        for (int i = 9, j = 3; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 3; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D9" && destroyerdirection == "HL") {
        for (int i = 8, j = 3; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 3; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D8" && destroyerdirection == "HL") {
        for (int i = 7, j = 3; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 3; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D7" && destroyerdirection == "HL") {
        for (int i = 6, j = 3; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 3; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D6" && destroyerdirection == "HL") {
        for (int i = 5, j = 3; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 3; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D5" && destroyerdirection == "HL") {
        for (int i = 4, j = 3; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 3; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D4" && destroyerdirection == "HL") {
        for (int i = 3, j = 3; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 3; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D3" && destroyerdirection == "HL") {
        for (int i = 2, j = 3; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 3; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D2" && destroyerdirection == "HL") {
        for (int i = 1, j = 3; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 3; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "D1" && destroyerdirection == "HL") {
        for (int i = 0, j = 3; j >= 2; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 3; j >= 2; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C10" && destroyerdirection == "HL") {
        for (int i = 9, j = 2; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 2; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C9" && destroyerdirection == "HL") {
        for (int i = 8, j = 2; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 2; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C8" && destroyerdirection == "HL") {
        for (int i = 7, j = 2; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 2; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C7" && destroyerdirection == "HL") {
        for (int i = 6, j = 2; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 2; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C6" && destroyerdirection == "HL") {
        for (int i = 5, j = 2; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 2; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C5" && destroyerdirection == "HL") {
        for (int i = 4, j = 2; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 2; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C4" && destroyerdirection == "HL") {
        for (int i = 3, j = 2; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 2; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C3" && destroyerdirection == "HL") {
        for (int i = 2, j = 2; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 2; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C2" && destroyerdirection == "HL") {
        for (int i = 1, j = 2; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 2; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "C1" && destroyerdirection == "HL") {
        for (int i = 0, j = 2; j >= 1; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 2; j >= 1; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B10" && destroyerdirection == "HL") {
        for (int i = 9, j = 1; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 9, j = 1; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B9" && destroyerdirection == "HL") {
        for (int i = 8, j = 1; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 8, j = 1; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B8" && destroyerdirection == "HL") {
        for (int i = 7, j = 1; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 7, j = 1; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B7" && destroyerdirection == "HL") {
        for (int i = 6, j = 1; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 6, j = 1; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B6" && destroyerdirection == "HL") {
        for (int i = 5, j = 1; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 5, j = 1; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B5" && destroyerdirection == "HL") {
        for (int i = 4, j = 1; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 4, j = 1; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B4" && destroyerdirection == "HL") {
        for (int i = 3, j = 1; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 3, j = 1; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B3" && destroyerdirection == "HL") {
        for (int i = 2, j = 1; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 2, j = 1; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B2" && destroyerdirection == "HL") {
        for (int i = 1, j = 1; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 1, j = 1; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }
    if (destroyerlocation == "B1" && destroyerdirection == "HL") {
        for (int i = 0, j = 1; j >= 0; j--) {
            if (table[i][j] != ' ') {
                cout << "A space has been occupied" << endl;
                return -1;
            }
        }
        for (int i = 0, j = 1; j >= 0; j--) {
            if (table[i][j] == ' ') {
                table[i][j] = destroyer;
            }
        }
        return 0;
    }

}

// BLOCK ENDS HERE