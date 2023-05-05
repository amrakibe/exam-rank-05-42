#include "SpellBook.hpp"

SpellBook::~SpellBook(){}

SpellBook::SpellBook()
{

}

void SpellBook::learnSpell(ASpell *obj)
{
    book.insert(std::pair<std::string, ASpell*>(obj->getName(), obj->clone()));
}
void SpellBook::forgetSpell(std::string const &obj)
{
    std::map<std::string, ASpell*>::iterator it = book.find(obj);
    if(it != book.end())
    {
        delete it->second;
        book.erase(obj);
    }
}

ASpell* SpellBook::createSpell(std::string const &obj)
{
    std::map<std::string, ASpell*>::iterator it = book.find(obj);
    if(it != book.end())
        return it->second->clone();
    return(NULL);
}