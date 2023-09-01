#include<set>
#include<iostream>
#include<string>

template <class T> void print(const std::set<T>& mySet, const std::string& name){
    std::cout << std::endl << ",Size of set" << mySet.size() << "\n[";

    typename std::set<T>::const_iterator i;

    for(i = mySet.begin(); i != mySet.end(); ++i){
        std::cout << (*i) << ",";
    }
    std::cout << "]\n";
}

int main(){
    std::set<std::string> first;

    first.insert("r");
    first.insert("T");
    first.insert("sigma");

    std::cout << "First Size: " << first.size() << std::endl;

    std::set<std::string> second (first);
    
    second.insert("r");
    second.insert("K");
    second.insert("S");
    second.insert("b");
    
    std::cout << "Second Size: " << second.size() << std::endl;

    if(first == second)
        std::cout << "Sets have same elements\n";
    else
        std::cout << "Not same elements\n";

    swap(first, second);

    std::set<std::string> third = first;

    print(first, "First set");
    print(first, "Second Set");
    print(first, "Third set");

    std::set<std::string> execOption(first);
    execOption.insert("lambda");

    print(execOption, "An Executive Option");

    return 0;
}
