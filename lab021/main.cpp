#include "List.h"

int main(){
  List<int> l1;
  l1.add(1).add(2).add(0).add(1).add(94);
  std::cout << "orginal " << l1 << std::endl;
  List<int> l2 = l1;
  std::cout << "kopia " << l2 << std::endl;

  List<int> l3(std::move(l1));
  std::cout << "orginal po przesunieciu " << l1 << std::endl;
  std::cout << "w nowym miejscu " << l3 << std::endl;
  std::cout << "Jest 94? " << l3.contains(94) << " A jest 6? " << l3.contains(6) << std::endl;

  List <std::string> s;
  s.add("Another").add("brick").add("in").add("the").add("wall");
  std::cout << s << std::endl;
}