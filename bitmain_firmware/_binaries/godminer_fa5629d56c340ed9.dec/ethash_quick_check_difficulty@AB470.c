bool __fastcall ethash_quick_check_difficulty(int *a1, int a2, int a3, int a4, int *a5, int a6)
{
  int v6; // r2
  unsigned __int8 *v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // t1
  unsigned int v10; // t1
  bool v11; // cf
  _DWORD v13[8]; // [sp+8h] [bp-20h] BYREF

  ethash_quick_hash(v13, (int)a1, a3, a4, a5);
  v6 = a6 - 1;
  v7 = (unsigned __int8 *)v13;
  while ( 1 )
  {
    v9 = *v7++;
    v8 = v9;
    v10 = *(unsigned __int8 *)++v6;
    v11 = v8 >= v10;
    if ( v8 != v10 )
      break;
    if ( v6 == a6 + 31 )
      return 1;
  }
  return !v11;
}
