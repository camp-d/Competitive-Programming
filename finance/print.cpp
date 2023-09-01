#include<iostream>
#include<vector>


template <class V> void print(const std::vector<V>& v){
    std::cout << "\nV:[";

    typename std::vector<V>::const_iterator i;
    //print every value in the vector
    for(i = v.begin(); i != v.end(); i++){
        std::cout << (*i) << ",";
    }
    std::cout << "]";
}

template <class V> void print(const std::vector<std::vector<V>>& mat){
    std::cout << "\nV:[";

    typename std::vector<std::vector<V>>::const_iterator i;
    //print every value in the vector
    for(i = mat.begin(); i != mat.end(); i++){
        std::cout << (*i) << ",";
    }
    std::cout << "]";
}

int main(){
    return 0;
}
