#include <stdio.h>

int main(void) {
  char a[6];

  scanf("%s", a);

  int cnt = 1;
  char max = 0;
  int no = 1;

  for (int i = 0; i < 6; i++) {
    no = 1;
    for (int j = i + 1; j < 6; j++) {
      if (a[i] == a[j]) {
        no++;
      }
    }
    if (no > cnt) {
      max = a[i];
      cnt = no;
    }
  }

  printf("가장 많이 등장한 문자 : %c    횟수 : %d", max, cnt);
  return 0;
}