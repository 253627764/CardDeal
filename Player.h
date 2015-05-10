#include <iostream>
#include <list>
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
    Cards getHandCards();
    
    
    void onHpChanged();
private:
    int hp;
    int mp;
    Cards graveyad_cards,hand_cards;
    
};