#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    private:
        std::string fwooshed;

        Fwoosh();
        Fwoosh( const Fwoosh&);

    public:
        Fwoosh(const std::string &fwooshed);
        ~Fwoosh();
        Fwoosh& operator=(const Fwoosh&);

        const std::string   getFwooshed() const;
        virtual Fwoosh*       clone() const;


};

#endif