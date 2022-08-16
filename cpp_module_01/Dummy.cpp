#include "Dummy.hpp"

    Dummy::Dummy(){}

    Dummy::Dummy(const std::string &type): type("Target Practice Dummy"){

    }

    Dummy::~Dummy(){
    }

    const std::string   Dummy::getType() const{
        return this->type;
    }
