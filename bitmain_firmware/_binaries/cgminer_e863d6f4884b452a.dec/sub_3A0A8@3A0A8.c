int __fastcall sub_3A0A8(int a1)
{
  FILE *v1; // r0
  FILE *v2; // r5
  _BYTE *v3; // r4
  __int16 v4; // r0
  int v5; // r4
  int *v7; // r3
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int j; // r4
  int i; // [sp+8h] [bp-1BACh]
  char v15[4]; // [sp+10h] [bp-1BA4h] BYREF
  char v16; // [sp+14h] [bp-1BA0h]
  int v17; // [sp+18h] [bp-1B9Ch] BYREF
  int v18; // [sp+1Ch] [bp-1B98h]
  int v19; // [sp+20h] [bp-1B94h]
  int v20; // [sp+24h] [bp-1B90h]
  char v21[2048]; // [sp+28h] [bp-1B8Ch] BYREF
  _BYTE s[5000]; // [sp+828h] [bp-138Ch] BYREF

  memset(s, 0, sizeof(s));
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v17 = 0;
  *(_DWORD *)v15 = 0;
  v16 = 0;
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    strcpy(v21, "PIC1704_update_pic_app_program_new");
    sub_343C4(5, v21, 0);
  }
  v1 = fopen("/sbin/pic.txt", "r");
  v2 = v1;
  if ( v1 )
  {
    fseek(v1, 0, 0);
    memset(s, 0, sizeof(s));
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(v21, 0x800u, "%s: pic_flash_length = %d\n", "PIC1704_update_pic_app_program_new", 2432);
      sub_343C4(5, v21, 0);
    }
    v3 = s;
    do
    {
      v3 += 2;
      fgets(v15, 1023, v2);
      v4 = strtoul(v15, 0, 16);
      *(v3 - 1) = v4;
      *(v3 - 2) = HIBYTE(v4);
    }
    while ( v3 != &s[4864] );
    fclose(v2);
    v5 = sub_38D8C(a1);
    if ( !v5 )
      goto LABEL_11;
    if ( sub_3A034(a1) )
    {
      v5 = sub_3837C(a1, 6, 0);
      if ( !v5 )
      {
        if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
          return 0;
        snprintf(v21, 0x800u, "%s: set flash pointer error!\n\n", "PIC1704_update_pic_app_program_new");
LABEL_18:
        sub_343C4(3, v21, 0);
        return v5;
      }
      for ( i = 0; i != 304; ++i )
      {
        v7 = (int *)&s[16 * i];
        v8 = *v7;
        v9 = v7[1];
        v10 = v7[2];
        v11 = v7[3];
        v17 = v8;
        v18 = v9;
        v19 = v10;
        v20 = v11;
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
        {
          snprintf(v21, 0x800u, "send pic program time: %d", i);
          sub_343C4(5, v21, 0);
        }
        for ( j = 0; j != 16; ++j )
        {
          if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
          {
            snprintf(v21, 0x800u, "buf[%d] = 0x%02x", j, *((unsigned __int8 *)&v17 + j));
            sub_343C4(7, v21, 0);
          }
        }
        sub_38490(a1, (int)&v17);
        sub_38B5C(a1);
      }
      v5 = sub_38D8C(a1);
      if ( v5 )
        return 1;
LABEL_11:
      if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
        return 0;
      snprintf(v21, 0x800u, "%s: reset pic error!\n\n", "PIC1704_update_pic_app_program_new");
      goto LABEL_18;
    }
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return 0;
    snprintf(v21, 0x800u, "%s: erase flash error!\n\n", "PIC1704_update_pic_app_program_new");
    sub_343C4(3, v21, 0);
    return 0;
  }
  else
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
      return -1;
    snprintf(v21, 0x800u, "%s: open pic16f1704_app_new.txt failed\n", "PIC1704_update_pic_app_program_new");
    sub_343C4(3, v21, 0);
    return -1;
  }
}
