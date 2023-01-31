#include <stdio.h>
#include <math.h>

int main() {
    int t, i, r1, r2, left_ball, played_ball;
    double current_rr, asking_rr;

    printf("Total inputs: ");
    scanf("%d", &t);

    for(i = 0; i < t; i++) {
        printf("case %d: ", i+1);
        scanf("%d %d %d", &r1, &r2, &left_ball);

        played_ball = 300 - left_ball;
        current_rr = (r2*1.0/played_ball) * 6;

        asking_rr = ((r1 - r2 + 1)*1.0/left_ball) * 6;

        printf("crr: %0.2lf\n arr: %0.2lf\n", current_rr, asking_rr);

    }
    return 0;
}