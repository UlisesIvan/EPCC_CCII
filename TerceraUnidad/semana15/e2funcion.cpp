#include <iostream>
using namespace std;

template <typename A, typename B>
B sumafi(A a, B b){
    return a+b;
}

template <typename A, typename B>
A restalf(B a, A b){
    return a-b;
}

template <typename A, typename B>
A multiplicaid(B a, A b){
    return a*b;
}
template <typename A, typename B>
B operacion(B (*op)(A,B), A a, B b){
    return op(a,b);
}

int main(){
    cout<<operacion(sumafi, 4.0f, 5)<<endl;
    cout<<operacion(restalf, 4.0f, 5.0)<<endl;
    cout<<operacion(multiplicaid, 4, 5L)<<endl;
}
