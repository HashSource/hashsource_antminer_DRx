int __fastcall sub_1EDF0(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v8; // r5
  int v9; // r3
  char v11[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(v11, "submit_nonce_1");
    sub_343C4(7, v11, 0);
  }
  if ( a4 )
    *a4 = 0;
  if ( sub_1B33C(a2, a3) )
  {
    sub_1EC3C(a1, (int)a2);
    v8 = sub_2A0C0(a2 + 61, a2 + 53);
    if ( v8 )
      return v8;
    if ( a4 )
      *a4 = 1;
    v9 = (unsigned __int8)byte_6FA71;
    if ( byte_6FA71 )
    {
      if ( byte_73320 || (v9 = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 6 )
      {
        strcpy(v11, "Share above target");
        sub_343C4(7, v11, 0);
        return v8;
      }
    }
    return v9;
  }
  else
  {
    sub_1C5E4(a1);
    return 0;
  }
}
