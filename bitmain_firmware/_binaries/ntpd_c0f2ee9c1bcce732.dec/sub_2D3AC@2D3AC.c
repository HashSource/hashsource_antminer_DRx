void sub_2D3AC()
{
  void (__fastcall *v0)(int, int *); // r0
  _DWORD *v1; // r7
  _DWORD *v2; // r4
  _DWORD *v3; // t1
  int (__fastcall *v4)(_DWORD *); // r2
  _DWORD *v5; // r5
  unsigned int v6; // r3
  int v7; // r2
  unsigned int v8; // r3
  unsigned int v9; // r3
  _DWORD *v10; // r5
  void (__fastcall *v11)(int, int *); // t1
  void (__fastcall *v12)(int, int *); // r4
  int *v13; // r3
  char *v14; // r2
  int *v15; // r2

  ++dword_CB548;
  v0 = (void (__fastcall *)(int, int *))sub_4CBA8(&dword_CB564);
  if ( dword_7FFDC > (unsigned int)dword_CB548 )
  {
    v1 = &unk_CB238;
    goto LABEL_3;
  }
  ++dword_7FFDC;
  sub_20730();
  v1 = &unk_CB238;
  v10 = &unk_CB238;
  do
  {
    v11 = (void (__fastcall *)(int, int *))v10[1];
    ++v10;
    v0 = v11;
    if ( v11 )
    {
      do
      {
        while ( 1 )
        {
          v12 = *(void (__fastcall **)(int, int *))v0;
          if ( (*((_DWORD *)v0 + 13) & 8) != 0 )
            break;
          v0 = *(void (__fastcall **)(int, int *))v0;
          if ( !v12 )
            goto LABEL_47;
        }
        sub_272D0((int)v0);
        v0 = v12;
      }
      while ( v12 );
    }
LABEL_47:
    ;
  }
  while ( v10 != (_DWORD *)&unk_CB438 );
  do
  {
LABEL_3:
    v3 = (_DWORD *)v1[1];
    ++v1;
    v2 = v3;
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = (int (__fastcall *)(_DWORD *))v2[132];
        v5 = (_DWORD *)*v2;
        v6 = dword_CB548;
        if ( v4 && v2[131] <= (unsigned int)dword_CB548 )
        {
          v0 = (void (__fastcall *)(int, int *))v4(v2);
          v6 = dword_CB548;
        }
        v7 = v2[128];
        if ( v7 > 0 )
          v2[128] = v7 - 1;
        if ( v2[130] > v6 )
          goto LABEL_6;
        if ( (v2[13] & 8) != 0 )
        {
          v0 = (void (__fastcall *)(int, int *))sub_27300((int)v2);
LABEL_6:
          v2 = v5;
          if ( !v5 )
            break;
        }
        else
        {
          v0 = (void (__fastcall *)(int, int *))sub_263E4((int)v2);
          v2 = v5;
          if ( !v5 )
            break;
        }
      }
    }
  }
  while ( v1 != (_DWORD *)&unk_CB438 );
  if ( dword_7A2B0 <= 15 && !dword_CB470 )
  {
    LOWORD(v13) = (unsigned __int8)dword_7A2B0;
    if ( byte_CB4B0 == 3 )
      byte_CB4B0 = dword_CB470;
    v14 = &byte_CB4FC;
    v0 = (void (__fastcall *)(int, int *))&dbl_CB4C8;
    byte_CB4FC = dword_7A2B0;
    if ( (unsigned __int8)dword_7A2B0 <= 1u )
      v14 = "LOOP";
    else
      LOWORD(v13) = 127;
    if ( (unsigned __int8)dword_7A2B0 <= 1u )
    {
      v13 = &dword_CB4E0;
      v15 = *(int **)v14;
    }
    else
    {
      HIWORD(v13) = 256;
      v15 = &dword_CB4E0;
    }
    if ( (unsigned __int8)dword_7A2B0 <= 1u )
      *v13 = (int)v15;
    else
      *v15 = (int)v13;
    dbl_CB4B8 = 0.0;
    dbl_CB4C8 = 0.0;
    dbl_CB498 = 0.0;
  }
  if ( dword_CB56C )
  {
    v8 = dword_CB56C - 1;
    dword_CB56C = v8;
    if ( v8 )
    {
      if ( v8 <= 0x1517F )
        byte_CB4B0 = 1;
      if ( dword_CB450 > 0 )
        dword_CABCC = dword_CB450 - 1;
    }
    else
    {
      dword_CABCC = dword_CB450;
      byte_CB4B0 = 0;
      if ( !dword_CABD8 || !dword_7A198 )
        sub_4CDE0(dword_CB450);
      v0 = (void (__fastcall *)(int, int *))sub_1D3D8(11, 0, 0);
    }
  }
  v9 = dword_CB548;
  if ( dword_7FFE4 <= (unsigned int)dword_CB548 )
  {
    dword_7FFE4 += 900;
    sub_207D8();
    v9 = dword_CB548;
  }
  if ( dword_7A4E8 )
  {
    v0 = (void (__fastcall *)(int, int *))dword_7FFE8;
    if ( v9 >= dword_7FFE8 )
    {
      dword_7FFE8 = v9 + dword_7A4E8;
      if ( dword_7CF4C > 1 )
        puts("timer: interface update");
      v0 = sub_14A04(0, 0);
      v9 = dword_CB548;
    }
  }
  if ( dword_7FFE0 <= v9 )
  {
    dword_7FFE0 += 3600;
    sub_2D8BC(v0);
    if ( dword_CABCC )
    {
      if ( dword_CB564 > (unsigned int)dword_CB4F0 )
        sub_1D3D8(15, 0, 0);
    }
  }
}
