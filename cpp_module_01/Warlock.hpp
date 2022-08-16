#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"
#include <vector>

class Atarget;
class Warlock{
    private :
        std::string name;
        std::string title;
        std::vector <ASpell *> spells;


        Warlock();
        Warlock( const Warlock&);
    public:
        Warlock& operator=(const Warlock&);
        Warlock(const std::string &name, const std::string &title);
        ~Warlock();

        void    setTitle(const std::string& title);
        const std::string   getName() const;
        const std::string   getTitle() const;
        void                introduce() const;
        void                learnSpell(ASpell *spell);
        void                forgetSpell(const std::string );
		void				launchSpell(const std::string, const Atarget& );


};

#endif