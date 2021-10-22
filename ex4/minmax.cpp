#include"pzhelp"

PROGRAM {
  int a[100][100], b[100], c[100], N, M, i, j, x, y, B, C;

  N = READ_INT();
  M = READ_INT();

  for(i=0; i<N; i++){
    for(j=0; j<M; j++)
      a[i][j] = READ_INT();
  }

  x = a[0][0];
  for(j=0; j<M; j++){
    for(i=0; i<N; i++){
      if (a[i][j] > x)
        x = a[i][j];
    }
        b[j] = x;
        x = a[0][j+1];
  }

  y = a[0][0];
  for(i=0; i<N; i++){
    for(j=0; j<M; j++){
      if (a[i][j] < y)
        y = a[i][j];
    }
        c[i] = y;
        y = a[i+1][0];
  }

  B = c[0];
  for(i=0; i<N; i++){
    if (c[i] > B)
      B = c[i];
  }

  C = b[0];
  for(j=0; j<M; j++){
    if (b[j] < C)
      C = b[j];
  }

  WRITELN(C);
  WRITELN(B);
}