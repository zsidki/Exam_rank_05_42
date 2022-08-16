#ifndef Dummy_HPP
#define Dummy_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class Dummy : public ATarget
{
    private :
        std::string type;

        Dummy();
        Dummy( const Dummy&);
    public:
        Dummy(const std::string &type);
        ~Dummy();
        Dummy& operator=(const Dummy&);

        const std::string   getType() const;

        virtual Dummy*       clone() const = 0;


};

#endif
