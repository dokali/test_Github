//  Copyright 2018 <dokali>
#include<iostream>
#include<vector>

int main() {
  std::vector <int> myvect = { 12, 5, 96, 8, 3};
  for (int var : myvect) {
    std::cout << var <<std::endl; }
  std::cin.get();
  return 0;
}
