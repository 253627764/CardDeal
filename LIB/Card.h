#ifndef __CARD_H__
#define __CARD_H__

#include <string>
#include <map>

namespace CardDeal
{
        typedef int CardVal;

        class Card
        {
        public:

                enum Place 
                { 
                        Head,
                        Area,
                        Cemetery,
                        Outside
                 };

                 enum CardVec 
                 { 
                        Vertical,
                        Horizontal
                 };

                Card();
                ~Card();
                Card(int id, std::map<std::string, CardVal> valuemap, std::map<std::string, std::string> constantmap, CardVal consume);

                Place LocationStatus() const;

                int Id() const;
                void setId(int id);

//                CardVal LeftVal() const;
//                void setLeltVal(CardVal leftval);

//                CardVal RightVal() const;
//                void setRightVal(CardVal rightval);

                CardVal Consume() const;
                void setConsume(CardVal consume);

                CardVal getValue(const std::string &key) const;
                void setValue(const std::string &key, CardVal value);

                std::string getConstant(const std::string &key) const;
                void setConstant(const std::string &key, int value);

                bool IsShow() const;
                void setIsShow(bool isshow);

                CardVec Vec() const;
                void setVec(CardVec vec);


//                char*  Name() const;

                bool Put();
                bool Die();
                bool Back();
                bool Out();
                bool OutBack();
                bool BackArea();
                bool OutBackArea();

                virtual bool Attach();

        private:

                void _setLocationStatus(Place status);

                Place _LocationStatus;

                std::map<std::string, CardVal> _cardValueMap;
                std::map<std::string, std::string> _cardConstantMap;

//                CardVal _leftVal;
//                CardVal _rightVal;
                CardVal _consume;


                bool _isShow;
                CardVec _vec;
//                char *_name;
                int _id;

        };
}




#endif
