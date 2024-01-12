#include<bits/stdc++.h>

typedef long long ll;


void solve(){

    int size;
    int negatives = 0, positives = 0;
    int count = 0;
    std::cin >> size;

    std::vector<int> nums(size, 0);
    std::vector<int> sign(size, 0);

    for(auto &x : nums){
        std::cin >> x;
        if(x > 0){
            positives++;
            sign[count] = 1;
        }
        else if(x < 0){
            negatives++;
            sign[count] = -1;
        }
        else{
            std::cout << 0 << '\n';
            return;
        }
        count++;
    }

    if(negatives % 2 == 0){

    }
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

int n;

std::cin >> n;

while(n--)
    solve();


return 0;
}
