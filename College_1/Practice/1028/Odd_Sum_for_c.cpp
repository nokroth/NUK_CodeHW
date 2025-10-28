#include <stdio.h>
#include <stdlib.h>

int main(){
    int t, col = 1;
    scanf("%d", t);
    while (col <= t){
        long long ans = 0, l, r;
        scanf("%d %d", l, r);
        if (r < l){
            int temp = r;
            r = l;
            l = temp;
        }
        for (int i = l; i <= r; i++){
            if (i % 2) ans += i;
        }
        printf("Case %d: %lld\n", col++, ans);
    }
    return 0;
}