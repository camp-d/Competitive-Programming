#include<vector>
#include<string>
#include<iostream>


template <class T> void print(const std::vector<T>& l){
    std::cout << std::endl << "Size of vector is " << l.size() << "\n[";
    //Must Use const iterator here, otherwise compiler error.
    typename std::vector<T>::const_iterator i;
    for(i = l.begin(); i != l.end(); ++i){
        std::cout << *i << ",";
    }
    std::cout << "]\n";
}

int main(){
    size_t n = 10;
    double val = 3.14;
    std::vector<double> vector2(n, val);

    std::cout << "Size of vector2 " << vector2.size() << std::endl;

    print(vector2);

    //Access elements of vector by using the indexing operator []
    //Change some values here and there
    vector2[0] = 2.0;
    vector2[1] = 456.76;

    int last_element = vector2.size() - 1;
    vector2[last_element] = 55.56;

    print(vector2);

    return 0;
}
