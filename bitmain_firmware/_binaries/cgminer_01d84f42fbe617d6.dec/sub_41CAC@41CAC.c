void sub_41CAC()
{
  char *v0; // r10
  int v1; // r5
  int v2; // r4
  int v3; // r2
  int v4; // r7
  int v5; // r6
  int *v6; // r8
  _DWORD *v7; // r5
  int v8; // r4
  _DWORD *v9; // r3
  int v10; // t1
  int v11; // t1
  int v12; // r3
  bool v13; // nf
  int v14; // r3
  int v15; // [sp+0h] [bp-814h]
  int v16; // [sp+4h] [bp-810h]
  char *v17; // [sp+8h] [bp-80Ch]
  int v18; // [sp+Ch] [bp-808h]
  char v19[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    strcpy(v19, "print_result");
    sub_38438(5, v19, 0);
  }
  v0 = (char *)&unk_C20B8;
  v17 = (char *)&unk_66EDC;
  v16 = 0;
  v18 = 805859;
  do
  {
    v1 = v16;
    v2 = *(unsigned __int8 *)(v18 + 1);
    v3 = ++v16;
    ++v18;
    if ( v2 == 1 )
    {
      printf("Chain %d result\n", v3);
      v4 = 0;
      v5 = 0;
      v15 = 864 * v1;
      v6 = (int *)((char *)&unk_65EAC + 1024 * v1);
      v7 = v17;
      do
      {
        v8 = 0;
        v9 = &dword_66EB0[12 * v5 - 1 + v15];
        do
        {
          v10 = v9[1];
          ++v9;
          v8 += v10;
        }
        while ( v9 != v7 );
        v11 = *v6++;
        printf("A%02d=%d %d ", v5, v8, *(_DWORD *)&aBitmainL3Detec_0[8 * v11 + 72]);
        if ( v8 == 48 )
        {
          if ( !*(_DWORD *)&v0[v4] )
          {
            v14 = *(v6 - 1) + 4;
            if ( v14 > 65 )
            {
              v14 = 65;
              *(_DWORD *)&v0[v4] = 1;
            }
            *(v6 - 1) = v14;
            byte_60DE8 = 0;
          }
        }
        else
        {
          if ( v8 <= 45 )
          {
            v12 = *(v6 - 1) - 1;
            v13 = *(v6 - 1) - 31 < 0;
            byte_60DE8 = 0;
            if ( v13 != __OFSUB__(v12, 30) )
              v12 = 30;
            *(v6 - 1) = v12;
          }
          *(_DWORD *)&v0[v4] = 1;
        }
        if ( (++v5 & 7) == 0 )
          putchar(10);
        v4 += 4;
        v7 += 12;
      }
      while ( v5 != 72 );
      putchar(10);
    }
    v0 += 1024;
    v17 += 3456;
  }
  while ( v16 != 4 );
}
