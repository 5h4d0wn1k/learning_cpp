#include <iostream>
/*Namespace provides a solution to prevent conflixt of name in large projects 
and each entity needs to take a unique name that thing is allowed by 
namespace */
namespace first {
    int x = 3;
}
namespace second {
    int x = 4;
}
int main (){
    int x = 67;
 std::cout<< "First name space = "<<first::x<<'\n';
 std::cout<< "second name space = "<<second::x<<'\n';
 std::cout<< "master name space = "<<x<<'\n';
 return 0;
}