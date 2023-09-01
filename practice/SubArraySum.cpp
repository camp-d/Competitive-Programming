#include<bits/stdc++.h>

typedef long long ll;


void solve(const std::vector<int>& v){
    std::vector<int>::const_iterator start;
    std::vector<int>::const_iterator move;
    std::vector<int>::const_iterator end;
    int sum = 0;
    int ans = 0;
            //start is a bad name for this...

    for(start = v.begin(); start != v.end(); start++){
        sum = std::max(*start, *start + sum);
        ans = std::max(ans, sum);
   }
    std::cout << "\n" << ans << std::endl;
}
int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::vector<int> vec = { -1, 2, 4, -3, 5, 2, -5, 2};

solve(vec);

/*
ll t; 
std::cin>>t; 
while(t--) 
    solve();
*/
return 0;
}
