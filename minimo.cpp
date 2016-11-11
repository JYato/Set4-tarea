#include <iostream>
#include <string>
#define MIN(a,b) (((a)<(b))?a:b)


using namespace std;
template<typename T>
T minimo(T primero, T segundo)
{
    if(primero < segundo)
        return primero;
    return segundo;
}
int main()
{
    string a,b;
    a="tesla";
    b="reza";
    std::cout << minimo<double>(5.95,5.9)<<std::endl;
    cout << MIN(a,b)<<endl;
    return 0;
}
