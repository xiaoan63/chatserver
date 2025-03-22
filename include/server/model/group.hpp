#ifndef GROUP_H
#define GROUP_H

#include "groupuser.hpp"
#include <string>
#include <vector>
using namespace std;

// Group表的ORM类
class Group
{
public:
    Group(int id = -1, string name = "", string desc = ""):id(id),name(name),desc(desc)
    {
    }

    void setID(int id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setDesc(string desc) { this->desc = desc; }

    int getID() const{ return this->id; }
    string getName() const{ return this->name; }
    string getDesc() const{ return this->desc; }
    vector<GroupUser> &getUsers() { return this->users; }

private:
    int id;
    string name;
    string desc;
    vector<GroupUser> users;
};

#endif