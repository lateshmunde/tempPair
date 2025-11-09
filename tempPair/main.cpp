#include <iostream>
#include <string>
#include <map>
#include "Pairs.h"


template <typename T1, typename T2>
void menu()
{
    //Pair<T1, T2> p1, p2;
    int choice;
    int i = 1;
    std::map<int, Pair<T1, T2 >> m1;
    do
    {
        std::cout << "\n------------ MENU-----------\n";
        std::cout << "1. Add Pair\n";
        std::cout << "2. Display Pairs\n";
        std::cout << "3. Change values in Pair\n";
        std::cout << "4. Compare (==)\n";
        std::cout << "5. Swap Pairs\n";
		std::cout << "6. Exit\n";
        std::cout << "7. Back to main menu\n";
        std::cout << "Enter choice: ";
        std::cout << "\n----------------------------\n";
        std::cin >> choice;

        switch (choice) {
        case 1:
        {
            T1 a;
            T2 b;
            Pair<T1, T2> p1;
            std::cout << "Enter first value: ";
            std::cin >> a;
            p1.setFirst(a);
            std::cout << "Enter second value: ";
            std::cin >> b;
            p1.setSecond(b);

            m1.insert({ i, p1 });
            i++;

            break;
        }
        case 2:
        {
            for (auto value : m1)
            {
                std::cout << value.first << " : ";
                value.second.display();
            }
            break;
        }
        case 3:
        {
            int key;
            std::cout << " Enter key of pair to change values: ";
            std::cin >> key;

            m1[key].display();
            T1 a;
            T2 b;
            std::cout << "Enter new first value in pair : ";
            std::cin >> a;
            m1[key].setFirst(a);
            std::cout << " Enter new second value in pair : ";
            std::cin >> b;
            m1[key].setSecond(b);
            break;
        }
        case 4:
        {
            int key1;
            std::cout << " Enter key 1 of pair to compare values: ";
            std::cin >> key1;
            int key2;
            std::cout << " Enter key 2 of pair to compare values: ";
            std::cin >> key2;

            if (m1[key1] == m1[key2])
                std::cout << "Pairs are equal.\n";
            else
                std::cout << "Pairs are not equal.\n";

            break;
        }
        case 5:
        {
            int key1;
            std::cout << " Enter key 1 of pair to swap values: ";
            std::cin >> key1;
            int key2;
            std::cout << " Enter key 2 of pair to swap values: ";
            std::cin >> key2;
            m1[key1].display();
            m1[key2].display();

            swap(m1[key1], m1[key2]);

            break;
        }
        case 6:
        {
            std::cout << " Exiting\n";
            break;
        }
        case 7:
        {
            std::cout << "Returning to main menu.\n";
            break;
        }
        default:
        {
            std::cout << "Invalid option. Please try again.\n";
            break;
        }
        }
    } while (choice != 6);
}

int main() {
  
	menu<int, std::string>();

	return 0;

}