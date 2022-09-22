#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "ASpell.hpp"

class ASpell;
class Warlock{
    private :
        std::string name;
        std::string title;
        std::vector <ASpell *> spells;

    public:
        Warlock();
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();

        void                setTitle(const std::string& title);
        const std::string&   getName() const;
        const std::string &  getTitle() const;
        void                introduce() const;

        void                learnSpell(ASpell *spell);
        void                forgetSpell(std::string );
		void				launchSpell(std::string, const ATarget& );


};

#endif