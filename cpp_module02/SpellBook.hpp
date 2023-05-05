#pragma once
#include <iostream>
#include <map>
#include "ASpell.hpp"

class ASpell;
class SpellBook
{
    private:
        SpellBook(const SpellBook &obj);
        SpellBook&operator=(const SpellBook &obj);
        std::map<std::string, ASpell*> book;
    public:
        ~SpellBook();
        SpellBook();
        void learnSpell(ASpell *obj);
        void forgetSpell(std::string const &obj);
        ASpell* createSpell(std::string const &obj);
};