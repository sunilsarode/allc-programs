/*main()

{
int v=10;
int *i;
i=&v;


printf("i=%d address=%u",*i,i);

}
*/

#include <stdio.h>
void main() {
  int *ptr;
  ptr = (int*)7000;
  *ptr = 10;
  printf("Value: %i", *ptr);
}
