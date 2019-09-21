// Random Rectangle
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

int main()
{
  //sets the limit of which the string can be randomized
  int max= 40;
  int num;
  unsigned seed = time(0);
  srand(seed);
  num = rand() % max + 1;

  //assigning # to be randomized
  std::string rec;
  rec.assign(num, '#');

  //displays the Rectangle
  std::cout << rec << std::endl;
  std::cout << rec << std::endl;
  std::cout << rec << std::endl;

  return 0;
}
