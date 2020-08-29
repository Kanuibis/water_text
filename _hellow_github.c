#incldue<stdio.h>
void hello();
char c;
int main()
{
  hello();
  gets(&c);
  printf("bye~\nyou may need rop~");
  return 0;
}
void hello()
{
  printf("Hello,github!\n");
  puts("A little promble?\n");
  system("shell?");
}
