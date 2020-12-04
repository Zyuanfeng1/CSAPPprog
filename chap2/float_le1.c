#include <stdio.h>

unsigned f2u(float x);
int float_le(float x, float y);

int main()
{
    printf("-0 <= +0 %d\n", float_le(-0, +0));
    printf("+0 <= -0 %d\n", float_le(+0.000000, -0.000000));
    printf("0 <= 3 %d\n", float_le(0, 3));
    printf("-4 <= -1 %d\n", float_le(-4, -1));
    printf("-4 <= 4 %d\n", float_le(-4, 4));
    return 0;
}

int float_le(float x, float y)
{
    unsigned ux = f2u(x);
    unsigned uy =f2u(y);
    printf("x: %x %f %u\ny: %x %f %u\nux: %x %u\nuy: %x %u\n", x, x, x,y,y, y, ux, ux, uy, uy);
    unsigned sx = ux >> 31;
    unsigned sy = uy >> 31;
    printf("sx: %x %d\nsy: %x %d\n", sx, sx, sy, sy);
    int k1 = ux << 1 == 0 && uy << 1 == 0;
    int k2 = sx && !sy;
    int k3 = !sx && !sy && ux <= uy;
    int k4 = sx && sy && ux >= uy;
    printf("ux<<1==0&&uy<<1==0: %d\nsx%!sy: %d\n!sx&&!sy&&ux<=uy: %d\nsx&&sy&&ux>=uy: %d\n", k1, k2, k3, k4);
    return (ux << 1 == 0 && uy << 1 == 0) ||
             (sx && !sy) ||
            (!sx && !sy && ux <= uy) ||
            ( sx && sy && ux >= uy);
}

unsigned f2u(float x)
{
    printf("x: %x %f %u\n&x: %x %f %u\n(unsigned*)&x: %x\n*(unsigned*)&x: %x\n",x,x,x,&x,&x,&x,(unsigned*)&x,(unsigned*)&x,*(unsigned*)&x,*(unsigned*)&x);
    return *(unsigned*)&x;
}
