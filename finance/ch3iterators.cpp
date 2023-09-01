#include <vector>
#include <iostream>


std::vector<double> makevector(int size){
    std::vector<double> result;
    for (int i=1; i <=size; i++){
        result.push_back(double(i));
    }
    return result;
}

void print(const std::vector<double>& l){
    std::cout << "Size of vector is: " << l.size() << std::endl;

    std::vector<double>::const_iterator i;

    for(i=l.begin(); i !=l.end(); i++){
        std::cout << (*i) << " ";
    }
    std::cout << std::endl;
}
