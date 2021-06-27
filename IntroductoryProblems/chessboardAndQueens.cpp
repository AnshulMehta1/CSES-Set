// Chess Board and Queens 
// Author: 
#include <stdio.h>

char size[8][9], cols[8], d1[15], d2[15];
int counter;

void solve(int i) {
    int j;
    
    if (i == 8) {
        counter++;
        return;
    }
    for (j = 0; j < 8; j++)
        if (size[i][j] == '.' && !cols[j] && !d1[i + j] && !d2[i - j + 7]) {
            cols[j] = d1[i + j] = d2[i - j + 7] = 1;
            solve(i + 1);
            cols[j] = d1[i + j] = d2[i - j + 7] = 0;
        }
}

int main() {
    int i;
    
    for (i = 0; i < 8; i++)
        scanf("%s", size[i]);
    solve(0);
    printf("%d\n", counter);
    return 0;
}
