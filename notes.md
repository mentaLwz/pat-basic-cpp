### std::getline

example

```#include <iostream>
#include <string>

int main ()
{
  std::string name;

  std::cout << "Please, enter your full name: ";
  std::getline (std::cin,name);
  std::cout << "Hello, " << name << "!\n";

  return 0;
}
```

### char to int

int x = (int) character - 48

### str.c_str()

### iterate string

```for(char& c : input) {
        sum += (int)c - 48;
    }
```
