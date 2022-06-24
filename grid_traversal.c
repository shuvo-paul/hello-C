#include <stdio.h>

int main() {
    int x, y, n, i, j, grid[10][10];
    char c;

    printf("provide the number of blocked rooms: ");
    scanf("%d", &n);

    //enable access to all rooms by default
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            grid[i][j] = 1;
        }
    }

    //disable access to rooms
    for(i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        grid[x][y] = 0;
    }

    printf("Please provide initial position: ");
    scanf("%d %d", &x, &y);

    while(1) {
        scanf("%c", &c);

        if(c == 's') {
            break;
        } else if(c == 'u'){
            y++;
            if(!grid[x][y]){
                y--;
                printf("This room is blocked!\n");
            }
        } else if(c == 'd'){
            y--;
            if(!grid[x][y]){
                y++;
                printf("This room is blocked!\n");
            }
        } else if(c == 'l'){
            x--;
            if(!grid[x][y]){
                x++;
                printf("This room is blocked!\n");
            }
        } else if(c == 'r'){
            x++;
            if(!grid[x][y]){
                x--;
                printf("This room is blocked!\n");
            }
        }
    }

    printf("Robots current position is: %d, %d\n", x, y);

    return 0;
}