#include <iostream>
#include <vector>
#include <unordered_map>

struct Order {
    std::string customerName;
    std::string orderItems;
    double totalCost;
    std::vector<std::string> items;
};

std::unordered_map<std::string, double> menu {
    {"Burger", 10.99},
    {"Cheese Burger", 11.99},
    {"Turkey Burger", 11.99},
    {"Fries", 6.99 }
};

void displayMenuItems (std::unordered_map<std::string, double> menu) {
    for (auto it = menu.begin(); it != menu.end(); it++) {
        std::cout << it->first << " - " << it->second << std::endl;
    }
}


int main() {
    Order order;
    std::string res;
    std::cout << "Welcome to GoodBurger Home of the GoodBurger" << std::endl;
    
    while (true) {
        std::cout << "Can I Take Your Order?" << std::endl;
        std::cout << "Insert y for 'Yes' or n for n 'NO'" << std::endl;
        
        std::getline(std::cin, res);
        
        if (res == "y") {
            std::cout << "Can I please have the customer's name" << std::endl;
            std::getline(std::cin, order.customerName);
        }

        std::cout << "Hi " << order.customerName << " Here's our menu:" << std::endl;
        displayMenuItems(menu);
        break;
    }


    return 0;
}
