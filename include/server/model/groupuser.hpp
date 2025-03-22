#ifndef GROUPUSER_H
#define GRUPUSER_H

#include "user.hpp"

class GroupUser : public User
{
public:
    void setRole(string role) { this->role = role; }
    string getRole() const { return this->role; }

private:
    string role;
};

#endif 