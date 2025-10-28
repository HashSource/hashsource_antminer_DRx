unsigned __int16 *__fastcall sub_2A7FC(unsigned __int16 *a1, int a2, int a3)
{
  char *v3; // r8
  char *v4; // r5
  unsigned int v5; // r3
  unsigned int v6; // r2
  unsigned __int16 v7; // r3
  const char *v8; // r0
  int ***v9; // r1
  int **v10; // r0
  unsigned int v11; // r3
  bool v12; // zf
  int v13; // r1
  int v14; // r10
  int ***v15; // r1
  int **v16; // r0
  int v17; // r4
  unsigned int v18; // r3
  int v23; // [sp+14h] [bp-40h]
  int dest; // [sp+1Ch] [bp-38h] BYREF
  int v25; // [sp+20h] [bp-34h]
  int v26; // [sp+24h] [bp-30h]
  int v27; // [sp+28h] [bp-2Ch]
  int v28; // [sp+2Ch] [bp-28h]
  int v29; // [sp+30h] [bp-24h]
  int v30; // [sp+34h] [bp-20h] BYREF
  int v31; // [sp+38h] [bp-1Ch]
  int v32; // [sp+3Ch] [bp-18h]
  int v33; // [sp+40h] [bp-14h]
  int v34; // [sp+44h] [bp-10h]
  int v35; // [sp+48h] [bp-Ch]
  int v36; // [sp+4Ch] [bp-8h]

  v3 = (char *)(a3 + 8);
  v23 = (((unsigned __int16)(*(_WORD *)(a3 + 4) << 8) | HIBYTE(*(_WORD *)(a3 + 4))) & 0xFFF) - 1;
  if ( (((unsigned __int16)(*(_WORD *)(a3 + 4) << 8) | HIBYTE(*(_WORD *)(a3 + 4))) & 0xFFF) != 0 )
  {
    v4 = (char *)(a3 + 8);
    v5 = *(unsigned __int16 *)(a3 + 6);
    v6 = v5 >> 8;
    v7 = (_WORD)v5 << 8;
    while ( 2 )
    {
      dest = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      memcpy(&dest, v4, ((unsigned __int16)v6 | v7) & 0xFFF);
      if ( dword_7FF54 && v25 )
      {
        LOWORD(v30) = 10;
        v32 = v26;
        v33 = v27;
        v34 = v28;
        v35 = v29;
      }
      else
      {
        LOWORD(v30) = 2;
        v31 = dest;
      }
      HIWORD(v30) = 31488;
      if ( dword_7CF4C > 0 )
      {
        v8 = (const char *)sub_50CD0(&v30);
        printf("searching for %s\n", v8);
      }
      v9 = 0;
      do
      {
        v10 = sub_21500((unsigned __int16 *)&v30, v9, -1, 0);
        v9 = (int ***)v10;
        if ( !v10 )
          return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
      }
      while ( ((unsigned int)v10[13] & 1) == 0 );
      v11 = *(unsigned __int16 *)(a3 + 6);
      v6 = v11 >> 8;
      v7 = (_WORD)v11 << 8;
      v12 = v23-- == 0;
      v4 += ((unsigned __int16)v6 | v7) & 0xFFF;
      if ( !v12 )
        continue;
      break;
    }
    v13 = (*(unsigned __int16 *)(a3 + 4) << 8) | HIBYTE(*(unsigned __int16 *)(a3 + 4));
    v14 = (v13 & 0xFFF) - 1;
    if ( (v13 & 0xFFF) != 0 )
    {
      do
      {
        dest = 0;
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v32 = 0;
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v36 = 0;
        memcpy(&dest, v3, ((unsigned __int16)v6 | v7) & 0xFFF);
        if ( dword_7FF54 && v25 )
        {
          LOWORD(v30) = 10;
          v32 = v26;
          v33 = v27;
          v34 = v28;
          v35 = v29;
        }
        else
        {
          LOWORD(v30) = 2;
          v31 = dest;
        }
        v15 = 0;
        HIWORD(v30) = 31488;
        do
        {
          v16 = sub_21500((unsigned __int16 *)&v30, v15, -1, 0);
          v15 = (int ***)v16;
          if ( !v16 )
            off_7C9FC("ntp_request.c", 1629, 2, "found");
        }
        while ( ((unsigned int)v16[13] & 1) == 0 );
        v17 = (int)v16;
        sub_2310C((int)v16, "GONE");
        sub_218BC(v17);
        --v14;
        v18 = *(unsigned __int16 *)(a3 + 6);
        v6 = v18 >> 8;
        v7 = (_WORD)v18 << 8;
        v3 += ((unsigned __int16)v6 | v7) & 0xFFF;
      }
      while ( v14 + 1 > 0 );
    }
  }
  return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
