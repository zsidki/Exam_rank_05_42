#ifndef Fwoosh_HPP
#define Fwoosh_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;
class Fwoosh : public ASpell
{

    public :
        Fwoosh();
        virtual ~Fwoosh();
        virtual ASpell*     clone() const;

};


#endif