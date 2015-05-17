#include "CardXml.h"
CardXml::CardXml(){
	new (this)CardXml("./data/cards.xml");
}

CardXml::CardXml(string filename){
	 char *id , *name;
	 TiXmlDocument *doc = new TiXmlDocument(filename.c_str());
	 bool loadOk = doc->LoadFile();
	 if(!loadOk){
	 	std::cout<<filename <<" data error"<<std::endl;
	 	return ;
	 }
	 for( TiXmlNode*  item = doc->FirstChild( "item" ); item;  item = item->NextSibling( "item" ) ) {  
	 		id = (char *)item->ToElement()->Attribute("id"); 
	 		name = (char *)item->ToElement()->GetText();
	 		this->CardMap.insert(map<int,string>::value_type(atoi(id),string(name)));
	 }

}
CardXml::~CardXml(){

}


Card* CardXml::getCard(int id){
	return this->getCard("./data/"+this->CardMap[id]);
}

Card* CardXml::getCard(string filename){
	 TiXmlDocument *doc = new TiXmlDocument(filename.c_str());
	 bool loadOk = doc->LoadFile();
	 if(!loadOk){
	 	return NULL;
	 }

     TiXmlElement *RootElement = doc->RootElement();

     const char* id = RootElement->FirstChild("id")->ToElement()->GetText();
     const char* name = RootElement->FirstChild("name")->ToElement()->GetText();
     const char* leftval = RootElement->FirstChild("leftval")->ToElement()->GetText();
     const char* rightval = RootElement->FirstChild("rightval")->ToElement()->GetText();
     const char* consume = RootElement->FirstChild("consume")->ToElement()->GetText();


     Card *cd = new Card(atoi(id),(char *)name,atoi(leftval),atoi(rightval),atoi(consume));
     return cd;

}