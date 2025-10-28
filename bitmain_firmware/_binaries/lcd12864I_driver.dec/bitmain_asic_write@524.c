int __fastcall bitmain_asic_write(int a1, int a2, int a3)
{
  int v5; // r2
  bool v6; // cf
  unsigned int v7; // r6
  int v8; // r0
  int i; // r5
  int v10; // r6
  char v11; // r0
  _WORD v13[32]; // [sp+0h] [bp-40h] BYREF

  memset(v13, 32, sizeof(v13));
  v5 = *((_DWORD *)get_current() + 2);
  v6 = __CFADD__(a2, a3);
  if ( !__CFADD__(a2, a3) )
    v6 = __CFSUB__(a2 + a3, v5, __CFADD__(a2, a3));
  if ( !v6 )
    v5 = 0;
  if ( v5 )
  {
    if ( a3 )
    {
      _memzero(v13, a3);
      return -14;
    }
  }
  else
  {
    v7 = __mrc(15, 0, 3, 0, 0);
    __mcr(15, 0, v7 & 0xFFFFFFF3 | 4, 3, 0, 0);
    __isb(0xFu);
    v8 = arm_copy_from_user(v13, a2, a3);
    __mcr(15, 0, v7, 3, 0, 0);
    __isb(0xFu);
    if ( v8 )
      return -14;
  }
  for ( i = 0; i != 32; i += 8 )
  {
    v10 = 0;
    SendCommad(addr_tab[i]);
    do
    {
      v11 = *((_BYTE *)&v13[i] + v10++);
      SendData(v11);
    }
    while ( v10 != 16 );
  }
  return a3;
}
