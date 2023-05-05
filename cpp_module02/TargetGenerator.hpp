#pragma once
#include <iostream>
#include <map>
#include "ATarget.hpp"

class ATarget;
class TargetGenerator
{
        TargetGenerator&operator=(const TargetGenerator &obj);
        TargetGenerator(const TargetGenerator &obj);
        std::map<std::string , ATarget*> book;
    public:
        ~TargetGenerator();
        TargetGenerator();
        void learnTargetType(ATarget*obj);
        void forgetTargetType(std::string const &obj);
        ATarget* createTarget(std::string const &obj);
};