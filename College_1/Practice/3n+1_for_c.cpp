#include <stdio.h>
#include <stdlib.h>

int main(){
    int l, r;
    while (scanf("%d %d", &l, &r) != EOF){
        int ans = -1, ch = 0;
        if (r < l){
            int temp = l;
            l = r;
            r = temp;
            ch = 1;
        }
        for (int i = l; i <= r; i++){
            int cnt = 1;
            int n = i;
            while (n > 1){
                if (n % 2) n = 3*n+1;
                else n /= 2;
                cnt++;
            }
            ans = (ans < cnt)? cnt:ans;
        }
        printf("%d %d %d\n", ch? r:l, ch? l:r, ans);
    }
    return 0;
}