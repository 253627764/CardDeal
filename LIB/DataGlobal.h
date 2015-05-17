#ifndef __DATAGLOBAL_H__
#define __DATAGLOBAL_H__


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


#endif