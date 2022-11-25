//
// Created by 韦澜 on 2022/11/11.
// 编写一段程序，比较两个数组是否相等。
// 再写一段程序，比较两个vector对象是否相等。
#include <iostream>
#include <vector>
#include <cstddef>
#include <iterator>
using namespace std;
int main(){
//    part1:
//    int ia1[] = {0, 2, 4, 6, 7};
//    int ia2[] = {0, 2, 4, 6, 7, 9};
//    int is_equal = 1;
//    int *ia1_end = end(ia1), *ia2_end = end(ia2);
//    for (int *ia1_ptr = ia1, *ia2_ptr = ia2; ia1_ptr != ia1_end && ia2_ptr != ia2_end; ++ia1_ptr, ++ia2_ptr)
//    {
//        if ((*ia1_ptr) != (*ia2_ptr))
//            is_equal = 0;
//    }
//    if ((ia1_end - ia1) != (ia2_end - ia2))
//        is_equal = 0;
//    if (is_equal)
//        cout << "array1 and array2 is equal" << endl;
//    else
//        cout << "array1 and array2 is not equal" << endl;
//    part2:
      vector<int> vec1 {0, 2, 4, 6, 7};
      vector<int> vec2 {0, 2, 4, 6, 8};
      int is_equal = 1;
      for(auto iter1 = vec1.begin(), iter2 = vec2.begin(); iter1 != vec1.end() && iter2 != vec2.end(); ++iter1, ++iter2)
      {
          if ((*iter1) != (*iter2))
              is_equal = 0;
      }
      if (!vec1.empty() && !vec2.empty())
      {
          if (vec1.size() != vec2.size())
              is_equal = 0;
      }
      if (is_equal)
          cout << "vector1 and vector2 is equal" << endl;
      else
          cout << "vector1 and vector2 is not equal" << endl;
    return 0;
}
