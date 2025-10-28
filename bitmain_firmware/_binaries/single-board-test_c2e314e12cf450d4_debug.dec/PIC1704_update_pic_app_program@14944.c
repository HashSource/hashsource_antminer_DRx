int __fastcall PIC1704_update_pic_app_program(char a1, char a2)
{
  int v2; // r3
  int *v3; // r3
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v11; // [sp+60h] [bp+60h] BYREF
  int v12; // [sp+64h] [bp+64h]
  int v13; // [sp+68h] [bp+68h]
  int v14; // [sp+6Ch] [bp+6Ch]
  char v15[8]; // [sp+70h] [bp+70h] BYREF
  _BYTE v16[5000]; // [sp+78h] [bp+78h] BYREF
  FILE *v17; // [sp+1400h] [bp+1400h]
  int v18; // [sp+1404h] [bp+1404h]
  unsigned int v19; // [sp+1408h] [bp+1408h]
  unsigned __int8 v20; // [sp+140Ch] [bp+140Ch]
  unsigned __int8 v21; // [sp+140Dh] [bp+140Dh]
  unsigned __int8 v22; // [sp+140Eh] [bp+140Eh]
  unsigned __int8 v23; // [sp+140Fh] [bp+140Fh]
  unsigned int v24; // [sp+1410h] [bp+1410h]
  int v25; // [sp+1414h] [bp+1414h]
  unsigned int j; // [sp+1418h] [bp+1418h]
  unsigned int i; // [sp+141Ch] [bp+141Ch]

  memset(v16, 0, sizeof(v16));
  v25 = 0;
  i = 0;
  v15[0] = 0;
  v15[1] = 0;
  v15[2] = 0;
  v15[3] = 0;
  v15[4] = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v24 = 0;
  v23 = 6;
  v22 = 0;
  v21 = 15;
  v20 = 127;
  v19 = 0;
  v18 = 0;
  puts("\n--- update pic program");
  v17 = fopen("/mnt/card/pic16f1704_app.txt", "r");
  if ( v17 )
  {
    fseek(v17, 0, 0);
    memset(v16, 0, sizeof(v16));
    v19 = (v21 << 8) + v20 - ((v23 << 8) + v22) + 1;
    printf("pic_flash_length = %d\n", v19);
    for ( i = 0; i < v19; ++i )
    {
      fgets(v15, 1023, v17);
      v24 = strtoul(v15, 0, 16);
      v16[2 * i] = BYTE1(v24);
      v16[2 * i + 1] = v24;
    }
    fclose(v17);
    v18 = reset_PIC16F1704_pic(a1, a2);
    if ( v18 )
    {
      v18 = erase_PIC16F1704_app_flash(a1, a2);
      if ( v18 )
      {
        v18 = set_PIC16F1704_flash_point32_ter(a1, a2, 6u, 0);
        if ( v18 )
        {
          for ( i = 0; 4 * (v19 >> 5) > i; ++i )
          {
            v3 = (int *)&v16[16 * i];
            v4 = *v3;
            v5 = v3[1];
            v6 = v3[2];
            v7 = v3[3];
            v11 = v4;
            v12 = v5;
            v13 = v6;
            v14 = v7;
            printf("send pic program time: %d\n", i);
            for ( j = 0; j <= 0xF; ++j )
              printf("buf[%d] = 0x%02x\n", j, *((unsigned __int8 *)&v11 + j));
            putchar(10);
            send_data_to_PIC16F1704(a1, a2, (int)&v11);
            write_data_int32_to_PIC16F1704_flash(a1, a2);
          }
          v18 = reset_PIC16F1704_pic(a1, a2);
          if ( v18 )
          {
            return 1;
          }
          else
          {
            printf("!!! %s: reset pic error!\n\n", "PIC1704_update_pic_app_program");
            return 0;
          }
        }
        else
        {
          printf("!!! %s: set flash point32_ter error!\n\n", "PIC1704_update_pic_app_program");
          return 0;
        }
      }
      else
      {
        printf("!!! %s: erase flash error!\n\n", "PIC1704_update_pic_app_program");
        return 0;
      }
    }
    else
    {
      printf("!!! %s: reset pic error!\n\n", "PIC1704_update_pic_app_program");
      return 0;
    }
  }
  else
  {
    printf("\n%s: open pic16f1704_app.txt failed\n", "PIC1704_update_pic_app_program");
  }
  return v2;
}
