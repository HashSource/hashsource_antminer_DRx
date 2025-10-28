unsigned __int8 *__fastcall sub_1A010(unsigned __int8 *result, int a2)
{
  int v2; // r2
  char *v3; // r3
  int v4; // t1
  bool v5; // zf
  char *p_src; // r5
  _BYTE *v7; // r6
  int v8; // r4
  const unsigned __int16 **v9; // r0
  _BYTE *v10; // r3
  unsigned __int8 *v11; // r2
  const unsigned __int16 *v12; // r0
  int v13; // t1
  bool v14; // cc
  _BYTE *v15; // r12
  int v16; // [sp+4h] [bp-14h] BYREF
  char src; // [sp+8h] [bp-10h] BYREF
  char v18; // [sp+9h] [bp-Fh] BYREF
  _BYTE vars0[16]; // [sp+18h] [bp+0h] BYREF

  v2 = *result;
  v16 = a2;
  if ( v2 )
  {
    v3 = &v18;
    while ( 1 )
    {
      v5 = v3 == vars0;
      *(v3 - 1) = v2;
      p_src = v3++;
      if ( v5 )
        break;
      v4 = *++result;
      LOBYTE(v2) = v4;
      if ( !v4 )
        goto LABEL_8;
    }
  }
  else
  {
    p_src = &src;
LABEL_8:
    *p_src = 61;
    v7 = p_src + 1;
    if ( p_src + 1 < vars0 )
    {
      v8 = (unsigned __int8)v16;
      if ( (_BYTE)v16 )
      {
        v9 = _ctype_b_loc();
        v10 = p_src + 2;
        v11 = (unsigned __int8 *)&v16 + 1;
        v12 = *v9;
        do
        {
          if ( (v12[v8] & 0x4000) != 0 )
            *(v10 - 1) = v8;
          else
            *(v10 - 1) = 46;
          v14 = &src > (char *)v11;
          if ( &src > (char *)v11 )
            v14 = vars0 > v10;
          v15 = v10++;
          if ( !v14 )
            break;
          v13 = *v11++;
          v8 = v13;
        }
        while ( v13 );
      }
      else
      {
        v15 = p_src + 1;
      }
      if ( v15 <= vars0 )
        v7 = v15;
      return (unsigned __int8 *)sub_19D60(&src, v7 - &src, 0);
    }
  }
  return result;
}
