#ifndef RESTURANT_MANAGER_H
#define RESTURANT_MANAGER_H
#include <bits/stc++.h>
using namespace std;
class ResturantManager{
    vector<Resturant*> resturant_lists;
    public : 
    void addResturant (Resturant* rest)
    {
        resturant_lists.push_back(rest);
    }
    vector<Resturant*> getResturant()
    {
        return resturant_lists;
    }
    ~ResturantManager()
    {
        resturant_lists.clear();
    }
};
#endif