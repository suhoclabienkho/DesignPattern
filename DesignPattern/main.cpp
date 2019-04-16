#include "Singleton\singleton.h"

int main()
{

  Singleton::getInstance()->method();

  Singleton* instance = Singleton::getInstance();

  Singleton* instance1 = Singleton::getInstance();

  Singleton* instance2 = Singleton::getInstance();

  return 0;

}