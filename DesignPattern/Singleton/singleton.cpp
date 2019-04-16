#include "singleton.h"

/* Init staic instance */
Singleton* Singleton::instance_ = NULL;

Singleton::Singleton()
{}

Singleton* Singleton::getInstance()
{

  if( instance_ == NULL ) {

    instance_ = new Singleton();

  }

  return instance_;

}

void Singleton::method()
{

  std::cout << "This is singleton pattern." << std::endl;

}