#include "Warlock.hpp"

Warlock::Warlock(){}

Warlock::Warlock(const std::string &name, const std::string &title): name(name), title(title){
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
    std::cout << this->name << ": My job here is done!" << std::endl;
}

void                Warlock::setTitle(const std::string& title){
    this->title = title;
}

const std::string&   Warlock::getName() const{
    return this->name;
}

const std::string&   Warlock::getTitle() const{
    return this->title;
}

void                Warlock::introduce() const{
    std::cout<< this->name <<": I am "<< this->name <<", "<< this->title <<" !" <<std::endl;
}

void                Warlock::learnSpell(ASpell *spell){
    for(size_t i = 0; this->spells.size(); i++)
        if(this->spells[i]->getName() == spell->getName())
            return;
        spells.push_back(spell->clone());
}

void                Warlock::forgetSpell(const std::string &name ){
    for(size_t i = 0; this->spells.size(); i++)
    {
        if(this->spells[i]->getName() == name )
        {
            this->spells.clear();
            return;
        }
    }
}
void				Warlock::launchSpell(const std::string &name , const ATarget& target){
    for(size_t i = 0; this->spells.size(); i++)
    {
        if(this->spells[i]->getName() == name )
            return this-> spells[i]->launch(target);
    }
    
}
