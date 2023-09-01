#include <set>
#include <iostream>
#include <string>


template <class T> void print(const std::set<T>& mySet, const std::string& name){
    std::cout << std::endl << name << ", size of set " << mySet.size() << "\n[";
    typename std::set<T>::const_iterator i;

    for(i = mySet.begin(); i != mySet.end(); ++i){
        std::cout << (*i) << ", ";
    }
    std::cout << "]\n";
}

int main(){
    std::set<std::string> first;

    first.insert("Interest rate");
    first.insert("Expiry rate");
    first.insert("Volatility");

    std::cout << "First Size: " << first.size() << std::endl;
    std::set<std::string> second (first);

    //add elements to the set
    second.insert("Interest rate");
    second.insert("Strike Price");
    second.insert("Current underlying Price");
    second.insert("Cost of carry");

    std::cout << "Second Size: " << second.size() << std::endl;

    if(first == second)
        std::cout << "Sets have same elements\n";
    else
        std::cout << "Not same elements\n";

    swap(first, second);

    std::set<std::string> third = first;

    print(first, "First set");
    print(second, "Second set");
    print(third, "Third set");
}
