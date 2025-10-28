int __fastcall sub_3E590(int a1, int a2)
{
  unsigned __int8 *v4; // r7
  int v5; // r4
  int v6; // t1
  int i; // r4
  unsigned __int8 v8; // r0
  int v10; // r10
  char v11[2052]; // [sp+18h] [bp-804h] BYREF

  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v11, "tty_init");
    sub_343C4(5, v11, 0);
  }
  if ( a2 != 115200 )
  {
    if ( a2 == 921600 )
    {
      byte_6D7EE = 2;
    }
    else
    {
      if ( a2 <= 921600 )
      {
        if ( a2 == 460800 )
        {
          byte_6D7EE = 6;
          goto LABEL_10;
        }
      }
      else
      {
        if ( a2 == 1500000 )
        {
          byte_6D7EE = 1;
          goto LABEL_10;
        }
        if ( a2 == 3000000 )
        {
          byte_6D7EE = 0;
          goto LABEL_10;
        }
      }
      byte_6D7EE = 26;
    }
LABEL_10:
    v4 = (unsigned __int8 *)(a1 + 156);
    v5 = 0;
    do
    {
      v6 = *v4++;
      if ( v6 == 1 )
      {
        v10 = ((unsigned __int8)byte_6D7EE << 8) | 0x7002001;
        sub_3C790(v5, 1, 0, 28, v10);
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
        {
          snprintf(v11, 0x800u, "MISC_CONTROL : %x", v10);
          sub_343C4(5, v11, 0);
        }
      }
      v5 = (unsigned __int8)(v5 + 1);
      sub_2A7F4();
    }
    while ( v5 != 4 );
    *(_DWORD *)(dword_6FAEC + 60) = (unsigned __int8)byte_6D7EE;
  }
  for ( i = 0; i != 4; ++i )
  {
    v8 = i;
    sub_3E3D8(v8, a1);
  }
  *(_DWORD *)v11 = a1;
  v11[4] = 0;
  sub_2D7E0(a1 + 4538, 0, (void *(*)(void *))sub_37C70, v11);
  return sub_2A7F4();
}
