#include "./LIB/Card.h"
#include "./LIB/DataGlobal.h"
#include "./LIB/CardXml.h"
#include <iostream>
using namespace CardDeal;

int main()
{


		DataGlobal::init(30,1);
		Player *A = DataGlobal::getPlayerA();
		CardXml *xm = new CardXml();
		Card *cd = xm->getCard(1);
		A->pushHandCards(cd);


		std::cout<<cd->Name();
        return 0;
}