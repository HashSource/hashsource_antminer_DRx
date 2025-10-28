int __fastcall sub_9D04(
        int a1,
        unsigned int a2,
        const char *a3,
        int a4,
        const char *a5,
        const char *a6,
        const char *a7)
{
  int v10; // r0
  int v11; // r1
  int v12; // r2
  const char *v13; // r3
  const char *v14; // r5
  const char *v15; // r6
  int v16; // r11
  const char *v17; // r9
  const char *v19; // [sp+54h] [bp-18h]
  const char *v20; // [sp+58h] [bp-14h]
  const char *v21; // [sp+5Ch] [bp-10h]
  int v22; // [sp+60h] [bp-Ch]
  int v23; // [sp+64h] [bp-8h]

  v10 = a2 & 7;
  v11 = (a2 >> 3) & 0x7F;
  if ( a3 )
  {
    v12 = 2048;
    v13 = "CODE_FILE=";
    v19 = "\n";
  }
  else
  {
    v12 = 0;
    v13 = "";
    v19 = "";
  }
  if ( !a4 )
  {
    v22 = 0;
    v14 = "";
    v20 = "";
    if ( a5 )
      goto LABEL_5;
LABEL_9:
    v23 = (int)a5;
    v15 = "";
    v21 = "";
    if ( a7 )
      goto LABEL_6;
LABEL_10:
    v16 = (int)a7;
    a6 = "";
    v17 = "";
    goto LABEL_7;
  }
  v22 = 1;
  v14 = "CODE_LINE=";
  v20 = "\n";
  if ( !a5 )
    goto LABEL_9;
LABEL_5:
  v23 = 2048;
  v21 = "\n";
  v15 = "CODE_FUNCTION=";
  if ( !a7 )
    goto LABEL_10;
LABEL_6:
  v16 = 2048;
  v17 = "\n";
LABEL_7:
  _snprintf_chk(
    a1,
    2048,
    1,
    -1,
    "PRIORITY=%i\nSYSLOG_FACILITY=%i\n%s%.*s%s%s%.*i%s%s%.*s%s%s%.*s%sSYSLOG_IDENTIFIER=%s\n",
    v10,
    v11,
    v13,
    v12,
    a3,
    v19,
    v14,
    v22,
    a4,
    v20,
    v15,
    v23,
    a5,
    v21,
    a6,
    v16,
    a7,
    v17,
    program_invocation_short_name);
  *(_BYTE *)(a1 + 2047) = 0;
  return 0;
}
