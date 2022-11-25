//
// Created by 韦澜 on 2022/11/14.
// 编写三个不同版本的程序，令其都能输出ia的元素。
// 版本1：范围for
// 版本2：普通for，下标
// 版本3：普通for，指针
// 要求：都要直接写出变量类型
// Ex3-44: 改写程序，适用类型别名来代替循环控制变量的类型
// Ex3-45: auto
#include <iostream>
using namespace std;
int main(){
    int ia[] = {0, 2, 4, 5, 6, 9};
//    1:
//    for (int &num: ia)
//        cout << num << " ";
//    2:
//    int size_ia = end(ia) - begin(ia);
//    for (int cnt = 0; cnt != size_ia; cnt++)
//        cout << ia[cnt] << " ";
//    3:
//    for (int *ptr = ia; ptr != end(ia); ++ptr)
//        cout << *ptr << " ";
//    Ex3-44
//    1:
//    using alias_arr = int &;
//    for (alias_arr &num: ia)
//        cout << num << " ";
//    2:
//    using int_cnt = int;
//    int size_ia = end(ia) - begin(ia);
//    for (int_cnt cnt = 0; cnt != size_ia; cnt++)
//        cout << ia[cnt] << " ";
//    3:
//    using int_p = int *;
//    for (int_p ptr = ia; ptr != end(ia); ++ptr)
//        cout << *ptr << " ";
//    1:
//    for (auto &num: ia)
//        cout << num << " ";
//    2:
//    int size_ia = end(ia) - begin(ia);
//    for (auto cnt = 0; cnt != size_ia; cnt++)
//        cout << ia[cnt] << " ";
//    3:
    for (auto ptr = ia; ptr != end(ia); ++ptr)
        cout << *ptr << " ";
//    return 0;
}
