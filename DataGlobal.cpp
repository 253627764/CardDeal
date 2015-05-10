#include "DataGlobal.h"



int DataGlobal::left_hp,DataGlobal::right_hp;
GraveyadCards DataGlobal::left_graveyad_cards,DataGlobal::right_graveyad_cards;

void DataGlobal::init(){
    DataGlobal::left_hp = 0;
    DataGlobal::right_hp = 0;
}

void DataGlobal::pushLeftGraveyadCards(CardDeal::Card *c){
    DataGlobal::left_graveyad_cards.push_front(c);
}

void DataGlobal::pushRightGraveyadCards(CardDeal::Card *c){
    right_graveyad_cards.push_front(c);
}

GraveyadCards DataGlobal::getRightGraveyadCards(){
    return DataGlobal::right_graveyad_cards;
}

GraveyadCards DataGlobal::getLeftGraveyadCards(){
    return DataGlobal::left_graveyad_cards;
}
void DataGlobal::setLeftHp(int h){
    DataGlobal::left_hp = h;
}
void DataGlobal::setRightHp(int h){
    DataGlobal::right_hp = h;
}
int DataGlobal::getLeftHp(){
    return DataGlobal::left_hp;
}
int DataGlobal::getRightHp(){
    return DataGlobal::right_hp;
}

int DataGlobal::getLeftGraveyadCount(){
    return DataGlobal::left_graveyad_cards.size();
}

int DataGlobal::getRightGraveyadCount(){
    return DataGlobal::right_graveyad_cards.size();
}



