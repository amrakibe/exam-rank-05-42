#include "SpellBook.hpp"

SpellBook::~SpellBook(){}

SpellBook::SpellBook()
{

}

void SpellBook::learnSpell(ASpell *obj)
{
    book[obj->getName()] = obj;
}

void SpellBook::forgetSpell(std::string const &obj)
{
    book.erase(obj);
}

ASpell* SpellBook::createSpell(std::string const &obj)
{
    std::map<std::string, ASpell*>::iterator it = book.find(obj);
    if(it != book.end())
        return book[obj];
    return(NULL);
}