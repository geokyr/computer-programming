#include"pzhelp"
#include <iostream>

PROGRAM {
  REAL a[100][100], N, M, s1a, s1b, s2a, s2b, s1, s2;
  int i, j;

  N = READ_REAL();
  M = READ_REAL();

  for(i=0; i<N; i++){
    for(j=0; j<M; j++)
      a[i][j] = READ_REAL();
  }

  s1b = 0;

  for(i=0; i<N; i++){
    s1a = 0;
    for(j=0; j<M; j++){
      s1a = s1a + a[i][j];
    }
    s1b = s1b + (s1a/M);
  }

  s2b = 0;

  for(j=0; j<M; j++){
    s2a = 0;
    for(i=0; i<N; i++){
      s2a = s2a + a[i][j];
    }
    s2b = s2b + (s2a/N);
  }

  s1 = (s1b/N);
  s2 = (s2b/M);

  WRITELN(FORM(s1, 0, 3));
  WRITELN(FORM(s2, 0, 3));
}