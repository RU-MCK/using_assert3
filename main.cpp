#include <iostream>
#include <cassert>
using namespace std;
float travelTime(float distance, float speed) {
  assert(distance > 0 && speed > 0);
  float time = distance / speed;
  return time;
}
int main() {
  float dist, sp, time;
  cout << "Input distance km.: ";
  cin >> dist;
  cout << " Input speed km/h: ";
  cin >> sp;
  cout << "Travel time = " << travelTime(dist, sp) << " h." << endl;
}
