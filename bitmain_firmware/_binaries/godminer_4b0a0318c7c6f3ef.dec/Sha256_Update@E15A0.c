int __fastcall Sha256_Update(int result, char *a2, int a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r12
  int v5; // r4
  char *v6; // r5
  char *v7; // r6
  char v8; // t1
  int v9; // r1

  v3 = *(_DWORD *)(result + 32);
  v4 = *(_DWORD *)(result + 36);
  if ( a3 )
  {
    v5 = result;
    v6 = a2;
    result = *(_DWORD *)(result + 32) & 0x3F;
    v7 = &a2[a3];
    while ( 1 )
    {
      v8 = *v6++;
      v9 = result + 1;
      *(_BYTE *)(v5 + result + 40) = v8;
      *(_QWORD *)(v5 + 32) = __PAIR64__(v4, v3) + 1;
      if ( result == 63 )
      {
        sub_E12E0((unsigned __int8 *)v5);
        v9 = 0;
      }
      result = v9;
      if ( v6 == v7 )
        break;
      v3 = *(_DWORD *)(v5 + 32);
      v4 = *(_DWORD *)(v5 + 36);
    }
  }
  return result;
}
