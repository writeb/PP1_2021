#include <iostream>
#include "profile.hpp"


int main() {
  string hobby;
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  cout<<"Input Your hobby, pls: ";
  getline(cin, hobby);
  cout<<sam.view_profile(hobby);
  

}
// Чтобы запустить g++ main.cpp profile.cpp 
// g++ -std=c++11 main.cpp profile.cpp (из-за того что старый компилятор, жалуется на for цикл в profile.cpp)