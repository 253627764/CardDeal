#include "Card.h"
using namespace CardDeal;
using namespace std;

Card::Card()
{

}


Card::Card(int id, map<string, CardVal> valuemap, map<string, string> constantmap, CardVal consume)
{
    this->_id = id;
    this->_cardConstantMap = constantmap;
    this->_cardValueMap = valuemap;
    this->_consume = consume;
}
Card::~Card()
{

}

Card::Place Card::LocationStatus() const
{
    return this->_LocationStatus;
}

void Card::_setLocationStatus(Card::Place status)
{
    this->_LocationStatus = status;
}

int Card::Id() const
{
    return this->_id;
}


//char* Card::Name() const
//{
//    return this->_name;
//}

void Card::setId(int id)
{
    this->_id = id;
}

//CardVal Card::LeftVal() const
//{
//        return this->_leftVal;
//}

//void Card::setLeltVal(CardVal leftval)
//{
//        this->_leftVal = leftval;
//}

//CardVal Card::RightVal() const
//{
//        return this->_rightVal;
//}

//void Card::setRightVal(CardVal rightval)
//{
//        this->_rightVal = rightval;
//}

CardVal Card::Consume() const
{
    return this->_consume;
}

void Card::setConsume(CardVal consume)
{
    this->_consume = consume;
}

CardVal Card::getValue(const string &key) const
{
    map<string, CardVal>::const_iterator valueIt = this->_cardValueMap.find(key);
    if(valueIt == this->_cardValueMap.end())
        return 0;
    else
        return valueIt->second;
//    return (valueIt == this->_cardValueMap.end()) ? "" : *valueIt;
}

void Card::setValue(const string &key, CardVal value)
{
    this->_cardValueMap[key] = value;
}

string Card::getConstant(const string &key) const
{
    map<string, string>::const_iterator valueIt = this->_cardConstantMap.find(key);
    if(valueIt == this->_cardConstantMap.end())
        return "";
    else
        return valueIt->second;
//    return (valueIt == this->_cardConstantMap.end()) ? "" : *valueIt;
}

void Card::setConstant(const string &key, int value)
{
    this->_cardConstantMap[key] = value;
}

bool Card::IsShow() const
{
    return this->_isShow;
}

void Card::setIsShow(bool isshow)
{
    this->_isShow = isshow;
}


Card::CardVec Card::Vec() const
{
    return this->_vec;
}

void Card::setVec(CardVec vec)
{
    this->_vec = vec;
}

bool Card::Put()
{
    this->setConsume(Card::Area);
    return true;
}

bool Card::Die()
{
    this->setConsume(Card::Cemetery);
    return true;
}

bool Card::Back()
{
    this->setConsume(Card::Head);
    return true;
}

bool Card::Out()
{
    this->setConsume(Card::Outside);
    return true;
}

bool Card::OutBack()
{
    this->setConsume(Card::Head);
    return true;
}

bool Card::BackArea()
{
    this->setConsume(Card::Area);
    return true;
}

bool Card::OutBackArea()
{
    this->setConsume(Card::Area);
    return true;
}
bool Card::Attach()
{
    return true;
}
