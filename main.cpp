/*
Author: Crystal Mapoy
Course: CSCI-135
Instructor: Tong Yi & Mike Zamansky
Assignment: Lab 4

Tasks A-G
*/

#include <iostream>
#include "funcs.h"

int main (){

  std::cout << box(7,4) << '\n';
  std::cout << box(3,8) << '\n';
  std::cout << box(2,5) << '\n';

  std::cout << checker(11,6) << '\n';
  std::cout << checker(6,9) << '\n';
  std::cout << checker(12,3) << '\n';

  std::cout << cross(7) << '\n';
  std::cout << cross(11) << '\n';
  std::cout << cross(8) << '\n';

  std::cout << lower(6) << '\n';
  std::cout << lower(13) << '\n';
  std::cout << lower(8) << '\n';

  std::cout << upper(10) << '\n';
  std::cout << upper(4) << '\n';
  std::cout << upper(9) << '\n';

  std::cout << trapezoid(12,5) << '\n';
  std::cout << trapezoid(15,2) << '\n';
  std::cout << trapezoid(14,4) << '\n';

  std::cout << checkerboard(16,11) << '\n';
  std::cout << checkerboard(7,9) << '\n';
  std::cout << checkerboard(12,11) << '\n';

  return 0;
}
