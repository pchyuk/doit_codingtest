#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int findNumber;
    srand(time(NULL));
    findNumber = rand() % 100; // 0 ~ 99 사이의 값 무작위 선택

    for (int i = 0; i < 100; i++){
        if (i == findNumber) {
            cout << i << "\n";
            break;
        }
    }
}