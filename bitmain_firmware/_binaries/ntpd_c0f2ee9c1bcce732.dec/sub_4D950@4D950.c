int __fastcall sub_4D950(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r3
  unsigned int v7; // r1
  int v8; // r0
  int v9; // r4
  int v10; // r2
  unsigned int v11; // r1
  int v12; // r10
  int v13; // r3
  int *v15; // r0
  char *v16; // r0
  int *v17; // r0
  char *v18; // r0
  int *v19; // r0
  char *v20; // r0
  int *v21; // r0
  char *v22; // r0
  int v23; // [sp+4h] [bp-4h] BYREF

  v5 = 100 * a1 / 255;
  v23 = v5;
  if ( dword_7CF4C > 1 )
  {
    printf("audio_gain: gain %d/%d\n", a1, 100 * a1 / 255);
    v6 = v23;
  }
  else
  {
    v6 = 100 * a1 / 255;
  }
  v23 = v6 | (v5 << 8);
  if ( byte_CB598 )
  {
    v8 = ioctl(dword_C9AE8, dword_7BD58, &v23);
    v9 = v8;
  }
  else
  {
    if ( a3 == 2 )
      LOWORD(v7) = 19718;
    else
      LOWORD(v7) = 19719;
    HIWORD(v7) = -16380;
    v8 = ioctl(dword_C9AE8, v7, &v23);
    v9 = v8;
  }
  if ( v9 == -1 )
  {
    v15 = _errno_location();
    v16 = strerror(*v15);
    printf("audio_gain: agc write: %s\n", v16);
    return v9;
  }
  if ( dword_7BD60 != a2 )
  {
    v23 = 100 * a2 / 255;
    if ( dword_7CF4C > 1 )
    {
      v8 = printf("audio_gain: mongain %d/%d\n", a2, 100 * a2 / 255);
      v10 = v23;
    }
    else
    {
      v10 = 100 * a2 / 255;
    }
    v23 = v10 | ((100 * a2 / 255) << 8);
    if ( dest )
    {
      v8 = dword_C9AE8;
      v10 = (int)&v23;
      v11 = dword_7BD5C;
    }
    else
    {
      v11 = 19712;
    }
    if ( !dest )
    {
      v8 = dword_C9AE8;
      HIWORD(v11) = -16380;
      v10 = (int)&v23;
    }
    v9 = ioctl(v8, v11, v10);
    if ( v9 == -1 )
    {
      v19 = _errno_location();
      v20 = strerror(*v19);
      printf("audio_gain: mongain write: %s\n", v20);
      return v9;
    }
    dword_7BD60 = a2;
  }
  if ( dword_7BD64 != a3 )
  {
    if ( dword_7CF4C > 1 )
      printf("audio_gain: port %d\n", a3);
    v12 = dword_C9AE8;
    if ( a3 == 2 )
      v13 = 64;
    else
      v13 = 128;
    v23 = v13;
    v9 = ioctl(dword_C9AE8, 0xC0044DFF, &v23);
    if ( v9 == -1 )
    {
      v21 = _errno_location();
      v22 = strerror(*v21);
      printf("SOUND_MIXER_WRITE_RECSRC: %s\n", v22);
    }
    else
    {
      if ( dword_7CF4C > 1 )
      {
        if ( ioctl(v12, 0x80044DFF, &v23) == -1 )
        {
          v17 = _errno_location();
          v18 = strerror(*v17);
          printf("SOUND_MIXER_WRITE_RECSRC: %s\n", v18);
        }
        else
        {
          printf("audio_gain: recsrc is %d\n", v23);
        }
      }
      dword_7BD64 = a3;
    }
  }
  return v9;
}
