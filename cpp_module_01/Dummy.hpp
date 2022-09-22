#ifndef Dummy_HPP
#define Dummy_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;
class Dummy : public ATarget
{

    public :
        Dummy();
        virtual ~Dummy();
        virtual ATarget*     clone() const;

};


#endif