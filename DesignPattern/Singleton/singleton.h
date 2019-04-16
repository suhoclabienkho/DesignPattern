#include <iostream>

class Singleton
{

private:
  static Singleton* instance_;
  Singleton();
public:
  static Singleton* getInstance();
  void              method();

};