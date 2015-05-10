
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
                Card(int id, CardVal leftval, CardVal rightval, CardVal consume);

                Place LocationStatus() const;

                int Id() const;
                void setId(int id);

                CardVal LeftVal() const;
                void setLeltVal(CardVal leftval);

                CardVal RightVal() const;
                void setRightVal(CardVal rightval);

                CardVal Consume() const;
                void setConsume(CardVal consume);

                bool IsShow() const;
                void setIsShow(bool isshow);

                CardVec Vec() const;
                void setVec(CardVec vec);

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

                CardVal _leftVal;
                CardVal _rightVal;
                CardVal _consume;

                bool _isShow;
                CardVec _vec;

                int _id;

        };
}