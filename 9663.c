#include <stdio.h>

int N;
int arr[15][15];
int cnt = 0;

// 주어진 index가 행렬 밖이면 1. 아니면 0.
int tile_is_out(int m, int n) {
  if (m>=0 && m<N && n>=0 && n<N) {
    return 0;
  } else {
    return 1;
  }
}

// 주어진 index가 이미 존재하는 퀸의 경로에 있는지 확인하는 함수
int is_in_path(int I, int J) {
  printf("check is in path");
  int m; int n;
  m = I; n = J;
  while (1) {
    m -= 1;
    if (tile_is_out(m, n)) break;
    printf("1");
    if (arr[m][n] = 1) return 1;
  }

  m = I; n = J;
  while (1) {
    m -= 1; n += 1;
    if (tile_is_out(m, n)) break;
    if (arr[m][n] = 1) return 1;
  }

  m = I; n = J;
  while (1) {
    n += 1;
    if (tile_is_out(m, n)) break;
    if (arr[m][n] = 1) return 1;
  }

  m = I; n = J;
  while (1) {
    m += 1; n += 1;
    if (tile_is_out(m, n)) break;
    if (arr[m][n] = 1) return 1;
  }

  m = I; n = J;
  while (1) {
    m += 1;
    if (tile_is_out(m, n)) break;
    if (arr[m][n] = 1) return 1;
  }

  m = I; n = J;
  while (1) {
    m += 1; n -= 1;
    if (tile_is_out(m, n)) break;
    if (arr[m][n] = 1) return 1;
  }

  m = I; n = J;
  while (1) {
    n -= 1;
    if (tile_is_out(m, n)) break;
    if (arr[m][n] = 1) return 1;
  }

  m = I; n = J;
  while (1) {
    m -= 1; n -= 1;
    if (tile_is_out(m, n)) break;
    if (arr[m][n] = 1) return 1;
  }

  return 0;
}

int reset_array(int col) {
  for (int i=0; i<N; i++) {
    for (int j=col; j<N; j++) {
      arr[i][j] = 0;
    }
  }
}

void process(int col) {
  if (col == N-1) {
    reset_array(col);
    for (int i=0; i<N; i++) {
      if (!is_in_path(i, col)) {
        cnt += 1;
      }
    }
  }
  else {
    printf("%d", col);
    for (int i=0; i<N; i++) {
      reset_array(col);
      if (is_in_path(i, col)) {
        continue;
      }
      else {
        printf("right here");
        arr[i][col] = 1;
        process(col+1);
      }
    }
  }
}

int main() {
  scanf("%d", &N);
  process(0);
  // printf("%d", cnt);
}

// [ \ \ \ \ \ ]
// [ \ \ \ \ \ ]
// [ \ \ \ \ \ ]
// [ \ \ \ \ \ ]
// [ \ \ \ \ \ ]
// [ \ \ \ \ \ ]

// (0,0)에서 시작 -> (0,1) -> (0,N)

// is_in_path를 어떻게 하면 잘 짤 수 있는지가 정말로 관건이다.