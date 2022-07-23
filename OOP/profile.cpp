#include "profile.hpp"

Profile::Profile(string nname,int nage,string ncity,string ncountry,string npron){
  name = nname;
  age = nage;
  city = ncity;
  country = ncountry;
  pron = npron;
}

string Profile::view_profile(string h){
  string bio = "Name: " + name + "\nAge: " + to_string(age);
  bio += "\n" + city + ", " + country + "\nPronouns: " + pron + "\n";

  string hob_string = "Hobbies: ";
  hob.push_back(h);
  for (string i : hob){
    hob_string += i + "\n";
  }
  return bio + "\n" + hob_string;
}