unsigned __int8 **__fastcall sub_3CBE0(int a1, int a2, int a3, int a4)
{
  const char *v7; // r5
  _DWORD *v8; // r0
  _DWORD *v9; // r0
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
  unsigned __int8 **v23; // r1
  _BOOL4 v24; // r3
  char v26[8]; // [sp+4h] [bp-8h] BYREF

  *(_DWORD *)v26 = a2;
  if ( *(_DWORD *)(a3 + 244) )
  {
    switch ( *(_DWORD *)(a3 + 248) )
    {
      case 0:
        v7 = "Thread failed to init";
        break;
      case 1:
        v7 = "Thread got zero hashes";
        break;
      case 2:
        v7 = "Thread failed to queue work";
        break;
      case 3:
        v7 = "Device idle for 60s";
        break;
      case 4:
        v7 = "Device dead - idle for 600s";
        break;
      case 5:
        v7 = "Device failed to start";
        break;
      case 6:
        v7 = "Device over heated";
        break;
      case 7:
        v7 = "Device reached thermal cutoff";
        break;
      case 8:
        v7 = "Device comms error";
        break;
      default:
        v7 = "Unknown reason - code bug";
        break;
    }
  }
  else
  {
    v7 = "None";
  }
  v8 = sub_39404(0, "NOTIFY", v26, 0);
  v9 = sub_39350(v8, "Name", *(const char **)(*(_DWORD *)(a3 + 4) + 8), 0);
  v10 = sub_39404(v9, "ID", (const char *)(a3 + 8), 0);
  v11 = sub_3956C(v10, "Last Well", (const char *)(a3 + 240), 0);
  v12 = sub_3956C(v11, "Last Not Well", (const char *)(a3 + 244), 0);
  v13 = sub_39350(v12, "Reason Not Well", v7, 0);
  v14 = sub_39404(v13, "*Thread Fail Init", (const char *)(a3 + 252), 0);
  v15 = sub_39404(v14, "*Thread Zero Hash", (const char *)(a3 + 256), 0);
  v16 = sub_39404(v15, "*Thread Fail Queue", (const char *)(a3 + 260), 0);
  v17 = sub_39404(v16, "*Dev Sick Idle 60s", (const char *)(a3 + 264), 0);
  v18 = sub_39404(v17, "*Dev Dead Idle 600s", (const char *)(a3 + 268), 0);
  v19 = sub_39404(v18, "*Dev Nostart", (const char *)(a3 + 272), 0);
  v20 = sub_39404(v19, "*Dev Over Heat", (const char *)(a3 + 276), 0);
  v21 = sub_39404(v20, "*Dev Thermal Cutoff", (const char *)(a3 + 280), 0);
  v22 = sub_39404(v21, "*Dev Comms Error", (const char *)(a3 + 284), 0);
  v23 = (unsigned __int8 **)sub_39404(v22, "*Dev Throttle", (const char *)(a3 + 288), 0);
  if ( a4 )
    v24 = *(_DWORD *)v26 > 0;
  else
    v24 = 0;
  return sub_38838(a1, v23, a4, v24);
}
