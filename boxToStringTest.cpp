#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1, b2;

  initBox(&b1,3.0,4.0,2.0,1.0);  
  assertEquals("ul=(3,4),w=2,h=1", boxToString(b1), "boxToString(p1)");

  initBox(&b2,3.14159,6.2831853071,2.12321,1);
  assertEquals("ul=(3.14,6.28),w=2.12,h=1", boxToString(b2), "boxToString(b2)");
  assertEquals("ul=(3,6),w=2,h=1", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("ul=(3.141,6.283),w=2.123,h=1", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("ul=(3.1415,6.2831),w=2.1232,h=1", boxToString(b2,5), "boxToString(b2,5)");

		   
  return 0;
}
