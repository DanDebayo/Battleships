#ifndef BATTLESHIPS_GAME_H
#define BATTLESHIPS_GAME_H
#include <vector>

class computer {
public:
    char comptboard[10][10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                               ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                               ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                               ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                               ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                               ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                               ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                               ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                               ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                               ' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
    void clearcomp();
    void clearcom();
    void showcomp();
    void shipset();
    void setship();
    char comboard[10][10] ;
    void Setshipnumber(int nships);




    void compthinkboard();           // THIS IS THE COMPUTER THINK BOARD

    int Checkwin();                 // THIS IS TO CHECK FOR WINS

    int playerattack();                // THIS IS FOR PLAYER ATTACKS
private:

    int numships = 5;                                 // THESE ARE THE NUMBER OF SHIPS
    string attacklocation;                  // THESE ARE THE PLACEMENT COMMANDS FO THE PLAYER TO ATTACK
    // THESE ARE THE HIT AND MISS SIGNS
    char miss = 'O';
    char hit  = 'X';
// BLOCK ENDS HERE

};

class shiplocation{
public:
    char table[10][10] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                          ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                          ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                          ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                          ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                          ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                          ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                          ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                          ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
                          ' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};   // THIS ASSIGNS SPACES TO THE BOARD



    void board();              // THIS IS FOR THE BOARD
    void clear();
    void printboard();
    void computerattack();
    int checkwin();

    // THESE ARE FOR THE SHIPS
    int Carrier();
    int Battleship();
    int Cruiser();
    int Submarine();
    int Destroyer();
    // BLOCK ENDS HERE

    // THESE ARE THE LOCATIONS TO BE ACCESSED IN MAIN
    void Setclocation(string cloc);
    void Setcdirection(string cdir);

    void SetBlocation(string bloc);
    void SetBdirection(string bdir);

    void Setcrlocation(string crloc);
    void Setcrdirection(string crdir);

    void Setsublocation(string subloc);
    void Setsubdirection(string subdir);

    void Setdeslocation(string desloc);
    void Setdesdirection(string desdir);
private:
    string carrierlocation;
    string carrierdirection;

    string battleshiplocation;
    string  battleshipdirection;

    string  cruiserlocation;
    string  cruiserdirection;

    string  submarinelocation;
    string  submarinedirection;

    string  destroyerlocation;
    string  destroyerdirection;

    // THESE ARE THE SIGNS TO SIGNIFY EACH KIND OF SHIP
    char carrier = '5';
    char battleship = '4';
    char cruiser = '3';
    char submarine = 'E';
    char destroyer= '2';
};


#endif //BATTLESHIPS_GAME_H
