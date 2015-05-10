#include "Player.h"




Player::Player(int h,int m){
    this->hp = h;
    this->mp = m;
}
int Player::getHp(){
    return this->hp;
}
int Player::getMp(){
    return this->mp;
}
void Player::setHp(int i){
    this->hp = i;
}
void Player::setMp(int i){
    this->mp = i;
}
int Player::getGraveyadCardsCount(){
    return this->graveyad_cards.size();
}
Cards Player::getGraveyadCards(){
    return this->graveyad_cards;
}
Cards Player::getHandCards(){
    return this->hand_cards;
}
void Player::pushGraveyadCards(CardDeal::Card *c){
    this->graveyad_cards.push_front(c);
}

