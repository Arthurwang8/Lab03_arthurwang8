#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1, b2;

  initPoint(&b1,3.0,4.0);  
  assertEquals("(3,4)", boxToString(p1), "boxToString(p1)");

  initPoint(&b2,3.14159,6.2831853071);
  assertEquals("(3.14,6.28)", boxToString(p2), "boxToString(p2)");
  assertEquals("(3,6)", boxToString(p2,1), "boxToString(p2,1)");
  assertEquals("(3.142,6.283)", boxToString(p2,4), "boxToString(p2,4)");
  assertEquals("(3.1416,6.2832)", boxToString(p2,5), "boxToString(p2,5)");

		   
  return 0;
}
