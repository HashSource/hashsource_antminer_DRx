_DWORD *__fastcall sub_15730(
        int *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14,
        int a15,
        int a16,
        int a17,
        char buf,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30)
{
  unsigned int v30; // r1
  int v31; // r4
  _DWORD *result; // r0
  _DWORD *v33; // r11
  int v34; // r8
  int v35; // r1
  _DWORD *v36; // r7
  size_t v37; // r2
  _DWORD *v38; // r9
  int v39; // r2
  int v40; // r0
  unsigned int v41; // r1
  int (__fastcall *v42)(_DWORD *); // r2
  int v43; // r12
  int v44; // r3
  int v45; // r2
  bool v46; // zf
  _DWORD *v47; // r7
  int v48; // r6
  int i; // r8
  int j; // r5
  int v51; // r3
  int v52; // r1
  int v53; // r5
  int v54; // r4
  int v55; // r2
  int v56; // r1
  int v57; // r3
  int v58; // r12
  char v59; // r0
  char v60; // r0
  char *v61; // r12
  int v62; // r4
  int v63; // [sp+Ch] [bp-484h] BYREF
  struct timeval timeout; // [sp+10h] [bp-480h] BYREF
  int v65; // [sp+18h] [bp-478h]
  unsigned int v66; // [sp+1Ch] [bp-474h]
  int v67; // [sp+20h] [bp-470h]
  unsigned int v68; // [sp+24h] [bp-46Ch]
  fd_set dest; // [sp+28h] [bp-468h] BYREF
  char v70[1000]; // [sp+A8h] [bp-3E8h] BYREF
  _DWORD var4[2]; // [sp+490h] [bp+0h] BYREF

  v30 = a1[1];
  v65 = *a1;
  v66 = v30;
  ++dword_CA638;
  memcpy(&dest, dword_CA584, sizeof(dest));
  v31 = 0;
  timeout.tv_sec = 0;
  timeout.tv_usec = 0;
  result = (_DWORD *)select(dword_CA604 + 1, &dest, 0, 0, &timeout);
  if ( (int)result < 0 )
  {
    result = _errno_location();
    v53 = *result;
    if ( *result != 4 )
    {
      v54 = dword_CA604 >= 255 ? 255 : dword_CA604;
      v55 = dword_CA604 + 1;
      if ( v54 < 0 )
      {
        v61 = &byte_7CE44;
      }
      else
      {
        v56 = 511555;
        v57 = v54;
        do
        {
          v58 = v57 >> 5;
          v59 = v57-- & 0x1F;
          if ( ((dword_CA584[v58] >> v59) & 1) != 0 )
            v60 = 35;
          else
            v60 = 45;
          *(_BYTE *)++v56 = v60;
        }
        while ( v57 != -1 );
        v61 = &byte_7CE45[v54];
      }
      v62 = 0;
      *v61 = 0;
      result = (_DWORD *)sub_4FE78(3, "select(%d, %s, 0L, 0L, &0.0) error: %m", v55, &byte_7CE44);
      if ( v53 == 9 )
      {
        result = memcpy(&dest, dword_CA584, sizeof(dest));
        if ( dword_CA604 >= 0 )
        {
          do
          {
            result = var4;
            if ( ((dest.__fds_bits[v62 >> 5] >> (v62 & 0x1F)) & 1) != 0 )
            {
              result = (_DWORD *)read(v62, &v63, 0);
              if ( result == (_DWORD *)-1 )
                result = (_DWORD *)sub_4FE78(3, "Bad file descriptor %d", v62);
            }
            ++v62;
          }
          while ( dword_CA604 >= v62 );
        }
      }
    }
    return result;
  }
  if ( !result )
    return result;
  v33 = (_DWORD *)dword_7CF44;
  ++dword_CA63C;
  if ( !dword_7CF44 )
  {
    v31 = 0;
    goto LABEL_29;
  }
  do
  {
    while ( 1 )
    {
      v34 = v33[5];
      v35 = v34 + 31;
      if ( v34 >= 0 )
        v35 = v33[5];
      result = (_DWORD *)(((_BYTE)v34 + ((unsigned int)(v34 >> 31) >> 27)) & 0x1F);
      if ( ((dest.__fds_bits[v35 >> 5] >> (v34 % 32)) & 1) != 0 )
        break;
LABEL_6:
      v33 = (_DWORD *)*v33;
      if ( !v33 )
        goto LABEL_29;
    }
    while ( 1 )
    {
      ++v31;
      v67 = v65;
      v68 = v66;
      v36 = (_DWORD *)sub_50A8C();
      if ( v36 )
        break;
      result = (_DWORD *)read(v34, v70, 0x3E8u);
      ++dword_CA620;
      v38 = result;
LABEL_18:
      if ( (int)v38 <= 0 )
        goto LABEL_6;
    }
    if ( (unsigned int)(v33[4] - 1) > 0x3E7 )
      v37 = 1000;
    else
      v37 = v33[4];
    v38 = (_DWORD *)read(v34, v36 + 23, v37);
    if ( (int)v38 >= 0 )
    {
      v39 = v33[3];
      v40 = v67;
      v41 = v68;
      v36[22] = v38;
      v36[2] = v39;
      v42 = (int (__fastcall *)(_DWORD *))v33[2];
      v43 = v33[1];
      v36[19] = v40;
      v36[20] = v41;
      v36[16] = 0;
      v36[17] = v34;
      v36[21] = v43;
      if ( v42 && !v42(v36) )
      {
        result = (_DWORD *)sub_509C4(v36);
      }
      else
      {
        result = (_DWORD *)sub_50A30(v36);
        v44 = dword_CA640;
        ++v33[6];
        dword_CA640 = v44 + 1;
      }
      goto LABEL_18;
    }
    v45 = *_errno_location();
    v46 = v45 == 11;
    if ( v45 != 11 )
      v46 = v45 == 4;
    if ( !v46 )
      sub_4FE78(3, "clock read fd %d: %m", v34);
    result = (_DWORD *)sub_509C4(v36);
    v33 = (_DWORD *)*v33;
  }
  while ( v33 );
LABEL_29:
  v47 = (_DWORD *)dword_CA654;
  if ( dword_CA654 )
  {
    do
    {
      for ( i = 0; i != 2; ++i )
      {
        if ( i )
        {
          if ( (v47[35] & 0x20) == 0 )
            break;
          v48 = v47[3];
        }
        else
        {
          v48 = v47[2];
        }
        if ( v48 >= 0 )
        {
          result = var4;
          if ( ((dest.__fds_bits[v48 >> 5] >> (v48 & 0x1F)) & 1) != 0 )
          {
            do
            {
              ++v31;
              result = (_DWORD *)sub_12900(v48, (int)v47, v65, v66);
            }
            while ( (int)result > 0 );
          }
        }
      }
      v47 = (_DWORD *)*v47;
    }
    while ( v47 );
  }
  for ( j = dword_CA618; j; j = *(_DWORD *)j )
  {
    v51 = *(_DWORD *)(j + 4);
    v52 = v51 + 31;
    if ( v51 >= 0 )
      v52 = *(_DWORD *)(j + 4);
    if ( ((dest.__fds_bits[v52 >> 5] >> (v51 % 32)) & 1) != 0 )
    {
      ++v31;
      result = (_DWORD *)(*(int (__fastcall **)(int))(j + 12))(j);
    }
  }
  if ( !v31 )
  {
    if ( dword_7CF4C )
      return (_DWORD *)sub_4FE78(7, "input_handler: select() returned 0");
  }
  return result;
}
