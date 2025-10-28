int stop_mining_base()
{
  int v0; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // t1
  int result; // r0
  int v7; // r0
  int v8; // r1
  const char *v9; // r0
  int v10; // [sp+4h] [bp-4h] BYREF

  v0 = 0;
  v10 = 0;
  all_created_runtime = get_all_created_runtime(&v10);
  if ( v10 <= 0 )
  {
LABEL_8:
    v7 = dev_ctrl(all_created_runtime);
    (*(void (__fastcall **)(char *))(v7 + 20))("l");
    usleep(0x2710u);
    return 0;
  }
  else
  {
    v2 = all_created_runtime;
    v3 = *all_created_runtime;
    if ( v3 )
    {
      while ( 1 )
      {
        result = (*(int (**)(void))(v3 + 24))();
        if ( result )
          break;
        v4 = dev_ctrl(0);
        (*(void (__fastcall **)(int))(v4 + 32))(v0++);
        all_created_runtime = (_DWORD *)usleep((__useconds_t)&stru_18698.st_size);
        if ( v10 <= v0 )
          goto LABEL_8;
        v5 = v2[1];
        ++v2;
        v3 = v5;
        if ( !v5 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      LOWORD(v8) = -8180;
      LOWORD(v9) = -27836;
      HIWORD(v8) = (unsigned int)"ng.submit\"}" >> 16;
      HIWORD(v9) = (unsigned int)"rate_real" >> 16;
      printf(v9, v8);
      return 3;
    }
  }
  return result;
}
