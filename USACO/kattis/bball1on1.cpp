#include <bits/stdc++.h>


void solve(){
    int a = 0, b = 0;

    std::string game;

    std::cin >> game;

    for(unsigned i{0}; i < game.length(); i+=2){
        if(game.at(i) == 'A')
            a += game.at(i+1) - '0';
        else
            b += game.at(i+1) - '0';

        if((a >= 11 && b < 10) || (a >= b+2 && b >= 10))
            std::cout << 'A' << '\n';
        else if( (b >= 11 && a < 10) || ( b >= a+2 && a >= 10))
            std::cout << 'B' << '\n';
    }

}


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    solve();

}
