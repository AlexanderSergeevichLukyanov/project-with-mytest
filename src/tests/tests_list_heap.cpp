#include "list_heap.h"
#include "mytest.h"

TEST_CASE("Testing GetMin()") {
  list_heap<int> x;
  for (int i = 0; i < 1000; ++i) {
    x.push(i);
  }
  CHECK(x.top() == 0);
}

TEST_CASE("Testing pop()") {
  list_heap<int> x;
  x.push(1);
  x.push(-2);
  x.push(1000);
  CHECK(x.top() == -2);
  x.pop();
  CHECK(x.top() == 1);
}

TEST_CASE("CHECK size()") {
  list_heap<int> x;
  for (int i = 0; i < 10000; ++i) {
    x.push(i);
  }
  CHECK_TIME("AFTER 10000 PUSH");
  CHECK(x.size() == 10000);
  for (int i = 0; i < 10000; ++i) {
    x.pop();
  }
  CHECK(x.size() == 0);
  CHECK(!x.empty()); // WRONG TEST!!!!!!!!!!!!!!!!!!!!!!!
}