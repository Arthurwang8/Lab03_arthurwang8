#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1, b2;

  initPoint(&b1,3.0,4.0,2.0,1.0);  
  assertEquals("(3,4,2,1)", boxToString(b1), "boxToString(p1)");

  initPoint(&b2,3.14159,6.2831853071,2.12321,1);
  assertEquals("(3.14,6.28,2.12,1)", boxToString(b2), "boxToString(b2)");
  assertEquals("(3,6,2,1)", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("(3.142,6.283,2.123,1)", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("(3.1416,6.2832,2.1232,1)", boxToString(b2,5), "boxToString(b2,5)");

		   
  return 0;
}
