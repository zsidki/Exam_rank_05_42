#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ATarget{
    protected :
        std::string type;

        ATarget();
        ATarget( const ATarget&);
    public:
        ATarget(const std::string &type);
        ~ATarget();
        ATarget& operator=(const ATarget&);

        const std::string   getType() const;

        virtual ATarget*       clone() const = 0;

        // void    getHitBySpell(const ASpell& spell) const;

};

#endif
