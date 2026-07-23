#ifndef RESTURANT_MANAGER_H
#define RESTURANT_MANAGER_H

#include <vector>
#include <string>
#include "../models/Resturant.h"

using namespace std;

class ResturantManager {
private:
    vector<Resturant*> resturant_lists;
    static ResturantManager* instance;
    ResturantManager() = default;

public:
    ResturantManager(const ResturantManager&) = delete;
    ResturantManager& operator=(const ResturantManager&) = delete;

    static ResturantManager* getInstance() {
        return instance;
    }

    void addResturant(Resturant* rest) {
        resturant_lists.push_back(rest);
        cout << "Added resturant with name : " << rest -> getName() << endl;
    }

    vector<Resturant*> getResturant() {
        return resturant_lists;
    }

    ~ResturantManager() {
        resturant_lists.clear();
    }

    vector<Resturant*> searchByLocation(const string &location) {
        vector<Resturant*> results;
        for (auto &res : resturant_lists) {
            if (res->getLocation() == location) {
                results.push_back(res);
            }
        }
        return results;
    }
};

ResturantManager* ResturantManager::instance = new ResturantManager();

#endif // RESTURANT_MANAGER_H