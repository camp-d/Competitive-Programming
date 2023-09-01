#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::vector<std::vector<unsigned>> card (3);
std::vector<std::vector<bool>> marks (3);
std::vector<unsigned> nums;

for(unsigned i = 0; i < 3; i++){
    for(unsigned j = 0; j < 3; j++){
        unsigned temp;
        std::cin >> temp;
        card[i].push_back(temp);
    }
}

for(unsigned i = 0; i < 3; i++){
    for(unsigned j = 0; j < 3; j++){
        marks[i].push_back(false);
    }
}

unsigned n = 0;
std::cin >> n;
for(unsigned i = 0; i < n; i++){
    unsigned temp = 0;
    std::cin >> temp;
    nums.push_back(temp);
}


//mark all numbers on table that appear in nums
for(unsigned i = 0; i < nums.size(); i++){
    for(unsigned j = 0; j < 3; j++){
        for(unsigned k = 0; k < 3; k++){
            if(card[j][k] == nums[i]){
                marks[j][k] = true;
            }
        }
    }
}
// find if we have bingo
bool bingo = false;

for(unsigned i = 0; i < 3; i++){
    int row = 0;
    for(unsigned j = 0; j < 3; j++){
        if(marks[i][j])
            row++;
    }
    if(row == 3){
        bingo = true;
        break;
    }
}
if(!bingo){
for(unsigned i = 0; i < 3; i++){
    int col = 0;
    for(unsigned j = 0; j < 3; j++){
        if(marks[j][i])
            col++;
    }
    if(col == 3){
        bingo = true;
        break;
    }
}
}

if(!bingo){
int diag = 0;
for(unsigned i = 0; i < 3; i++){
    if(marks[i][i])
            diag++;
    if(diag == 3){
        bingo = true;
        break;
    }
}
}
if(!bingo){
int diag = 0;
for(unsigned i = 0; i < 3; i++){
    if(marks[2-i][i])
            diag++;
    if(diag == 3){
        bingo = true;
        break;
    }
}
}

if(bingo){
    std::cout << "Yes" << std::endl;
}
else
std::cout << "No" << std::endl;

return 0;
}
