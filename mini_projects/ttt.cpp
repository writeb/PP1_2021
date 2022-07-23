#include <iostream>
using namespace std;

void map_show(int map[3][3]){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<map[j][i]<<" ";
        }
        cout<<endl;
    }
}

bool end_game(int map[3][3], int val){
    int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if (map[j][i] == val){            // проверяет цифру 1 в линию 
                cnt0++;
            }
            if (map[i][j] == val){            // проверяет цифру 1 в столбик
                cnt1++;
            }
            if (map[j][j] == val){            // проеряте цифру 1 по диагонали уходяещей вниз в право
                cnt2++;
            } 
            if (map[2-j][j] == val){          // проеряте цифру 1 по диагонали уходяещей вниз в лево
                cnt3++;
            }
        }
        if (cnt0 == 3 || cnt1 == 3 || cnt2 == 3 || cnt3 == 3){
            return true;
            break;

        }
            cnt0 = 0;
            cnt1 = 0;  
            cnt2 = 0;
            cnt3 = 0;
    }
    return false;
}

void pc_brain(int map[3][3]){
    int x,y;
    do{
            x = rand() % 3;
            y = rand() % 3;
        }while(map[x][y] != 0);
                
        map[x][y] = 2;
}

int main()
{        // x  y
    int map[3][3]={0};
    srand(time(NULL));

    int x=0,y=0;

    while(true){
        cout<<"Введите координаты:";
        cin>>x>>y;

        map[x][y] = 1;
        map_show(map);
        cout<<endl;
        
        if (end_game(map, 1) == true){
            cout<<"You won!\n";
            break;

        }
        cout<<"PC move:"<<endl;
        pc_brain(map);
        
        map_show(map);
        if (end_game(map, 2) == true){
            cout<<"You lose!\n";
            break;
        }
    } 



    return 0;
}