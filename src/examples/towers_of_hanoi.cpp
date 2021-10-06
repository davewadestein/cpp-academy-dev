// The famous Towers of Hanoi puzzle

#include <stack>
#include <vector>
#include <iostream>

int increment_circular(int x){
    if (x==2) x = 0;
    else x++;
    return x;
}

void move(std::stack<int> &from, std::stack<int> &to){
    int x = from.top();
    from.pop();
    to.push(x);
}

int towerval(std::stack<int> tower) {
    int i;
    if (tower.empty()) i = 0;
    else i=tower.top();
    return i;
}

int main(){
    std::stack<int> towers[3];

int num_disks{0};


    std::cout << "How many disks?  : ";
    std::cin >> num_disks;

    for (int i = 1; i <= num_disks; i++ ){
        towers[0].push(i);
    }

    int i = 0;
    int j = 2;
    int moves = 0;

    while ( !(towers[i].empty() && towers[j].empty()) ){
        
        if (towerval(towers[i]) > towerval(towers[j] )) 
            move(towers[i], towers[j]);
        else
            move(towers[j], towers[i]);

        i = increment_circular(i);
        j = increment_circular(j);
        moves++;
    }
    std::cout << "Done in " << moves << " moves" << std::endl;  

}

    
    
