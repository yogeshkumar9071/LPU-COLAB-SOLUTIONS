//Create a program to manage book sales data, including the book's ISBN, units sold, total revenue, and average price. Implement a class named SalesData with the following features:


#include <iostream>
#include <string>
#include <iomanip>

class SalesData {
private:
    std::string isbn;
    double totalRevenue;
    int unitsSold;

public:

    SalesData(const std::string& bookISBN, double revenue, int sold)
        : isbn(bookISBN), totalRevenue(revenue), unitsSold(sold) {}

    void displayData() {
        std::cout << "Book: " << isbn << std::endl;
        std::cout << "Units Sold: " << unitsSold << std::endl;
        std::cout << "Revenue Generated: " << std::fixed << std::setprecision(2) << totalRevenue << std::endl;
        if (unitsSold != 0) {
            double averagePrice = totalRevenue / unitsSold;
            std::cout << "Average Price: " << std::fixed << std::setprecision(2) << averagePrice << std::endl;
        } else {
            std::cout << "Average Price: N/A" << std::endl;
        }
    }
};

int main() {
    std::string isbn;
    double revenue;
    int sold;

    std::getline(std::cin, isbn);
    std::cin >> revenue >> sold;

    SalesData bookSales(isbn, revenue, sold);

    bookSales.displayData();

    return 0;
}