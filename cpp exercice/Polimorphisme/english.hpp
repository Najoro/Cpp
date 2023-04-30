#ifndef _ENGLISH_
    #define _ENGLISH_
    #include <iostream>
    #include <string>
    #include "someone.hpp"
    using namespace std;

    class English : public Someone
    {
        using Someone::Someone;
        
        public:
            void SayGoodBey() override; 
    };

#endif //_ENGLISH_
