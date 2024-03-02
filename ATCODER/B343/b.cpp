#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int rows;

    std::string adj_row;

    std::cin >> rows;
    getline(std::cin, adj_row);
    
    while (rows > 0){
        getline(std::cin, adj_row);
        int index = 0;
        for(auto x : adj_row){
            if(x == '1'){
                index++;
                std::cout << index << " ";
            }
            else if( x == '0')
                index++;
        }
        std::cout << '\n';
        rows--;
    }

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
