int __fastcall sub_33A68(unsigned int *a1, int a2, _BYTE *a3, unsigned __int8 a4)
{
  unsigned int *v5; // r6
  int v7; // r5
  int v8; // r1
  bool v9; // zf
  _BOOL4 v10; // r12
  int v11; // r1
  int v12; // r2
  unsigned __int8 v14; // [sp+18h] [bp+18h]

  v5 = a1;
  if ( a3 && *a3 )
  {
    v7 = (unsigned __int8)*a3;
    v8 = LOBYTE((*_ctype_tolower_loc())[v7]);
    v9 = v8 == 102;
    if ( v8 != 102 )
      v9 = v8 == 116;
    *a3 = v8;
    if ( v9 )
    {
      v14 = a4;
      v10 = v8 == 116;
      a1 = v5;
      v11 = 77;
      byte_63BC5 = v10;
      v12 = v10;
    }
    else
    {
      v12 = 0;
      v14 = a4;
      a1 = v5;
      v11 = 76;
    }
  }
  else
  {
    v12 = 0;
    v14 = a4;
    v11 = 75;
  }
  return sub_32F3C(a1, v11, v12, 0, v14);
}
