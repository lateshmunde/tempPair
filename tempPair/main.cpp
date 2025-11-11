#include <iostream>
#include <string>
#include <map>
//#include "maps.h"
#include "Pairs.h"




template <typename T1, typename T2>
void menu()
{
    int choice;
    int i = 1;
    //maps<int , Pairs<T1,T2>> m1
    std::map<int, Pair<T1, T2 >> m1;
    do
    {
        std::cout << "------------MENU-----------\n";
        std::cout << "1. Add Pair\n";
        std::cout << "2. Display Pairs\n";
        std::cout << "3. Change values in Pair\n";
        std::cout << "4. Compare (==)\n";
        std::cout << "5. Swap Pairs\n";
		std::cout << "6. Exit\n";
        std::cout << "----------------------------\n";
        std::cout << "Enter choice: ";
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
                /*std::cout << value.mapFirst() << " : ";
                value.mapSecond().display();*/
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

            swap(m1[key1], m1[key2]);

            for (auto value : m1)
            {
                std::cout << value.first << " : ";
                value.second.display();
            }

            break;
        }
        case 6:
        {
            std::cout << " Exiting\n";
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
  

    Subject s1("english", 1, 92);
    Subject s2("maths", 1, 93);
    Subject s3("english", 1, 93);
    Subject s4("science", 1, 95);
    Subject s5("histroy", 1, 96);
    Subject s6("maths", 1, 93);

    Pair<int, Subject> p1(1, s1);
    Pair<int, Subject> p2(1, s3);
    Pair<int, Subject> p3(1, s2);
    Pair<int, Subject> p4(1, s6);

    std::cout << (p1 == p2) << std::endl;
    std::cout << (p1 == p3) << std::endl;
    std::cout << (p3 == p2) << std::endl;
    std::cout << (p3 == p4) << std::endl;

	//menu<int, std::string>();
    //menu<int, double>();

	return 0;

}