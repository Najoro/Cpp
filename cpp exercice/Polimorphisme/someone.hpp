#ifndef _SOMEONE_
    #define _SOMEONE_
    #include <iostream>
    #include <string>

    using namespace std;

    class Someone
    {
        protected:
            string _name;
        public:
            Someone();
            Someone(const string &name) noexcept;
            string getName();
            virtual void SayGoodBey(); 
    };

#endif //_SOMEONE_
