mkdir $1
cd $1
cp ../../TEMPLATE/makefile makefile
t=${2:-"term"}
if [ "$2" = "term" ]; then
echo "#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();

return 0;
}" >> temp.cpp

else
echo "#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::freopen(\"$2.in\",\"r\",stdin);
std::freopen(\"$2.out\",\"w\",stdout);

solve();

return 0;
}" >> temp.cpp
touch $2.in
touch $2.out
fi
