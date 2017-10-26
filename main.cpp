#include <iostream>
using namespace std ;

/*问题一：回文数
 * 1221是一个非常特殊的数，它从左边读和从右边读是一样的，编程求所有这样的四位十进制数。
 */

int  JudgePalindromic(int length, int *p){

    int m, n;
    if(length % 2 == 0){
        m = length / 2 ;
        for (int i = 0; i < m; i++) {
            if(*(p + i) == *(p + length - 1 - i)){
                continue ;
            } else{
                return 0 ;
            }
        }
        return 1 ;
    }
    else if(length % 2 == 1){
        m = (length + 1) / 2 ;
        for (int i = 0; i < m; i++) {
            if(*(p + m - 1 - i) == *(p + m - 1 + i)){
                continue ;
            }
            else{
                return 0 ;
            }
        }
        return 1 ;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int a[4];
    int temp ;
    int p[90] ;
    int index ;
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 9; k++) {
                for (int l = 0; l <= 9; l++) {
                    a[0] = i ;
                    a[1] = j ;
                    a[2] = k ;
                    a[3] = l ;
                    //第一次赋值
                    //判断并保存
                    index = JudgePalindromic(4, a) ;
                    if(index){
                         temp = 1000*a[0] + 100*a[1] + 10*a[2] + a[3] ;
                        cout << temp << endl ;
                    }
                }
            }
        }
    }
    return 0;
}

