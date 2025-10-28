int __fastcall sub_F854(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r6
  _BYTE v7[4095]; // [sp+0h] [bp-1000h] BYREF
  int varg_r0; // [sp+1010h] [bp+10h] BYREF
  int varg_r1; // [sp+1014h] [bp+14h]
  int varg_r2; // [sp+1018h] [bp+18h]
  int varg_r3; // [sp+101Ch] [bp+1Ch]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  if ( HIBYTE(a1) == 48 )
  {
    if ( (unsigned __int8)varg_r1 == 49 )
    {
      if ( !BYTE1(varg_r1) )
      {
        sub_EDFC("10");
        goto LABEL_3;
      }
    }
    else if ( (unsigned __int8)varg_r1 == 54 )
    {
      v6 = BYTE1(varg_r1);
      if ( !BYTE1(varg_r1) )
      {
        memcpy(v7, &a5, sizeof(v7));
        sub_F410(varg_r0, varg_r1, varg_r2, varg_r3);
        if ( sub_F4C0() != 1 )
        {
          sub_F69C("60", (int)"F");
          puts("restart cgminer FAILD ");
          return v6;
        }
        sub_F69C("60", (int)"S");
        puts("restart cgminer OK OK ");
        goto LABEL_3;
      }
    }
  }
  if ( !sub_F108((char *)&varg_r0 + 3) )
  {
    puts("after send_getstatus_res()");
    return 0;
  }
LABEL_3:
  memcpy(v7, &a5, sizeof(v7));
  sub_E7F4();
  return 1;
}
