int __fastcall sub_32ACC(unsigned int *a1, int a2, int a3, int a4)
{
  int v5; // r2
  const char *v6; // r7
  int v8; // r6
  unsigned int v9; // r2
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
  char **v25; // r0
  _BOOL4 v26; // r3
  int v28; // [sp+Ch] [bp-4h] BYREF

  v5 = *(_DWORD *)(a3 + 244);
  v6 = "None";
  v8 = a4;
  v28 = a2;
  if ( v5 )
  {
    v9 = *(_DWORD *)(a3 + 248);
    if ( v9 > 8 )
      v6 = (const char *)15876;
    else
      a4 = 12916;
    if ( v9 > 8 )
      HIWORD(v6) = 5;
    else
      HIWORD(a4) = 5;
    if ( v9 <= 8 )
      v6 = *(const char **)(a4 + 4 * v9 + 112);
  }
  v10 = sub_2E418(0, "NOTIFY", 6, (const char *)&v28, 0);
  v11 = sub_2E418(v10, "Name", 1, *(const char **)(*(_DWORD *)(a3 + 4) + 8), 0);
  v12 = sub_2E418(v11, "ID", 6, (const char *)(a3 + 8), 0);
  v13 = sub_2E418(v12, "Last Well", 16, (const char *)(a3 + 240), 0);
  v14 = sub_2E418(v13, "Last Not Well", 16, (const char *)(a3 + 244), 0);
  v15 = sub_2E418(v14, "Reason Not Well", 1, v6, 0);
  v16 = sub_2E418(v15, "*Thread Fail Init", 6, (const char *)(a3 + 252), 0);
  v17 = sub_2E418(v16, "*Thread Zero Hash", 6, (const char *)(a3 + 256), 0);
  v18 = sub_2E418(v17, "*Thread Fail Queue", 6, (const char *)(a3 + 260), 0);
  v19 = sub_2E418(v18, "*Dev Sick Idle 60s", 6, (const char *)(a3 + 264), 0);
  v20 = sub_2E418(v19, "*Dev Dead Idle 600s", 6, (const char *)(a3 + 268), 0);
  v21 = sub_2E418(v20, "*Dev Nostart", 6, (const char *)(a3 + 272), 0);
  v22 = sub_2E418(v21, "*Dev Over Heat", 6, (const char *)(a3 + 276), 0);
  v23 = sub_2E418(v22, "*Dev Thermal Cutoff", 6, (const char *)(a3 + 280), 0);
  v24 = sub_2E418(v23, "*Dev Comms Error", 6, (const char *)(a3 + 284), 0);
  v25 = (char **)sub_2E418(v24, "*Dev Throttle", 6, (const char *)(a3 + 288), 0);
  v26 = v8;
  if ( v8 )
    v26 = v28 > 0;
  return sub_2F9C4(a1, v25, v8, v26);
}
