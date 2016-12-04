//Programmer: ANDREW BRAY          ID: 12518487
//Class: CS1570                    Section: A
//Date: 11/18/16                   File: polluter.h
//Description: Header file for the polluter class

#include "activist.h"


class polluter
{
  private:
    string name;
    short row_loc;
    short col_loc;
    char arr_Char;
    bool is_Caught;
    char last_Char;
  public:
    polluter(const string n):
      name(n), row_loc(-1), col_loc(-1), arr_Char('P'), isCaught(false),
      last_Char(SPACE) {}

    //Desc:Moves the polluter to an empty adjacent tile in a random direction
    //Pre: None
    //Post: The polluter has been moved one tile
    void random_move(town & T);

    //Desc: The polluter is placed in a random tile that is empty
    //Pre: None
    //Post: The polluter has been placed
    void place_me(town & T);

    //Desc: This gets the row position of the polluter
    //Pre: None
    //Post: Returns the row position of the polluter
    short getRow()const;

    //Desc: This gets the column of position of the polluter
    //Pre: None
    //Post: Returns the row position of the polluter
    short getCol()const;
};
