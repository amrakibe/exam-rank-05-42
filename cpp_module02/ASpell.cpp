#include "ASpell.hpp"

ASpell::ASpell(){}
ASpell::~ASpell(){}

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