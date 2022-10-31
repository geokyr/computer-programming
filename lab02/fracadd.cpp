#include "pzhelp"

PROGRAM {
  int k, l, m, n;

  k = READ_INT(); l = READ_INT(); m = READ_INT(); n = READ_INT();
  WRITELN((k*n+l*m), l*n);
}