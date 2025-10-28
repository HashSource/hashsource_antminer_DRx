int __fastcall sub_1B200(int a1, char *a2)
{
  char *v3; // r5
  int result; // r0
  char *v5; // r0
  char *v6; // r7
  char v7[2052]; // [sp+0h] [bp-804h] BYREF

  v3 = (char *)sub_2AA78(a2);
  result = sub_19DCC(a1, v3);
  if ( !result )
  {
    sub_48B74(v3, a1 + 172);
    result = strncmp(v3, "http://", 7u);
    if ( result )
    {
      result = strncmp(v3, "https://", 8u);
      if ( result )
      {
        v5 = (char *)malloc(0x100u);
        v6 = v5;
        if ( !v5 )
        {
          strcpy(v7, "Failed to malloc httpinput");
          sub_343C4(3, v7, 1);
          sub_1B070(1, 1);
        }
        strcpy(v5, "stratum+tcp://");
        strncat(v5, v3, 0xF2u);
        return sub_19DCC(a1, v6);
      }
    }
  }
  return result;
}
