#include "types.h"
#include "user.h"

int
main(void)
{
  printf(1, "[USER] calling write directly\n"); // 这一行是用户态追踪
  write(1, "hello\n", 6);                       // 直接系统调用
  exit();
}