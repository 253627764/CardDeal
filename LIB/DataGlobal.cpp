#include "DataGlobal.h"


Player * DataGlobal::A;
Player * DataGlobal::B;
Player * DataGlobal::getPlayerA(){
    return DataGlobal::A;
}
Player * DataGlobal::getPlayerB(){
    return DataGlobal::B;
}

void DataGlobal::init(int h,int m){
    DataGlobal::A = new Player(h,m);
    DataGlobal::B = new Player(h,m);
}