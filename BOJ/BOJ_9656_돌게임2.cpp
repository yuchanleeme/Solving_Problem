#include <iostream>
using namespace std;
//https://www.acmicpc.net/problem/9656

/*
<돌 게임 2>
주요: 아이디어
1. 둘이 최선을 다해 게임을 한다고 했으므로 상대방의 수를 다 예측한다고 가정한다.
  => 모든 경우의 수를 내다본다고 가정.
  => 즉, 상근이는 자신의 차례일때 돌의 남은 개수가 홀수개가 되도록 노력할것이다.
  => 그래야 1, 3으로 마지막 돌을 가져오기 때문이다.
  => 창영이는 따라서 상근이에게 홀수개를 안넘기려고 노력할 것이다.
2. 따라서 돌의 개수가 홀수이면 상근이는 홀수개를 유지 시킬 수 있으므로 이길것이고,
3. 돌의 개수가 짝수이면 상근이는 홀수개를 유지 시킬 수 없기 때문에 질것이다.
===========
* 베스킨라빈스31 돌멩이 버전

*/

int N;
int main() {

  cin >> N;
  if(N % 2 == 1) cout << "CY";
  else cout << "SK";

  return 0;
}
