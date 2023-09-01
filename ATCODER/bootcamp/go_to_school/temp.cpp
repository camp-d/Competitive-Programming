#include<bits/stdc++.h>

typedef long long ll;

bool sortsecond(const std::pair<unsigned, unsigned> &a, const std::pair<unsigned, unsigned> &b){
    return (a.second < b.second);
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

unsigned kids;

std::cin >> kids;

std::vector<std::pair<unsigned, unsigned>> students(kids);

for(unsigned i = 0; i < kids; i++){
    std::cin >> students[i].second;
    students[i].first = i+1;
}

std::sort(students.begin(), students.end(), sortsecond);

for(unsigned i = 0; i < kids; i++){
    std::cout << students[i].first << " ";
}
std::cout << std::endl;

return 0;
}
