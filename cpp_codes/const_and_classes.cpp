#include <iostream>

class Foo{
public:
  Foo(std::string name){
    _name = name;
  }

  std::string get_name(){
    return _name;
  }

  std::string get_name() const {
    return "(const version) " + _name;
  }
  
private:
  std::string _name; 
};

void print(Foo foo){
  std::cout << "This is calling `print` for the variable ";
  std::cout << "'" << foo.get_name() << "'" << std::endl;
}

int main(void){

  Foo x("foo");
  print(x);

  return 0;
}

