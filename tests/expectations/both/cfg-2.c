#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#if (defined(NOT_DEFINED) || defined(DEFINED))
typedef struct Foo {
  int32_t x;
} Foo;
#endif

#if defined(NOT_DEFINED)
typedef struct Bar {
  Foo y;
} Bar;
#endif

#if defined(DEFINED)
typedef struct Bar {
  Foo z;
} Bar;
#endif

typedef struct Root {
  Bar w;
} Root;

void root(Root a);
