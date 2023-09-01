#include <map>
#include <iostream>
#include <string>

int main() {
    std::map<std::string, double> option;

    option["r"] = 0.10;
    option["sig"] = 0.10;
    option["K"] = 0.10;
    option["T"] = 0.10;
    option["S"] = 0.10;

    std::cout << "Size of map: " << option.size() << std::endl;

    std::map<std::string, double>::iterator i = option.begin();

    while(i!= option.end())
    {
        std::cout << "Element pair [" << (*i).first << "," << (*i).second << "]\n";
        i++;
    }
    return 0;
}
