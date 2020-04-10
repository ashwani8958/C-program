# 1 "while_with_volatile.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "while_with_volatile.c"
int main()
{
 volatile int flag = 0;

 while(flag != 1)
 {
  ;
 }
 return 0;
}
