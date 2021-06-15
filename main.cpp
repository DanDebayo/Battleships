///PROGRAM STARTS HERE

#include <iostream>
#include <vector>
using namespace std;
#include "Game.h"
# include <time.h>


int main() {

    string location;
    string direction;
    int valid;
    int player;
    int i;
    char retry;

    do {

        cout << "Welcome to Battleship" << endl;
        cout << "Below is the Sample Board" << endl;
        computer gameobject;
        shiplocation GPS;
        GPS.board();


    cout << "The Battleships are listed below and the amount of size required" << endl;
    cout << "Type         Size" << endl;
    cout << "Carrier       5" << endl;
    cout << "Battleship    4" << endl;
    cout << "Cruiser       3" << endl;
    cout << "Submarine     3" << endl;
    cout << "Destroyer     2" << endl;
    cout << endl;
    cout << "NOTE: Your ships can only be placed horizontally and vertically." << endl;
    cout << endl;
    //THIS ASKS THE PLAYER FOR SHIP PLACEMENT
    do {
        cout << "Please input where you want the Carrier to go" << endl;
        cin >> location;
        GPS.Setclocation(location);
        cout << "Please which direction is it going" << endl;
        cout << "Note: Direction should be inputted as VU, VD, HR and HL. V is vertical , U as up , D is down ,H is horizontal , R is Right , L is left " << endl;
        cin >> direction;
        GPS.Setcdirection(direction);

        valid = GPS.Carrier();
    } while (valid == -1);

    GPS.printboard();
    do {
        cout << "Please input where you want the Battleship to go" << endl;
        cin >> location;
        GPS.SetBlocation(location);
        cout << "Please which direction is it going" << endl;
        cin >> direction;
        GPS.SetBdirection(direction);
        valid = GPS.Battleship();
    } while (valid == -1);

    GPS.printboard();
    do {
        cout << "Please input where you want the Cruiser to go" << endl;
        cin >> location;
        GPS.Setcrlocation(location);
        cout << "Please which direction is it going" << endl;
        cin >> direction;
        GPS.Setcrdirection(direction);
        valid = GPS.Cruiser();
    } while (valid == -1);

    GPS.printboard();
    do {
        cout << "Please input where you want the Submarine to go" << endl;
        cin >> location;
        GPS.Setsublocation(location);
        cout << "Please which direction is it going" << endl;
        cin >> direction;
        GPS.Setsubdirection(direction);
        valid = GPS.Submarine();
    } while (valid == -1);

    GPS.printboard();
        do {
            cout << "Please input where you want the Destroyer to go" << endl;
            cin >> location;
            GPS.Setdeslocation(location);
            cout << "Please which direction is it going" << endl;
            cin >> direction;
            GPS.Setdesdirection(direction);
            valid = GPS.Destroyer();
        } while (valid == -1);

        GPS.printboard();
//BLOCK ENDS HERE
cout << "Time to Attcak" << endl;
cout <<endl;
//THIS SETS UP THE COMPUTER BOARD
        gameobject.clearcomp();
        gameobject.setship();
        // BLOCK ENDS HERE
        cout << "number of ships" << gameobject.Checkwin() << endl;
        //THIS RANDOMLY CHOOSES WHO GOES FIRST

        srand((unsigned) time(0));

        player = 1 + (rand() % 2);
//BLOCK ENDS HERE

//THIS IS THE ATTACKING SHIPS COMMAND
        do {

            if (player == 1) {
                gameobject.playerattack();
                player++;

            } else if (player == 2) {

                GPS.computerattack();
                player--;
            }

            i = gameobject.Checkwin();


        } while (i != 5);
        // BLOCK ENDS HERE

        // THIS ASKS TO RESTART THE GAME
        cout << "Would you like to play again(Y/N)" << endl;

        cin >> retry;

        if (retry == 'Y') {
            valid = -1;
            GPS.clear();
            gameobject.clearcom();

        } else if (retry == 'N') {

            cout << "Thank you for playing" << endl;

        } else {
            cout << "Invalid answer. Please try again" << endl;
            cout << "(Y/N)" << endl;

            cin >> retry;

        }

    }while (valid == -1);
// BLOCK ENDS HERE

    return 0;
}

///PRORAM ENDS HERE

