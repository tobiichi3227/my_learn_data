#include <iostream>
using namespace std;

#define miyuki_is_my_wife_and_sister

int main() {
  
    miyuki_is_my_wife_and_sister; //深雪我老婆
  
    int l{}, r{}, target{}, cnt{1};
    cin >> l >> r >> target;
    while (1) {
      int mid = (l + r) >> 1;
      cout << cnt++ << ": " << mid << '\n';
      if (mid > target) {
        r = mid - 1;
      } else if (mid < target) {
        l = mid + 1;
      } else {
        break;
      }
    }
  
    return 0;
}
