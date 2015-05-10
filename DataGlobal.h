#include <iostream>
#include "Player.h"
using namespace std;

class DataGlobal{
    
private:
    DataGlobal();
    static Player *A;
    static Player *B;
public:
    static void init(int h,int m);
    static Player * getPlayerA();
    static Player * getPlayerB();
};
