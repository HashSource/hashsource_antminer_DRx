void *__fastcall sub_2CC48(void *result, unsigned __int16 *a2, unsigned int *a3, int a4, unsigned __int16 a5)
{
  void *v6; // r7
  unsigned __int16 *v7; // r4
  const char *v9; // r10
  const char *v10; // r0
  int v11; // r2
  int v12; // r4
  _DWORD *v13; // r12
  unsigned int v14; // r1
  unsigned int v15; // r2
  unsigned int v16; // r3
  char v17; // t1
  char v18; // r2
  int v19; // r10
  size_t v20; // r8
  int v21; // r1
  int *v22; // r1
  int *v23; // r2
  int *v24; // r3
  int *v25; // r3
  __int16 v26; // r3
  __int16 v27; // r3
  unsigned int v28; // r2
  int *v29; // r5
  int *v30; // r8
  int *v31; // r12
  int *v32; // r4
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int *v36; // r11
  int v37; // r1
  int v38; // r2
  int v39; // r4
  unsigned int v40; // r2
  unsigned int v41; // r3
  unsigned int v42; // r2
  unsigned int v43; // r3
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int *v47; // r2
  int v48; // r1
  int *v49; // r2
  int v50; // r1
  int v51; // [sp+Ch] [bp-30h] BYREF
  int v52; // [sp+10h] [bp-2Ch]
  int v53; // [sp+14h] [bp-28h]
  int s2; // [sp+18h] [bp-24h] BYREF
  unsigned int v55; // [sp+1Ch] [bp-20h]
  int v56; // [sp+20h] [bp-1Ch]
  int v57; // [sp+24h] [bp-18h] BYREF
  void *v58; // [sp+28h] [bp-14h]
  unsigned int v59; // [sp+2Ch] [bp-10h] BYREF
  unsigned int v60; // [sp+30h] [bp-Ch]
  unsigned int v61; // [sp+34h] [bp-8h] BYREF

  v6 = result;
  v7 = a2;
  if ( dword_7CF4C > 0 )
  {
    v9 = (const char *)sub_50CD0(a2);
    v10 = (const char *)sub_50CD0(a3);
    result = (void *)printf("restrict: op %d addr %s mask %s mflags %08x flags %08x\n", v6, v9, v10, a4, a5);
  }
  if ( v7 )
  {
    v11 = *v7;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    s2 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    if ( v11 == 2 )
    {
      v28 = bswap32(*((_DWORD *)v7 + 1));
      v55 = bswap32(a3[1]);
      s2 = v55 & v28;
      v19 = 0;
      LOWORD(v53) = a5;
      v20 = 8;
      HIWORD(v53) = a4;
      v12 = dword_CB538;
    }
    else
    {
      if ( v11 != 10 )
        off_7C9FC("ntp_restrict.c", 524, 0, "0");
      v13 = (int *)((char *)&v57 + 3);
      result = (void *)a3[2];
      v14 = a3[3];
      v15 = a3[4];
      v16 = a3[5];
      v58 = result;
      v59 = v14;
      v60 = v15;
      v61 = v16;
      do
      {
        v17 = *((_BYTE *)v13 + 1);
        v13 = (_DWORD *)((char *)v13 + 1);
        v18 = *((_BYTE *)v7 + 8);
        v7 = (unsigned __int16 *)((char *)v7 + 1);
        *((_BYTE *)v13 - 16) = v18 & v17;
      }
      while ( v13 != (unsigned int *)((char *)&v61 + 3) );
      v19 = 1;
      LOWORD(v53) = a5;
      v20 = 32;
      HIWORD(v53) = a4;
      v12 = dword_CB53C;
    }
    while ( v12 )
    {
      if ( *(unsigned __int16 *)(v12 + 10) == a4 )
      {
        result = (void *)memcmp((const void *)(v12 + 12), &s2, v20);
        if ( !result )
          break;
      }
      v12 = *(_DWORD *)v12;
    }
    switch ( (unsigned int)v6 )
    {
      case 1u:
        if ( v12 )
        {
          v27 = *(_WORD *)(v12 + 8);
          if ( (a5 & 0x20) != 0 && (v27 & 0x20) == 0 )
          {
            result = (void *)sub_2C978();
            v27 = *(_WORD *)(v12 + 8);
          }
          *(_WORD *)(v12 + 8) = v27 | a5;
          return result;
        }
        if ( v19 )
        {
          v29 = (int *)dword_7FFCC;
          if ( dword_7FFCC )
          {
            dword_7FFCC = *(_DWORD *)dword_7FFCC;
            *v29 = 0;
          }
          else
          {
            v29 = (int *)sub_4F524(968);
            memset(v29, 0, 0x3C8u);
            v47 = v29 + 231;
            v48 = dword_7FFCC;
            while ( 1 )
            {
              *v47 = v48;
              v48 = (int)v47;
              if ( v47 - 11 == v29 )
                break;
              v47 -= 11;
            }
            dword_7FFCC = (int)v47;
          }
          v30 = &v51;
          v31 = v29;
          do
          {
            v32 = v30;
            v30 += 4;
            v33 = v32[1];
            v34 = v32[2];
            v35 = v32[3];
            *v31 = *v32;
            v31[1] = v33;
            v31[2] = v34;
            v31[3] = v35;
            v31 += 4;
          }
          while ( v32 + 4 != (int *)&v59 );
          v36 = &dword_CB53C;
          result = (void *)*v30;
          v37 = v30[1];
          v38 = v30[2];
          *v31 = *v30;
          v31[1] = v37;
          v31[2] = v38;
        }
        else
        {
          v29 = (int *)dword_7FFD0;
          if ( dword_7FFD0 )
          {
            dword_7FFD0 = *(_DWORD *)dword_7FFD0;
            *v29 = 0;
          }
          else
          {
            v29 = (int *)sub_4F524(1000);
            memset(v29, 0, 0x3E8u);
            v49 = v29 + 245;
            v50 = dword_7FFD0;
            while ( 1 )
            {
              *v49 = v50;
              v50 = (int)v49;
              if ( v49 - 5 == v29 )
                break;
              v49 -= 5;
            }
            dword_7FFD0 = (int)v49;
          }
          v36 = &dword_CB538;
          v44 = v52;
          v45 = v53;
          v46 = s2;
          *v29 = v51;
          v29[1] = v44;
          v29[2] = v45;
          v29[3] = v46;
          result = (void *)v55;
          v29[4] = v55;
        }
        v39 = *v36;
        if ( !*v36 )
          goto LABEL_63;
        while ( 2 )
        {
          if ( v19 )
          {
            result = (void *)memcmp(v29 + 3, (const void *)(v39 + 12), 0x10u);
            if ( (int)result > 0 )
            {
LABEL_63:
              *v29 = v39;
              *v36 = (int)v29;
              goto LABEL_64;
            }
            if ( result )
              goto LABEL_71;
            result = (void *)memcmp(v29 + 7, (const void *)(v39 + 28), 0x10u);
            if ( (int)result > 0 )
              goto LABEL_63;
            if ( result )
              goto LABEL_71;
          }
          else
          {
            v40 = v29[3];
            v41 = *(_DWORD *)(v39 + 12);
            if ( v40 > v41 )
              goto LABEL_63;
            if ( v40 < v41 )
              goto LABEL_71;
            v42 = v29[4];
            v43 = *(_DWORD *)(v39 + 16);
            if ( v42 > v43 )
              goto LABEL_63;
            if ( v42 < v43 )
            {
LABEL_71:
              v36 = (int *)v39;
              if ( *(_DWORD *)v39 )
              {
                v39 = *(_DWORD *)v39;
                continue;
              }
              *v29 = 0;
              *(_DWORD *)v39 = v29;
LABEL_64:
              ++dword_7FFBC;
              if ( (a5 & 0x20) != 0 )
                return (void *)sub_2C978();
              return result;
            }
          }
          break;
        }
        if ( *((unsigned __int16 *)v29 + 5) > (unsigned int)*(unsigned __int16 *)(v39 + 10) )
          goto LABEL_63;
        goto LABEL_71;
      case 2u:
        if ( v12 )
        {
          v26 = *(_WORD *)(v12 + 8);
          if ( (v26 & 0x20) != 0 && (a5 & 0x20) != 0 )
          {
            result = sub_2C9A8();
            v26 = *(_WORD *)(v12 + 8);
          }
          *(_WORD *)(v12 + 8) = v26 & ~a5;
        }
        return result;
      case 3u:
      case 4u:
        if ( !v12
          || v6 != (void *)4 && (*(_WORD *)(v12 + 10) & 0x1000) != 0
          || (int *)v12 == &dword_7FF64
          || (int *)v12 == &dword_7FF90 )
        {
          return result;
        }
        v21 = *(unsigned __int16 *)(v12 + 8);
        --dword_7FFBC;
        if ( v21 )
          sub_2C9A8();
        v22 = &dword_CB538;
        if ( v19 )
          v22 = &dword_CB53C;
        v23 = (int *)*v22;
        if ( v12 == *v22 )
        {
          v24 = (int *)v12;
        }
        else
        {
          if ( !v23 || (v24 = (int *)*v23) == 0 )
LABEL_53:
            off_7C9FC("ntp_restrict.c", 228, 2, "unlinked == res");
          while ( v24 != (int *)v12 )
          {
            v23 = v24;
            if ( v24 )
            {
              v24 = (int *)*v24;
              if ( v24 )
                continue;
            }
            goto LABEL_53;
          }
          v22 = v23;
        }
        *v22 = *v24;
        *v24 = 0;
        if ( v19 )
        {
          result = memset((void *)v12, 0, 0x2Cu);
          v25 = &dword_7FFCC;
        }
        else
        {
          result = memset((void *)v12, 0, 0x14u);
          v25 = &dword_7FFD0;
        }
        *(_DWORD *)v12 = *v25;
        *v25 = v12;
        return result;
      default:
        off_7C9FC("ntp_restrict.c", 595, 2, "0");
        return result;
    }
  }
  if ( a3 )
    off_7C9FC("ntp_restrict.c", 490, 0, "((void *)0) == resmask");
  if ( v6 != (void *)1 )
    off_7C9FC("ntp_restrict.c", 491, 0, "1 == op");
  word_7FFD4 = a5;
  word_7FFD6 = a4;
  dword_7FFD8 = 1;
  return result;
}
