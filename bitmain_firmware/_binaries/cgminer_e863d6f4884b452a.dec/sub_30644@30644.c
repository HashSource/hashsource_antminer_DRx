int __fastcall sub_30644(unsigned int *a1, int a2, char *s, unsigned __int8 a4, int a5)
{
  unsigned int *v6; // r5
  char *v8; // r0
  unsigned int v9; // r0
  int v10; // r7
  char *v11; // r3
  int v12; // r2
  int v13; // r1
  unsigned __int8 v15; // [sp+18h] [bp+18h]

  if ( s && *s )
  {
    v6 = a1;
    v8 = strchr(s, 44);
    if ( v8 )
    {
      *v8 = 0;
      v9 = strtol(v8 + 1, 0, 10);
      v10 = v9;
      if ( v9 > 0x270F )
      {
        v15 = a4;
        v11 = s;
        v12 = v9;
        v13 = 84;
        a1 = v6;
      }
      else
      {
        if ( !strcasecmp(s, "queue") )
        {
          dword_6CAA4 = v10;
        }
        else if ( !strcasecmp(s, "scantime") )
        {
          dword_6CA98 = v10;
        }
        else
        {
          if ( strcasecmp(s, "expiry") )
          {
            v15 = a4;
            v11 = s;
            v12 = 0;
            a1 = v6;
            v13 = 83;
            return sub_30214(a1, v13, v12, (int)v11, v15);
          }
          dword_6CA9C = v10;
        }
        v15 = a4;
        v11 = s;
        v12 = v10;
        a1 = v6;
        v13 = 82;
      }
    }
    else
    {
      v15 = a4;
      v11 = s;
      v12 = 0;
      v13 = 86;
      a1 = v6;
    }
  }
  else
  {
    v11 = 0;
    v15 = a4;
    v12 = 0;
    v13 = 85;
  }
  return sub_30214(a1, v13, v12, (int)v11, v15);
}
