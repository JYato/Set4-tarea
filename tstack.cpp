#include <iostream>
#include <vector>

using namespace std;
template<typename T>
class Stack{
private:
    vector<T>arreglo;
public:
    bool vacio(){
        if(arreglo.size()== 0)
            return true;
        return false;
    }
    void push(const T &item){
        arreglo.push_back(item);
//        T* temp;
//        temp = arreglo;
//        if(*temp==NULL)
//            *temp=item;
//        else
//            while(*temp!=NULL){
//                temp++;
//            }
//            *temp=item;
    }
    void pop(){
        arreglo.erase(arreglo.end()-1,arreglo.end());
//        T* temp;
//        temp = arreglo;
//        while(*temp!=NULL){
//            temp++;
//        }
//        temp--;
//        temp=NULL;
    }
    T& top(){
        T temp = arreglo[arreglo.size() -1];
        return temp;
        //        while(*temp!=NULL){
//            temp++;
//        }
//        temp--;
    }

    Stack<T> operator+(const Stack uno){
        Stack<T>temp;
        int i=uno.arreglo.size()-1;
        for(;i>0;i--){
            temp.push(uno.arreglo[i]);
        }
//        for(i= 0;i!=dos.size()-1;i++){
//            temp.push(dos[i]);
//        }
        return temp;
    }

};

int main()
{
    Stack<int>pila1;
    Stack<int>pila2;
    int x=10;
    int y=20;
    cout << pila1.vacio()<<endl;
    pila1.push(x);
    pila1.push(y);
    cout << pila1.vacio()<<endl;
    cout << "x= "<< x << endl;
    cout << pila1.top() + 20<<endl;
    pila1.pop();
    cout << pila1.top() << endl;
    int a=30;
    int b=40;
    pila2.push(a);
    pila2.push(b);
    cout << pila2.vacio()<<endl;
    cout << pila2.top() << endl;
    Stack <int>pila3 = pila1 + pila2;
    cout << pila3.top() << endl;

    return 0;
}
