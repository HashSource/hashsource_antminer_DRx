int __fastcall sub_33604(unsigned int *a1, int a2, const char *a3, unsigned __int8 a4)
{
  unsigned int *v5; // r5
  char *v7; // r0
  int v8; // r2
  unsigned int v9; // r7
  int v10; // r3
  int v11; // r1
  unsigned __int8 v13; // [sp+18h] [bp+18h]

  v5 = a1;
  if ( a3 && *a3 )
  {
    v7 = strchr(a3, 44);
    v8 = (int)v7;
    if ( v7 )
    {
      *v7 = 0;
      v9 = strtol(v7 + 1, 0, 10);
      if ( v9 > 0x270F )
      {
        v13 = a4;
        a1 = v5;
        v8 = v9;
        v10 = (int)a3;
        v11 = 84;
      }
      else
      {
        if ( !strcasecmp(a3, "queue") )
        {
          dword_60074 = v9;
        }
        else if ( !strcasecmp(a3, "scantime") )
        {
          dword_60090 = v9;
        }
        else
        {
          if ( strcasecmp(a3, "expiry") )
          {
            v13 = a4;
            a1 = v5;
            v8 = 0;
            v10 = (int)a3;
            v11 = 83;
            return sub_32F3C(a1, v11, v8, v10, v13);
          }
          dword_60094 = v9;
        }
        v13 = a4;
        a1 = v5;
        v8 = v9;
        v10 = (int)a3;
        v11 = 82;
      }
    }
    else
    {
      v13 = a4;
      a1 = v5;
      v10 = (int)a3;
      v11 = 86;
    }
  }
  else
  {
    v8 = 0;
    v13 = a4;
    v10 = 0;
    v11 = 85;
  }
  return sub_32F3C(a1, v11, v8, v10, v13);
}
