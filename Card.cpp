#include "Card.h"

using namespace CardDeal;

Card::Card()
{

}

Card::~Card()
{

}

Card::Card(int id, CardVal leftval, CardVal rightval, CardVal consume)
{
        this->_id = id;
        this->_leftVal = leftval;
        this->_rightVal = rightval;
        this->_consume = consume;
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

void Card::setId(int id)
{
        this->_id = id;
}

CardVal Card::LeftVal() const
{
        return this->_leftVal;
}

void Card::setLeltVal(CardVal leftval)
{
        this->_leftVal = leftval;
}

CardVal Card::RightVal() const
{
        return this->_rightVal;
}

void Card::setRightVal(CardVal rightval)
{
        this->_rightVal = rightval;
}

CardVal Card::Consume() const
{
        return this->_consume;
}

void Card::setConsume(CardVal consume)
{
        this->_consume = consume;
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

