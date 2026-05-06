#include "types.h"
#include "user.h"

int
main(void)
{
  write(1, "\n===== START TRACE =====\n", 25);
  write(1, "[USER] calling write\n", 22);
  write(1, "hello\n", 6);
  write(1, "===== END TRACE =====\n", 23);
  exit();
}