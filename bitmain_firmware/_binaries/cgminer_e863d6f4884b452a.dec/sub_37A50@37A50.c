size_t __fastcall sub_37A50(int a1, const void *a2, size_t a3)
{
  pthread_mutex_t *v5; // r5
  int v6; // r6
  int v7; // r11
  char v8; // r10
  int v9; // r7
  int v10; // r1
  size_t v11; // r4
  unsigned int v12; // lr
  _WORD *v13; // r1
  int v14; // r3
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // lr
  int v19; // r2
  unsigned int v22; // [sp+14h] [bp-A08h] BYREF
  _WORD s[256]; // [sp+18h] [bp-A04h] BYREF
  char v24[2052]; // [sp+218h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  v5 = (pthread_mutex_t *)((char *)&unk_6FBC4 + 24 * a1);
  pthread_mutex_lock(v5);
  switch ( a1 )
  {
    case 0:
      v6 = 400;
      v7 = 384;
      v8 = 24;
      v9 = 101;
      goto LABEL_5;
    case 1:
      v6 = 408;
      v7 = 384;
      v8 = 16;
      v9 = 103;
      goto LABEL_5;
    case 2:
      v6 = 416;
      v7 = 384;
      v8 = 8;
      v9 = 105;
      goto LABEL_5;
    case 3:
      v6 = 424;
      v7 = 384;
      v8 = 0;
      v9 = 107;
      goto LABEL_5;
    case 4:
      v6 = 432;
      v7 = 388;
      v8 = 24;
      v9 = 109;
      goto LABEL_5;
    case 5:
      v6 = 440;
      v7 = 388;
      v8 = 16;
      v9 = 111;
      goto LABEL_5;
    case 6:
      v6 = 448;
      v7 = 388;
      v8 = 8;
      v9 = 113;
      goto LABEL_5;
    case 7:
      v6 = 456;
      v7 = 388;
      v8 = 0;
      v9 = 115;
      goto LABEL_5;
    case 8:
      v6 = 464;
      v7 = 392;
      v8 = 24;
      v9 = 117;
      goto LABEL_5;
    case 9:
      v6 = 472;
      v7 = 392;
      v8 = 16;
      v9 = 119;
LABEL_5:
      while ( 1 )
      {
        v22 = -1;
        v22 = *(_DWORD *)(dword_6FAEC + v7);
        if ( a3 <= (unsigned __int8)(v22 >> v8) )
          break;
        usleep(0);
      }
      v10 = *(_DWORD *)(dword_6FAEC + v6);
      do
        *(_DWORD *)v24 = v10;
      while ( v10 < 0 );
      v11 = a3 + 2;
      s[0] = -21931;
      memcpy(&s[1], a2, a3);
      v12 = (a3 + 2) >> 2;
      if ( v12 )
      {
        v13 = s;
        v14 = 170;
        v15 = 85;
        while ( 1 )
        {
          *(_DWORD *)(dword_6FAEC + 4 * v9) = (v14 << 16)
                                            | (v15 << 24)
                                            | *((unsigned __int8 *)v13 + 3)
                                            | (*((unsigned __int8 *)v13 + 2) << 8);
          if ( v13 == &s[2 * v12 - 2] )
            break;
          v15 = *((unsigned __int8 *)v13 + 4);
          v13 += 2;
          v14 = *((unsigned __int8 *)v13 + 1);
        }
      }
      v16 = v11 & 3;
      if ( (v11 & 3) != 0 )
      {
        v17 = LOBYTE(s[2 * v12]);
        v18 = 2 * v12;
        v19 = v17 << 24;
        if ( v16 == 2 )
        {
          v19 |= HIBYTE(s[v18]) << 16;
        }
        else if ( v16 == 3 )
        {
          v19 |= (LOBYTE(s[v18 + 1]) << 8) | (HIBYTE(s[v18]) << 16);
        }
        *(_DWORD *)(dword_6FAEC + 4 * v9) = v19;
      }
      *(_DWORD *)(dword_6FAEC + v6) = v11 | 0x80000000;
      pthread_mutex_unlock(v5);
      break;
    default:
      if ( byte_73320 || (v11 = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 2 )
      {
        v11 = 0;
        snprintf(v24, 0x800u, "%s: The uart%d is not supported!!!\n", "uart_send", a1);
        sub_343C4(3, v24, 0);
      }
      break;
  }
  return v11;
}
