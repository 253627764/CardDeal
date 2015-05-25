#include "CardXml.h"
#include <string>
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

     map<string, int> valuemap;
     map<string, string> constantmap;

     TiXmlElement *ValueIt = RootElement->FirstChild("values")->FirstChild()->ToElement();
     while(ValueIt != NULL)
     {
         valuemap.insert(map<string,int>::value_type(ValueIt->Value(), atoi(ValueIt->GetText())));

         ValueIt = ValueIt->NextSiblingElement();
     }

     TiXmlElement *ConstantIt = RootElement->FirstChild("constants")->FirstChild()->ToElement();
     while(ConstantIt != NULL)
     {
         constantmap.insert(map<string,string>::value_type(ConstantIt->Value(), ConstantIt->GetText()));
         ConstantIt = ConstantIt->NextSiblingElement();
     }

     const char* id = RootElement->FirstChild("id")->ToElement()->GetText();
     const char* consume = RootElement->FirstChild("consume")->ToElement()->GetText();


     Card *cd = new Card(atoi(id), valuemap, constantmap, atoi(consume));
     delete doc;
     return cd;

}
