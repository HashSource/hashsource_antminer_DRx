int __fastcall sub_36104(unsigned int *a1, int a2, int a3, int a4)
{
  int v5; // r2
  unsigned int v8; // r3
  const char *v9; // r7
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r0
  _BOOL4 v26; // r3
  char v28[8]; // [sp+4h] [bp-8h] BYREF

  v5 = *(_DWORD *)(a3 + 244);
  *(_DWORD *)v28 = a2;
  if ( v5 )
  {
    v8 = *(_DWORD *)(a3 + 248);
    if ( v8 <= 8 )
      v9 = *(const char **)&aEscapeString[4 * v8 + 112];
    else
      v9 = "Unknown reason - code bug";
  }
  else
  {
    v9 = "None";
  }
  v10 = sub_32DB0(0, "NOTIFY", v28, 0);
  v11 = sub_32CFC(v10, "Name", *(const char **)(*(_DWORD *)(a3 + 4) + 8), 0);
  v12 = sub_32DB0(v11, "ID", (const char *)(a3 + 8), 0);
  v13 = sub_32F18(v12, "Last Well", (const char *)(a3 + 240), 0);
  v14 = sub_32F18(v13, "Last Not Well", (const char *)(a3 + 244), 0);
  v15 = sub_32CFC(v14, "Reason Not Well", v9, 0);
  v16 = sub_32DB0(v15, "*Thread Fail Init", (const char *)(a3 + 252), 0);
  v17 = sub_32DB0(v16, "*Thread Zero Hash", (const char *)(a3 + 256), 0);
  v18 = sub_32DB0(v17, "*Thread Fail Queue", (const char *)(a3 + 260), 0);
  v19 = sub_32DB0(v18, "*Dev Sick Idle 60s", (const char *)(a3 + 264), 0);
  v20 = sub_32DB0(v19, "*Dev Dead Idle 600s", (const char *)(a3 + 268), 0);
  v21 = sub_32DB0(v20, "*Dev Nostart", (const char *)(a3 + 272), 0);
  v22 = sub_32DB0(v21, "*Dev Over Heat", (const char *)(a3 + 276), 0);
  v23 = sub_32DB0(v22, "*Dev Thermal Cutoff", (const char *)(a3 + 280), 0);
  v24 = sub_32DB0(v23, "*Dev Comms Error", (const char *)(a3 + 284), 0);
  v25 = sub_32DB0(v24, "*Dev Throttle", (const char *)(a3 + 288), 0);
  if ( a4 )
    v26 = *(_DWORD *)v28 > 0;
  else
    v26 = 0;
  return sub_32418(a1, (int)v25, a4, v26);
}
