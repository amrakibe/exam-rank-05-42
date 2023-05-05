#include "Warlock.hpp"

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

std::string const &Warlock::getName()const
{
    return(this->name);
}

std::string const &Warlock::getTitle()const
{
    return(this->title);
}

void Warlock::setTitle(const std::string &title)
{
    this->title = title;
}

void Warlock::introduce() const
{
    std::cout << this->name <<": I am "<< this->name << ", "<<this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *sp)
{
    book.learnSpell(sp);
}

void    Warlock::forgetSpell(std::string sp_n)
{
    book.forgetSpell(sp_n);
}

void Warlock::launchSpell(std::string sp_name, const ATarget &sp_)
{
    ASpell *arr = book.createSpell(sp_name);
    if(arr)
        sp_.getHitBySpell(*arr);
}