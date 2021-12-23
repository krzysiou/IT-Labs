#include <cstring>
#include <iostream>

using namespace std;

void grep(string * names, const char * key, int len){
  for(int i = 0; i < len; i++){
    if(names[i].find(key) != string::npos){
      cout << names[i] << endl;
    }
  }
}

void grep2(const char ** names, const char * key, int len){
  for(int i = 0; i < len; i++){
    if(strstr(names[i], key)){
      cout << names[i] << endl;
    }
  }
}


int main() {
  //string names[5] = {"chuja duzy", "chuj maly", "Ja ala browar", "Nikodem i ja seks", "ochman kupa"};
  const char * names[5] = {"chuja duzy", "chuj maly", "Ja ala browar", "Nikodem i ja seks", "ochman kupa"};
  const char *search = "seks";
  grep2(names, search, 5);
  return 0;
}
