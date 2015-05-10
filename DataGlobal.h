#include <iostream>
#include <list>
using namespace std;



typedef list<CardDeal::Card *> GraveyadCards;


class DataGlobal{
    
public:
    DataGlobal();
    static void init();
    static int getLeftHp();
    static int getRightHp();
    static void setLeftHp(int h);
    static void setRightHp(int h);
    static int getLeftGraveyadCount();
    static int getRightGraveyadCount();
    
    static GraveyadCards getLeftGraveyadCards();
    static GraveyadCards getRightGraveyadCards();
    static void pushLeftGraveyadCards(CardDeal::Card *c);
    static void pushRightGraveyadCards(CardDeal::Card *c);
private:
    static int left_hp;
    static int right_hp;
    static GraveyadCards left_graveyad_cards,right_graveyad_cards;
    
};

