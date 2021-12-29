#include <stdio.h>

int N;
int arr[15][15];
int cnt = 0;

int has_vicinity(int x, int y) {
  if (x>0) {
    if (arr[x-1][y] = 1) {
      return 1;
    }
  }
  if (x<N-1) {
    if (arr[x+1][y] = 1) {
      return 1;
    }
  }
  if (y>0) {
    if (arr[x][y-1] = 1) {
      return 1;
    }
  }
  if (y<N-1) {
    if (arr[x][y+1] = 1) {
      return 1;
    }
  }
  return 0;
}

int reset_array() {
  for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      arr[i][j] = 0;
    }
  }
}

int process(int col) {
  if (col=0) {
    for(int i=0; i<N; i++) {
      reset_array()
      arr[i][col] = 1;
      process(col+1);
    }
  }
  else if (col=N-1) {
    cnt += 1;
  }
  else {
    for (int i=0; i<N; i++) {
      if (!has_vicinity(i, col)) {
        continue;
      }
      else {
        arr[i][col] = 1;
        process(col+1);
      }
    }
  }
}

int main() {
  scanf("%d", &N);
  process(0);
  printf("%d", cnt);
}

// [ \ \ \ \ \ ]
// [ \ \ \ \ \ ]
// [ \ \ \ \ \ ]
// [ \ \ \ \ \ ]
// [ \ \ \ \ \ ]
// [ \ \ \ \ \ ]

// (0,0)에서 시작 -> (0,1) -> (0,N)