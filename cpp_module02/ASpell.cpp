#include "ASpell.hpp"

ASpell::ASpell(){}
ASpell::~ASpell(){}

ASpell::ASpell(const ASpell &obj)
{
    *this = obj;
}

ASpell&ASpell::operator=(const  ASpell &obj)
{
    if(this != &obj)
    {
        this->name  = obj.name;
        this->effects = obj.effects;
    }
    return(*this);
}

std::string const &ASpell::getName()const
{
    return(this->name);
}
std::string const &ASpell::getEffects()const
{
    return(this->effects);
}

ASpell::ASpell(std::string const &name,std::string const &effects)
{
    this->name = name;
    this->effects = effects;
}

void ASpell::launch(ATarget const &tr) const
{
    tr.getHitBySpell((*this));
}