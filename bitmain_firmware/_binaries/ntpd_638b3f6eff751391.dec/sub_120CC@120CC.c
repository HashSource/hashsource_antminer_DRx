void __fastcall sub_120CC(int *a1)
{
  int *v1; // r4
  ssize_t v2; // r0
  int v3; // r5
  _DWORD *v4; // r4
  unsigned int v5; // r1
  unsigned int v6; // r3
  _DWORD v7[1280]; // [sp+0h] [bp-1400h] BYREF

  v1 = a1;
  if ( dword_CA648 )
    goto LABEL_15;
  v2 = read(a1[1], v7, 0x1400u);
  if ( v2 < 0 )
  {
    sub_4FE78(3, "i/o error on routing socket %m - disabling");
    a1 = v1;
LABEL_15:
    sub_110EC(a1);
    free(v1);
    return;
  }
  if ( v2 > 15 && v7[0] > 0xFu )
  {
    v3 = v2;
    if ( v7[0] <= (unsigned int)v2 )
    {
      v4 = v7;
      do
      {
        v5 = *((unsigned __int16 *)v4 + 2);
        if ( v5 <= 0x19 )
        {
          if ( ((1 << v5) & 0x3330000) != 0 )
          {
            if ( dword_7CF4C > 2 )
              printf("routing message op = %d: scheduling interface update\n", v5);
            sub_2D720(dword_CB548 + 2);
            goto LABEL_10;
          }
          if ( ((1 << v5) & 8) != 0 )
            return;
        }
        if ( dword_7CF4C > 3 )
          printf("routing message op = %d: ignored\n", v5);
LABEL_10:
        v6 = (*v4 + 3) & 0xFFFFFFFC;
        v3 -= v6;
        v4 = (_DWORD *)((char *)v4 + v6);
      }
      while ( v3 > 15 && *v4 > 0xFu && *v4 <= (unsigned int)v3 );
    }
  }
}
