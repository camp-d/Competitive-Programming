#include<bits/stdc++.h>

typedef long long ll;

void solve(){

    int squares;
    int count = 0;
    int mcount = 0;
    std::cin >> squares; 
    std::vector<int> heights(squares, 0);

    for(auto& x : heights)
        std::cin >> x;

    for(unsigned i {0}; i < heights.size()-1; i++){
        if(heights[i+1] > heights[i]){
            count = 0;
        }
        else{
            count++;
            mcount = std::max(mcount, count);
        }
    }

    std::cout << mcount << '\n';
}


int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);


solve();

return 0;
}
