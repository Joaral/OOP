#include "Inventory.h"
#include <iostream>

void Inventory::AddItem(const std::string& item) {
    items.push_back(item);
}

void Inventory::ShowInventory() const {
    if (items.empty()) {
        std::cout << "El inventario está vacío.\n";
    }
    else {
        std::cout << "Inventario:\n";
        for (const auto& item : items) {
            std::cout << "- " << item << "\n";
        }
    }
}