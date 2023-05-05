#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock
{
    private:
        Warlock();
        Warlock(const Warlock &obj);
        Warlock&operator=(const Warlock obj);
        std::string name;
        std::string title;
        std::map<std::string , ASpell*> map;
    public:
        ~Warlock();
        Warlock(std::string const &name, std::string const &title);
        std::string const &getName()const;
        std::string const &getTitle()const;
        void setTitle(const std::string &title);
        void introduce() const;
        void learnSpell(ASpell *sp);
        void forgetSpell(std::string sp_name);
        void launchSpell(std::string sp_name, const ATarget &sp_);
};