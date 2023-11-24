#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int size, button;

    std::cin >> size;

    std::vector<int> buttons[size];
    std::vector<int> visited(size, 0);

    for(int i = 0; i < size; i++){
        std::cin >> button;
        buttons[i].push_back(button);
    }

    int start = 1;
    int next = buttons[0].at(0);
    int actions = 1;
    int found = 0;

    visited.at(0) = 1; 

    while(start != next && visited.at(next-1) == 0){
        if(next == 2){
            found = 1;
            break;
        }
        visited.at(next-1) = 1;
        next = buttons[next-1].at(0);
        actions++;
    }

    if(!found)
        actions = -1;

    std::cout << actions << "\n";

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();


return 0;
}
