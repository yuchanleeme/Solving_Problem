# <가르침>
### https://www.acmicpc.net/problem/1062

***

## 주요 알고리즘
* 백트래킹, 문자열 파싱

## 풀이과정
1. 먼저 가르칠 수 있는 알파벳 중에 무조건 배워야 하는 알파벳 5개를 뺀다. (a,n,t,i,c)
2. 따라서, 가르칠 알파벳이 5개 미만이면 단어를 배울 수 없다.
3. 이를 기준으로 가운데 알파벳만 따로 String 배열에 넣는다.
4. 이제 모든 알파벳을 기준으로 K개의 알파벳 조합을 만든다. (단, antic은 포함한다 가정)
5. 모든 조합을 통해 최대 단어의 개수를 구한다.

## 참고사항
```java
chk[word.charAt(i) -'a'] == false
// 이런식으로 아스키 문자일 때 숫자로 치환 가능
```