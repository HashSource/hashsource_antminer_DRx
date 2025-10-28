int __fastcall sub_477A0(int a1)
{
  FILE *v2; // r0
  FILE *v3; // r5
  __int16 v5; // r0
  _BYTE *v6; // r4
  int i; // r10
  int *v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int j; // r4
  char v14[2040]; // [sp+8h] [bp-1BA4h] BYREF
  int v15; // [sp+808h] [bp-13A4h] BYREF
  int v16; // [sp+80Ch] [bp-13A0h]
  int v17; // [sp+810h] [bp-139Ch]
  int v18; // [sp+814h] [bp-1398h]
  char v19[8]; // [sp+818h] [bp-1394h] BYREF
  _BYTE s[5000]; // [sp+820h] [bp-138Ch] BYREF

  memset(s, 0, sizeof(s));
  v19[0] = 0;
  v19[1] = 0;
  v19[2] = 0;
  v19[3] = 0;
  v19[4] = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(v14, "PIC1704_update_pic_app_program_new");
    sub_3F178(5, v14, 0);
  }
  v2 = fopen("/sbin/pic.txt", "r");
  v3 = v2;
  if ( !v2 )
  {
    if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 2 )
      return -1;
    snprintf(v14, 0x800u, "%s: open pic16f1704_app_new.txt failed\n", "PIC1704_update_pic_app_program_new");
    sub_3F178(3, v14, 0);
    return -1;
  }
  fseek(v2, 0, 0);
  memset(s, 0, sizeof(s));
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(v14, 0x800u, "%s: pic_flash_length = %d\n", "PIC1704_update_pic_app_program_new", 2432);
    sub_3F178(5, v14, 0);
  }
  v6 = s;
  do
  {
    fgets(v19, 1023, v3);
    v5 = strtoul(v19, 0, 16);
    *v6 = HIBYTE(v5);
    v6[1] = v5;
    v6 += 2;
  }
  while ( v6 != &s[4864] );
  fclose(v3);
  if ( !sub_45A38(a1) )
  {
    if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 2 )
      return 0;
    goto LABEL_21;
  }
  if ( sub_476E4(a1) )
  {
    if ( sub_44A18(a1, 6, 0) )
    {
      for ( i = 0; i != 304; ++i )
      {
        v8 = (int *)&s[16 * i];
        v9 = *v8;
        v10 = v8[1];
        v11 = v8[2];
        v12 = v8[3];
        v15 = v9;
        v16 = v10;
        v17 = v11;
        v18 = v12;
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
        {
          snprintf(v14, 0x800u, "send pic program time: %d", i);
          sub_3F178(5, v14, 0);
        }
        for ( j = 0; j != 16; ++j )
        {
          if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
          {
            snprintf(v14, 0x800u, "buf[%d] = 0x%02x", j, *((unsigned __int8 *)&v15 + j));
            sub_3F178(7, v14, 0);
          }
        }
        sub_44BD8(a1, (int)&v15);
        sub_456A4(a1);
      }
      if ( sub_45A38(a1) )
        return 1;
      if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 2 )
        return 0;
LABEL_21:
      snprintf(v14, 0x800u, "%s: reset pic error!\n\n", "PIC1704_update_pic_app_program_new");
      sub_3F178(3, v14, 0);
      return 0;
    }
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
    {
      snprintf(v14, 0x800u, "%s: set flash pointer error!\n\n", "PIC1704_update_pic_app_program_new");
      sub_3F178(3, v14, 0);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
  {
    snprintf(v14, 0x800u, "%s: erase flash error!\n\n", "PIC1704_update_pic_app_program_new");
    sub_3F178(3, v14, 0);
    return 0;
  }
  else
  {
    return 0;
  }
}
