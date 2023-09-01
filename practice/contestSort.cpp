#include <bits/stdc++.h>

//template function for vector of any type
//takes const (immutable) reference as argument
template <class T> void print(const std::vector<T>& l){
    typename std::vector<T>::const_iterator i;
    for(i = l.begin(); i != l.end(); ++i){
        std::cout << *i << ",";
    }
    std::cout << "]\n";
}

//template function for vector of any type std::vector<T>
//takes reference (mutable) as argument
template <class T> void print(std::vector<T>& l){
    typename std::vector<T>::const_iterator i;
    for(i = l.begin(); i != l.end(); ++i){
        std::cout << *i << ",";
    }
    std::cout << "]\n";
}

int main(){

    std::vector<int> v = {4,2,5,3,5,8,3};

    std::sort(v.begin(), v.end());

    print(v.begin(), v.end());

    return 0;
}
