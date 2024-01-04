#include <iostream>
#include <tinyxml2.h>
int main(int, char **) {

  tinyxml2::XMLDocument doc;
  doc.LoadFile("desert.tmx");

  std::cout << doc.RootElement()->Name();
}
