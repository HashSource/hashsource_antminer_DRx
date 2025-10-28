int __fastcall sub_3BC94(unsigned int a1, int a2, unsigned int a3)
{
  int v6; // r5
  int v8; // r1
  _WORD *v9; // r3
  char v10; // t1
  int v11; // r3
  int v12; // r1
  __int16 v13; // r7
  __int16 v14; // r2
  int v15; // r0
  unsigned __int8 v16[32]; // [sp+8h] [bp-920h] BYREF
  _WORD s[128]; // [sp+28h] [bp-900h] BYREF
  char v18[2048]; // [sp+128h] [bp-800h] BYREF

  memset(s, 0, sizeof(s));
  memset(v16, 0, sizeof(v16));
  if ( (a3 > 0x20) | (a1 >> 7) )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
      return 0;
    snprintf(v18, 0x800u, "invalid param addr 0x%02x, len %d\n", a1, a3);
    sub_343C4(5, v18, 0);
    return 0;
  }
  else
  {
    s[0] = -21931;
    LOBYTE(s[2]) = a1;
    LOBYTE(s[1]) = a3 + 5;
    HIBYTE(s[1]) = -122;
    if ( a3 )
    {
      v8 = a2 - 1;
      v9 = &s[2];
      do
      {
        v10 = *(_BYTE *)++v8;
        *((_BYTE *)v9 + 1) = v10;
        v9 = (_WORD *)((char *)v9 + 1);
      }
      while ( v9 != (_WORD *)((char *)&s[2] + (unsigned __int16)(a3 - 1) + 1) );
    }
    LOWORD(v11) = 2;
    v12 = 2;
    v13 = 0;
    do
    {
      v11 = (unsigned __int16)(v11 + 1);
      v14 = *((unsigned __int8 *)s + v12) + v13;
      v12 = v11;
      v13 = v14;
    }
    while ( v11 <= (int)(a3 + 4) );
    *(_WORD *)((char *)&s[2] + a3 + 1) = v14;
    v15 = sub_3B798((unsigned __int8 *)s, (unsigned __int8)(a3 + 7), v16, 8);
    if ( !v15 )
      return 0;
    if ( v16[5] == 1 )
    {
      if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
        return v15;
      v6 = v15;
      strcpy(v18, "save eeprom data success \n");
      sub_343C4(5, v18, 0);
      return v6;
    }
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
      return 0;
    strcpy(v18, "save eeprom data failed \n");
    sub_343C4(5, v18, 0);
    return 0;
  }
}
