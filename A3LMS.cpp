/*3. Online Shopping Cart:
Create a C++ program that models an online shopping cart system. Define classes like Product, ShoppingCart, 
and Customer. Use abstraction to abstract the shopping cart's functionality, such as adding products, calculating 
the total cost, and processing the checkout.
In this program:
The Product class represents products with a name and price.
The ShoppingCart class allows adding products and calculating the total cost of items in the cart.
The Customer class has a shopping cart and can add products to it and process the checkout.*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product {
private:
    string name;
    double price;

public:
    Product(const string& productName, double productPrice) : name(productName), price(productPrice) {}

    string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }
};

class ShoppingCart {
private:
    vector<Product> items;

public:
    void addItem(const Product& product) {
        items.push_back(product);
    }

    double calculateTotalCost() const {
        double total = 0.0;
        for (const Product& product : items) {
            total += product.getPrice();
        }
        return total;
    }

    void displayCart() const {
        cout << "Shopping Cart Items:\n";
        for (const Product& product : items) {
            cout << "Product: " << product.getName() << ", Price: $" << product.getPrice() << endl;
        }
        cout << "Total Cost: $" << calculateTotalCost() << endl;
    }
};

class Customer {
private:
    string name;
    ShoppingCart cart;

public:
    Customer(const string& customerName) : name(customerName) {}

    void addToCart(const Product& product) {
        cart.addItem(product);
    }

    void checkout() {
        cout << "Checkout for " << name << ":\n";
        cart.displayCart();
        cout << "Thank you for shopping with us!\n";
    }
};

int main() {
    // Create some products
    Product product1("Laptop", 1000.0);
    Product product2("Smartphone", 500.0);
    Product product3("Headphones", 50.0);

    // Create a customer and add products to their shopping cart
    Customer customer("John");
    customer.addToCart(product1);
    customer.addToCart(product2);
    customer.addToCart(product3);

    // Process the checkout
    customer.checkout();

    return 0;
}
