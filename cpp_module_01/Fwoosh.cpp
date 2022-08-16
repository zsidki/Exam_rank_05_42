#include "Fwoosh.hpp"

    Fwoosh::Fwoosh(){}

    Fwoosh::Fwoosh(const std::string &fwooshed): fwooshed("fwooshed"){

    }

    Fwoosh::~Fwoosh(){
    }

    const std::string   Fwoosh::getFwooshed() const{
        return this->fwooshed;
    }

    Fwoosh*       Fwoosh::clone() const {
        return(new Fwoosh(*this));
    }
