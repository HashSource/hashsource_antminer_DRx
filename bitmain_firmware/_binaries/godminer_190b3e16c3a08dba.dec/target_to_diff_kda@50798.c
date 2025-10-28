int __fastcall target_to_diff_kda(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2
  char *v3; // lr
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  char *v8; // r12
  char v9; // r3
  char *v10; // lr
  int result; // r0
  int v12; // r12
  int v13; // t1
  int v14; // r3
  int v15; // r2
  _DWORD v16[7]; // [sp+0h] [bp-24h] BYREF
  int v17; // [sp+1Ch] [bp-8h] BYREF
  char v18; // [sp+20h] [bp-4h] BYREF

  v1 = a1[1];
  v2 = a1[2];
  v3 = (char *)v16;
  v4 = a1[3];
  v16[0] = *a1;
  v16[1] = v1;
  v16[2] = v2;
  v16[3] = v4;
  v5 = a1[5];
  v6 = a1[6];
  v7 = a1[7];
  v8 = (char *)&v17 + 3;
  v16[4] = a1[4];
  v16[5] = v5;
  v16[6] = v6;
  v17 = v7;
  do
  {
    v9 = *v3;
    *v3++ = *v8;
    *v8-- = v9;
  }
  while ( v3 < v8 );
  v10 = &v18;
  result = 0;
LABEL_4:
  v13 = (unsigned __int8)*--v10;
  v12 = v13;
  v14 = 7;
  while ( 1 )
  {
    v15 = v12 >> v14--;
    if ( (v15 & 1) != 0 )
      return result;
    result = (unsigned __int8)(result + 1);
    if ( v14 == -1 )
    {
      if ( v10 != (char *)v16 )
        goto LABEL_4;
      return result;
    }
  }
}
