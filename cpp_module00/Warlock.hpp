#pragma once
#include <iostream>

class Warlock
{
    private:
        Warlock();
        Warlock(const Warlock &obj);
        Warlock&operator=(const Warlock obj);
        std::string name;
        std::string title;
    public:
        ~Warlock();
        Warlock(std::string const &name, std::string const &title);
        std::string const &getName()const;
        std::string const &getTitle()const;
        void setTitle(const std::string &title);
        void introduce() const;
};