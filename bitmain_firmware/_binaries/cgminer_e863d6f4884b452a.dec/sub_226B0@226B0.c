void __noreturn sub_226B0()
{
  int v0; // r1
  int v1; // r5
  int v2; // r3
  int v3; // r0
  int v4; // r4
  int v5; // r6
  int v6; // r1
  int v7; // r3
  int v8; // r3
  int *v9; // r3
  int v10; // r1
  int v11; // t1
  int v12; // r4
  int v13; // r0
  int v14; // r5
  int v15; // r3
  int *v16; // r0
  int *v17; // r0
  int v18; // [sp+30h] [bp-814h] BYREF
  char v19[8]; // [sp+38h] [bp-80Ch] BYREF
  char s[2052]; // [sp+40h] [bp-804h] BYREF

  pthread_setcanceltype(1, 0);
  sub_2D764("Watchdog");
  sub_178A0();
  sub_2A69C(&dword_6DDD0);
LABEL_2:
  while ( 1 )
  {
    sleep(2u);
    sub_20B7C();
    sub_213C4(-1, v0, 0, 0);
    sub_2A69C(&v18);
    if ( byte_72F7C )
      goto LABEL_92;
    if ( byte_72EC0 || byte_72C04 )
    {
      if ( !sub_175A0() )
      {
        if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 3 )
        {
          if ( !byte_72EC0 )
            goto LABEL_86;
          goto LABEL_50;
        }
        snprintf(s, 0x800u, "Pausing execution as per stop time %02d:%02d scheduled", dword_72C10, dword_72C0C);
        sub_343C4(4, s, 0);
        if ( !byte_72EC0 )
        {
LABEL_86:
          strcpy(s, "Terminating execution as planned");
          sub_343C4(3, s, 1);
          sub_1B070(0, 1);
        }
        if ( byte_73320 || byte_6FA70 )
        {
LABEL_60:
          snprintf(s, 0x800u, "Will restart execution as scheduled at %02d:%02d", dword_72ECC, dword_72EC8);
          sub_343C4(4, s, 0);
        }
        else
        {
LABEL_50:
          if ( dword_6D35C > 3 )
            goto LABEL_60;
        }
        byte_72F7C = 1;
        if ( pthread_rwlock_rdlock(&stru_732CC) )
        {
          v16 = _errno_location();
          snprintf(
            s,
            0x800u,
            "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
            *v16,
            "cgminer.c",
            "watchdog_thread",
            10324);
          goto LABEL_88;
        }
        if ( dword_735B0 > 0 )
        {
          v9 = (int *)dword_732C8;
          v10 = dword_732C8 + 4 * dword_735B0;
          do
          {
            v11 = *v9++;
            *(_BYTE *)(v11 + 60) = 1;
          }
          while ( v9 != (int *)v10 );
        }
        if ( pthread_rwlock_unlock(&stru_732CC) )
        {
          v17 = _errno_location();
          snprintf(
            s,
            0x800u,
            "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v17,
            "cgminer.c",
            "watchdog_thread",
            10327);
LABEL_88:
          sub_343C4(3, s, 1);
          sub_1B070(1, 1);
        }
        off_6CB70();
        goto LABEL_6;
      }
      if ( byte_72F7C )
      {
LABEL_92:
        if ( !byte_72EC0 && !byte_72C04 || sub_175A0() )
          break;
      }
    }
LABEL_6:
    if ( dword_735E8 > 0 )
    {
      v1 = 0;
      while ( 1 )
      {
        v3 = sub_1CBB4(v1);
        v4 = v3;
        v5 = **(_DWORD **)(v3 + 152);
        if ( v5 )
        {
          (*(void (**)(void))(*(_DWORD *)(v3 + 4) + 32))();
          snprintf(v19, 8u, "%s %d", *(const char **)(*(_DWORD *)(v4 + 4) + 8), *(_DWORD *)(v4 + 8));
          if ( !*(_BYTE *)(v5 + 61) && *(_DWORD *)(v4 + 32) != 1 )
          {
            v6 = *(_DWORD *)(v4 + 96);
            v7 = v18 - *(_DWORD *)(v5 + 44);
            if ( !v6 )
            {
              if ( v7 <= 120 )
                goto LABEL_20;
              v2 = (unsigned __int8)byte_73320;
              *(_QWORD *)(v4 + 48) = 0;
              *(_DWORD *)(v4 + 96) = 1;
              if ( v2 || byte_6FA70 || dword_6D35C > 2 )
              {
                snprintf(s, 0x800u, "%s: Idle for more than 60 seconds, declaring SICK!", v19);
                sub_343C4(3, s, 0);
              }
              sub_2A69C(v5 + 52);
              sub_2D53C(v4, 3);
              if ( !byte_6CAA8 )
                goto LABEL_20;
              if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
              {
                snprintf(s, 0x800u, "%s: Attempting to restart", v19);
                sub_343C4(3, s, 0);
              }
LABEL_18:
              if ( *(_DWORD *)(v4 + 32) != 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)(v4 + 4) + 16))(v4);
              goto LABEL_20;
            }
            if ( v7 > 119 )
            {
              if ( v6 == 1 )
              {
                if ( v7 <= 600 )
                {
                  if ( v18 - *(_DWORD *)(v5 + 52) > 60 )
                  {
                    sub_2A69C(v5 + 52);
                    if ( byte_6CAA8 )
                      goto LABEL_18;
                  }
                }
                else
                {
                  v8 = (unsigned __int8)byte_73320;
                  *(_DWORD *)(v4 + 96) = 2;
                  if ( v8 || byte_6FA70 || dword_6D35C > 2 )
                  {
                    snprintf(s, 0x800u, "%s: Not responded for more than 10 minutes, declaring DEAD!", v19);
                    sub_343C4(3, s, 0);
                  }
                  sub_2A69C(v5 + 52);
                  sub_2D53C(v4, 4);
                }
              }
              else if ( v18 - *(_DWORD *)(v5 + 52) > 60 && v6 == 2 )
              {
                sub_2A69C(v5 + 52);
                if ( byte_6CAA8 )
                  goto LABEL_18;
              }
            }
            else
            {
              if ( v6 != 4 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
              {
                snprintf(s, 0x800u, "%s: Recovered, declaring WELL!", v19);
                sub_343C4(3, s, 0);
              }
              *(_DWORD *)(v4 + 96) = 0;
              *(_DWORD *)(v4 + 240) = time(0);
            }
          }
        }
LABEL_20:
        if ( dword_735E8 <= ++v1 )
          goto LABEL_2;
      }
    }
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
  {
    snprintf(s, 0x800u, "Restarting execution as per start time %02d:%02d scheduled", dword_72ECC, dword_72EC8);
    sub_343C4(4, s, 0);
    if ( !byte_72C04 )
      goto LABEL_68;
    if ( byte_73320 || byte_6FA70 )
    {
LABEL_82:
      snprintf(s, 0x800u, "Will pause execution as scheduled at %02d:%02d", dword_72C10, dword_72C0C);
      sub_343C4(4, s, 0);
LABEL_68:
      v12 = 0;
      for ( byte_72F7C = 0; dword_735B0 > v12; ++v12 )
      {
        v13 = sub_1DD14(v12);
        v14 = v13;
        if ( *(_DWORD *)(*(_DWORD *)(v13 + 36) + 32) != 1 )
        {
          v15 = (unsigned __int8)byte_6FA71;
          *(_BYTE *)(v13 + 60) = 0;
          if ( v15 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
          {
            snprintf(s, 0x800u, "Pushing sem post to thread %d", *(_DWORD *)v13);
            sub_343C4(7, s, 0);
          }
          sub_2D818(v14 + 16, "cgminer.c", "watchdog_thread", 10349);
        }
      }
      goto LABEL_6;
    }
  }
  else if ( !byte_72C04 )
  {
    goto LABEL_68;
  }
  if ( dword_6D35C <= 3 )
    goto LABEL_68;
  goto LABEL_82;
}
