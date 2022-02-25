/*
Author: Crystal Mapoy
Course: CSCI-135
Instructor: Tong Yi & Mike Zamansky
Assignment: Lab 4

Tasks A-G
*/

#include <iostream>
#include "funcs.h"

std::string box(int width, int height) {
  std::string box = "";
  for (int i = 0; i < height; i++){
    for (int j = 0; j < width; j++)
      {box += "*";}
    box += "\n";
  }
  return box;
}

std::string checker(int width, int height){
  std::string checker = "";
  for (int i = 0; i < height; i++) {
     for (int j = 0; j < width; j++){
        if (i % 2 == 0 && j % 2 == 0 || i % 2 != 0 && j % 2 != 0)
            checker += "*";
        else
            checker += " ";
     }
     checker += "\n";
   }
     return checker;
 }

std::string cross(int height){
  std::string cross;
  for (int i = 1; i <= height; i++){
    for (int j = 1; j <= height; j++){
      if ((i==j) || (j==(height-1)-i)){
        cross += "*";
      }
      else {
        cross += " ";
      }
    cross += "\n";
    }  
  }
    return cross;
}

std::string lower(int height){
  std::string lower = "";
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < i + 1; j++) {
      lower += "*";
    }
    lower += "\n";
  }
      return lower;
}

std::string upper(int height){
  std::string upper;
  for (int i = height-1; i >= 0; i--) {
    for (int j = height-1; j >= 0; j--) {
      if (j<=i)
        upper += "*";
      else
        upper += " ";
      }
  }
  return upper;
}

std::string trapezoid (int width, int height)
{
  std::string trapezoid;
  if (height > ((width+1)/2))
    return "Impossible shape!";
  for (int i=0; i<height;i++) {
    for (int j=0; j<=width-i;j++) {
      if (j<i)
        trapezoid+=" ";
      else if (j>(width-1-i))
        trapezoid += "\n";
      else
        trapezoid += "*";
    }
  }
  return trapezoid;
}

std::string checkerboard(int width, int height) {
  std::string checkerboard = "";
  for (int i=0; i<height; i++) {
    for (int j=0; j<width; j++) {
      if (i % 6 < 3){
        if (j % 6 < 3)
          checkerboard += "*";
        else
          checkerboard += " ";
        }
        else if (j % 6 > 3)
          checkerboard += "*";
        else
          checkerboard += " ";
      }
      checkerboard += "\n";
    }
    return checkerboard;
}
