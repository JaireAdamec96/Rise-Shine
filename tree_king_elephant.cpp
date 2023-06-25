#include <iostream>
#include <string>

using namespace std;

class Restaurant {
public:
    string name;
    int breakfastDishes, lunchDishes;
    void setName(string n) {
        name = n;
    }
    
    void setBreakfastDishes(int d) {
        breakfastDishes = d;
    }
    
    void setLunchDishes(int d) {
        lunchDishes = d;
    }
    
    string getName() { 
        return name; 
    }
    int getBreakfastDishes() {
        return breakfastDishes;
    }
    
    int getLunchDishes() {
        return lunchDishes;
    }
    
    void printMenu() {
        cout << "===============================" << endl;
        cout << "[" << name << "]" << endl;
        cout << "Breakfast Dishes: " << breakfastDishes << endl;
        cout << "Lunch Dishes: " << lunchDishes << endl;
        cout << "===============================" << endl;
    }
    
    void exploreUniqueDishes() {
        // Insert unique dishes here 
        // ...
    }
    
    void exploreCreativeTwists() {
        // Insert creative twists here 
        // ...
    }
};

int main() {
    Restaurant restaurant;
    restaurant.setName("The Sunshine Café");
    restaurant.setBreakfastDishes(20);
    restaurant.setLunchDishes(30);
    restaurant.printMenu();
    restaurant.exploreUniqueDishes();
    restaurant.exploreCreativeTwists();
    
    return 0;
}