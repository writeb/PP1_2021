#include <iostream>
#include <vector>
using namespace std;

class Profile {
private:
  string name;
  int age;
  string city;
  string country;
  string pron;
  vector <string> hob;
public:
  Profile(string nname,int nage,string ncity,string ncountry,string npron = "they/them");
  string view_profile(string h);
};