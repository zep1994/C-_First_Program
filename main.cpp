#include <iostream>

int main() {
//       int favorite_number;
//       std::cout << "Enter your favorite number between 1 and 100: ";
//       
//       std::cin >> favorite_number;
//       
//       std::cout << "Amazing that is my favorite number too" << std::endl;
//       std::cout << "No really, " << favorite_number << " is my favorite number";

//        char name[100]; 
//        std::cout << "Enter your name: " << std::endl;
//        std::cin >> name;
//        std::cout << "Your name sucks " << name << std::endl;
//       return 0;

//    int width {0};
//    int height {0}; 
//    int area {0};
//    
//    std::cout << "Enter width and height of the room separated by a space " << std::endl;
//    
//    std::cin >> width >> height;
//    
//    area = width * height;
//    
//    std::cout << area << std::endl;


    //HOTEL PROBLEM
    
    
    std::cout << "How many rooms?:\n";
    
    int number_of_rooms {0};
    std::cin >> number_of_rooms;
    
    const double price_per_room {30};
    const double tax {0.07};
    
    std::cout << number_of_rooms << "\n";
    
    std::cout << "Cost per room is " << price_per_room * number_of_rooms << std::endl;
    std::cout << "with tax " << price_per_room * number_of_rooms * tax << std::endl;
    
    std::cout << "Total estimate " << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * tax) << std::endl;
    


 }