size_t __fastcall sub_429E0(int a1, const void *a2, size_t a3)
{
  char v6; // r5
  int v7; // r7
  int v8; // r10
  int v9; // r4
  size_t v10; // r9
  size_t v11; // r8
  unsigned int *v12; // r4
  int v13; // r5
  int v14; // r6
  int v15; // r3
  char v17[2048]; // [sp+10h] [bp-A04h] BYREF
  _BYTE s[516]; // [sp+810h] [bp-204h] BYREF

  memset(s, 0, 0x200u);
  pthread_mutex_lock(&stru_75C98[a1]);
  switch ( a1 )
  {
    case 0:
      v6 = 24;
      v7 = 101;
      v8 = 100;
      v9 = 96;
      goto LABEL_17;
    case 1:
      v6 = 16;
      v7 = 103;
      v8 = 102;
      v9 = 96;
      goto LABEL_17;
    case 2:
      v6 = 8;
      v7 = 105;
      v8 = 104;
      v9 = 96;
      goto LABEL_17;
    case 3:
      v6 = 0;
      v7 = 107;
      v8 = 106;
      v9 = 96;
      goto LABEL_17;
    case 4:
      v6 = 24;
      v7 = 109;
      v8 = 108;
      v9 = 97;
      goto LABEL_17;
    case 5:
      v6 = 16;
      v7 = 111;
      v8 = 110;
      v9 = 97;
      goto LABEL_17;
    case 6:
      v6 = 8;
      v7 = 113;
      v8 = 112;
      v9 = 97;
      goto LABEL_17;
    case 7:
      v6 = 0;
      v7 = 115;
      v8 = 114;
      v9 = 97;
      goto LABEL_17;
    case 8:
      v6 = 24;
      v7 = 117;
      v8 = 116;
      v9 = 98;
      goto LABEL_17;
    case 9:
      v6 = 16;
      v7 = 119;
      v8 = 118;
      v9 = 98;
LABEL_17:
      while ( a3 > (unsigned __int8)((unsigned int)sub_42544(v9) >> v6) )
        ;
      while ( sub_42544(v8) < 0 )
        ;
      s[0] = 85;
      s[1] = -86;
      memcpy(&s[2], a2, a3);
      v10 = a3 + 2;
      v11 = v10 >> 2;
      if ( v10 >> 2 )
      {
        v12 = (unsigned int *)s;
        v13 = 0;
        do
        {
          v14 = _byteswap_ulong(*v12);
          sub_42570(v7, v14);
          ++v13;
          ++v12;
        }
        while ( v11 != v13 );
      }
      else
      {
        v14 = 0;
        v11 = 0;
      }
      v15 = v10 & 3;
      if ( (v10 & 3) != 0 )
      {
        switch ( v15 )
        {
          case 2:
            v14 = ((unsigned __int8)s[4 * v11] << 24) | ((unsigned __int8)s[4 * v11 + 1] << 16);
            break;
          case 3:
            v14 = ((unsigned __int8)s[4 * v11 + 2] << 8)
                | ((unsigned __int8)s[4 * v11 + 1] << 16)
                | ((unsigned __int8)s[4 * v11] << 24);
            break;
          case 1:
            v14 = (unsigned __int8)s[4 * v11] << 24;
            break;
          default:
            if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
            {
              snprintf(v17, 0x800u, "%s: the uart%d send left data is 4*N length, error!!!\n", "uart_send", a1);
              sub_3F1C0(3, v17, 0);
            }
            break;
        }
        sub_42570(v7, v14);
      }
      sub_42570(v8, v10 | 0x80000000);
      pthread_mutex_unlock(&stru_75C98[a1]);
      break;
    default:
      if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
      {
        snprintf(v17, 0x800u, "%s: The uart%d is not supported!!!\n", "uart_send", a1);
        sub_3F1C0(3, v17, 0);
        v10 = 0;
      }
      else
      {
        v10 = 0;
      }
      break;
  }
  return v10;
}
