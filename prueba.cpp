#include <stdio.h>

#include <stdio.h>
int main(void)
{
union {
int vi;
float vf;
} u;
u.vi=255;
printf("%d\n",u.vi);
printf("%f\n",u.vf);
u.vf=255.0;
printf("%d\n",u.vi);
printf("%f\n",u.vf);
}
