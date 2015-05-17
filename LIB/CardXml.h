#include "Card.h"
#include "tinyxml/tinyxml.h"
#include "tinyxml/tinystr.h"
#include <iostream>
#include <list>
#include <map> 
using namespace CardDeal;
using namespace std;

class CardXml{
public:
	CardXml();
	CardXml(string filename);
	~CardXml();

	Card* getCard(string filename);
	Card* getCard(int id);

	

private:
	map<int,string> CardMap;


};