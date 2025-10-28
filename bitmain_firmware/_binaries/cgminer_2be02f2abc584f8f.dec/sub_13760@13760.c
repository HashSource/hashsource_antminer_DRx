int __fastcall sub_13760(int a1, int a2)
{
  char *v3; // r5
  int result; // r0
  char *v5; // r0
  char *v6; // r6
  char v7[2048]; // [sp+0h] [bp-800h] BYREF

  v3 = (char *)sub_302CC(a2, a1);
  result = sub_11A64(a1, v3);
  if ( !result )
  {
    sub_58A4C(v3, a1 + 172);
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
          sub_3F1C0(3, v7, 1);
          sub_132C4(1);
        }
        strcpy(v5, "stratum+tcp://");
        strncat(v5, v3, 0xF2u);
        return sub_11A64(a1, v6);
      }
    }
  }
  return result;
}
