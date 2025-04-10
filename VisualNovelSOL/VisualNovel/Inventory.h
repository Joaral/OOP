#pragma once
#include <vector>
#include <string>

class Inventory {
private:
    std::vector<std::string> items;

public:
    void AddItem(const std::string& item);
    void ShowInventory() const;
};
