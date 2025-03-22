#include "friendmodel.hpp"
#include"db.h"

// 添加好友关系
void FriendModel::insert(int userid, int friendid)
{
    // 组装SQL语句
    char sql[1024] = {0};
    sprintf(sql, "insert into Friend values(%d,%d)",userid,friendid);

    MySQL mysql;
    if (mysql.connect())
    {
        if (mysql.update(sql));
    }
}

// 返回用户好友列表
vector<User> FriendModel::query(int userid){
    // 组装SQL语句
    char sql[1024] = {0};
    sprintf(sql, " select User.id,User.name,User.state from User inner join Friend on Friend.friendid = User.id where Friend.userid = %d", userid);

    vector<User> vec;
    MySQL mysql;
    if (mysql.connect())
    {
        MYSQL_RES *res = mysql.query(sql);
        if (res != nullptr)
        {
            MYSQL_ROW row;
            while((row=mysql_fetch_row(res))!=nullptr)
            {
                User user;
                user.setID(atoi(row[0])); // 转为整数
                user.setName(row[1]);
                user.setState(row[2]);
                vec.push_back(user);
            }
            mysql_free_result(res); // 释放内存
            return vec;
        }
    }

    return vec;
}