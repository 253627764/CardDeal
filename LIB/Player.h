#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <iostream>
#include <list>
#include "Card.h"
using namespace std;
typedef list<CardDeal::Card *> Cards;
class Player{
    
public:
    Player(int h,int m);
    int getHp();
    int getMp();
    void setHp(int);
    void setMp(int);
    int getGraveyadCardsCount();
    
    Cards getGraveyadCards();
    void pushGraveyadCards(CardDeal::Card *c);
    void pushHandCards(CardDeal::Card *c);
    Cards getHandCards();
    
    
    void onHpChanged();
private:
    int hp;
    int mp;
    Cards graveyad_cards,hand_cards;
    
};



#endif