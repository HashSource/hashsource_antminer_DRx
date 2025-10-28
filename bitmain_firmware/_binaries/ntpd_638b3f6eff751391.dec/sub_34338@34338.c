int __fastcall sub_34338(int a1, int a2)
{
  int *v3; // r4
  void *v4; // r6
  int v5; // r0
  int v6; // r0
  int result; // r0
  int v8; // [sp+4h] [bp-4h] BYREF

  if ( a2 )
  {
    v3 = *(int **)(a2 + 60);
    if ( v3 )
    {
      v4 = (void *)v3[7];
      if ( v4 )
      {
        v5 = v3[5];
        if ( v5 != -1 )
        {
          if ( ioctl(v5, 0x5415u, &v8) == -1 )
            sub_4FE78(2, "NeoClock4X(%d): can't query RTS/DTR state: %m", a1);
          v6 = v3[5];
          v8 &= 0xFFFFFFF9;
          if ( ioctl(v6, 0x5418u, &v8) == -1 )
            sub_4FE78(2, "NeoClock4X(%d): can't set RTS/DTR to power neoclock4x: %m", a1);
          sub_15FF4(v3);
        }
        free(v4);
        v3[7] = 0;
      }
    }
  }
  result = sub_4FE78(3, "NeoClock4X(%d): shutdown", a1);
  if ( (dword_7BE6C & 0x100) != 0 )
    return sub_4FE78(6, "NeoClock4X(%d): receiver shutdown done", a1);
  return result;
}
