int __fastcall sub_366A0(int a1)
{
  int v2; // r6
  __int16 *v3; // r4
  int v4; // r2
  int v5; // r3
  bool v6; // zf
  _BOOL4 v8; // r2
  int v9; // r7
  int v10; // r1
  int v11; // r2
  __int16 v13; // r2
  unsigned int v14; // r3
  int v15; // r3
  int v16; // r8
  unsigned int v17; // r3
  int v18; // r10
  bool v19; // cc
  int v20; // r3
  int v21; // r9
  int v22; // r10
  double v23; // d18
  double v24; // d16
  int v25; // r11
  int v26; // r1
  __int16 v27; // r3
  int v28; // r10
  double v29; // d16
  int v30; // r1
  int v31; // r11
  int v32; // r2
  int v33; // r9
  int v34; // r0
  int v35; // r12
  const char *v36; // r0
  const char *v37; // r0
  const char *v38; // r0
  const char *v39; // r0
  const char *v40; // r0
  int v41; // r0
  int v42; // r9
  int v43; // r11
  int v44; // r5
  int v45; // r10
  int v46; // r12
  int v47; // r8
  int v48; // r5
  int v49; // r0
  int v50; // r3
  double v51; // d17
  double v52; // d18
  double v53; // d17
  char v54; // r2
  int v55; // r3
  int v56; // r3
  char v57; // r3
  const char *v58; // r0
  char v59; // r3
  int v60; // s15
  int v61; // r0
  int v62; // r12
  int v63; // r9
  int v64; // r3
  int v65; // r5
  int v66; // r0
  int v67; // [sp+28h] [bp-1Ch]
  double v68; // [sp+38h] [bp-Ch]
  double v69; // [sp+38h] [bp-Ch]
  double v70; // [sp+38h] [bp-Ch]
  double v71; // [sp+38h] [bp-Ch]

  v2 = *(_DWORD *)(a1 + 60);
  v3 = *(__int16 **)(v2 + 28);
  v4 = *((_DWORD *)v3 + 35);
  v5 = *((unsigned __int8 *)v3 + 12);
  if ( (unsigned int)(v4 - 2) > 1 )
  {
    v6 = v5 == 65;
    if ( v5 != 65 )
      v6 = v5 == 70;
    if ( v6 || v5 == 84 || v5 == 75 || v5 == 109 )
    {
      puts("Palisade Port B packets detected. Connect to Port A");
      return 0;
    }
  }
  switch ( v5 )
  {
    case 143:
      v13 = *((unsigned __int8 *)v3 + 15);
      v9 = (unsigned __int16)(v13 + (*((unsigned __int8 *)v3 + 14) << 8));
      if ( (*(_BYTE *)(v2 + 752) & 2) == 0 && !(v13 + (*((unsigned __int8 *)v3 + 14) << 8)) )
        return 0;
      v14 = *((unsigned __int8 *)v3 + 13);
      if ( v14 == 171 )
      {
        if ( v3[5] != 17 )
          goto LABEL_22;
        if ( *((int *)v3 + 1) <= 0 )
          return 0;
        if ( *((unsigned __int8 *)v3 + 21) + (*((unsigned __int8 *)v3 + 20) << 8) )
        {
          if ( (v3[11] & 0x1D) == 0 )
          {
            *(_BYTE *)(v2 + 32) = 3;
            sub_27040(a1, 6);
            *((_DWORD *)v3 + 1) = -1;
            return 0;
          }
          *(_DWORD *)(v2 + 192) = 0;
          puts("\nTiming Flags are:");
          printf("Timing flag value is: 0x%X\n", *((unsigned __int8 *)v3 + 22));
          if ( (v3[11] & 1) != 0 )
            v36 = "\tGetting UTC time";
          else
            v36 = "\tGetting GPS time";
          puts(v36);
          if ( (v3[11] & 2) != 0 )
            v37 = "\tPPS is from UTC";
          else
            v37 = "\tPPS is from GPS";
          puts(v37);
          if ( (v3[11] & 4) != 0 )
            v38 = "\tTime is not Set";
          else
            v38 = "\tTime is Set";
          puts(v38);
          if ( (v3[11] & 8) != 0 )
            v39 = "\tI dont have UTC info";
          else
            v39 = "\tI have UTC info";
          puts(v39);
          if ( (v3[11] & 0x10) != 0 )
            v40 = "\tTime is from USER\n";
          else
            v40 = "\tTime is from GPS\n";
          puts(v40);
          v41 = sub_36608((unsigned __int8 *)v3 + 26);
          *(_DWORD *)(v2 + 176) = v41;
          if ( v41 < 0 )
            goto LABEL_22;
          v42 = *((unsigned __int8 *)v3 + 14);
          v43 = *((unsigned __int8 *)v3 + 15);
          v44 = *((unsigned __int8 *)v3 + 16);
          v45 = *((unsigned __int8 *)v3 + 17);
          if ( dword_7CF4C > 1 )
          {
            printf("pp->day: %d\n", v41);
            printf("TOW: %ld\n", (v43 << 16) | (v42 << 24) | v45 | (v44 << 8));
            printf("DAY: %d\n", *((unsigned __int8 *)v3 + 26));
          }
          v19 = dword_7CF4C <= 1;
          v46 = (__int16)(*((unsigned __int8 *)v3 + 29) + (*((unsigned __int8 *)v3 + 28) << 8));
          *(_DWORD *)(v2 + 172) = v46;
          v47 = *((unsigned __int8 *)v3 + 25);
          *(_DWORD *)(v2 + 180) = v47;
          v48 = *((unsigned __int8 *)v3 + 24);
          *(_DWORD *)(v2 + 184) = v48;
          v49 = *((unsigned __int8 *)v3 + 23);
          *(_DWORD *)(v2 + 188) = v49;
          if ( !v19 )
          {
            printf(
              "TSIP_decode: unit %d: %02X #%d %02d:%02d:%02d.%06ld %02d/%02d/%04d ",
              *v3,
              *((unsigned __int8 *)v3 + 13),
              v9,
              v47,
              v48,
              v49,
              *(_DWORD *)(v2 + 192),
              *((unsigned __int8 *)v3 + 27),
              *((unsigned __int8 *)v3 + 26),
              v46);
            return 1;
          }
          return 1;
        }
      }
      else
      {
        if ( v14 > 0xAB )
        {
          if ( v14 == 172 )
          {
            if ( *((int *)v3 + 1) > 0 )
            {
              if ( v3[5] != 68 )
                goto LABEL_22;
              v50 = dword_7CF4C;
              if ( dword_7CF4C > 1 )
              {
                HIBYTE(v70) = *((_BYTE *)v3 + 49);
                BYTE6(v70) = *((_BYTE *)v3 + 50);
                BYTE5(v70) = *((_BYTE *)v3 + 51);
                BYTE4(v70) = *((_BYTE *)v3 + 52);
                BYTE3(v70) = *((_BYTE *)v3 + 53);
                BYTE2(v70) = *((_BYTE *)v3 + 54);
                BYTE1(v70) = *((_BYTE *)v3 + 55);
                LOBYTE(v70) = *((_BYTE *)v3 + 56);
                v51 = v70;
                HIBYTE(v70) = *((_BYTE *)v3 + 57);
                BYTE6(v70) = *((_BYTE *)v3 + 58);
                v52 = v51 * 57.2957795;
                BYTE5(v70) = *((_BYTE *)v3 + 59);
                BYTE4(v70) = *((_BYTE *)v3 + 60);
                BYTE3(v70) = *((_BYTE *)v3 + 61);
                BYTE2(v70) = *((_BYTE *)v3 + 62);
                BYTE1(v70) = *((_BYTE *)v3 + 63);
                LOBYTE(v70) = *((_BYTE *)v3 + 64);
                v53 = v70;
                HIBYTE(v70) = *((_BYTE *)v3 + 65);
                BYTE1(v70) = *((_BYTE *)v3 + 71);
                LOBYTE(v70) = *((_BYTE *)v3 + 72);
                BYTE6(v70) = *((_BYTE *)v3 + 66);
                BYTE5(v70) = *((_BYTE *)v3 + 67);
                BYTE4(v70) = *((_BYTE *)v3 + 68);
                BYTE3(v70) = *((_BYTE *)v3 + 69);
                BYTE2(v70) = *((_BYTE *)v3 + 70);
                printf(
                  "TSIP_decode: unit %d: Latitude: %03.4f Longitude: %03.4f Alt: %05.2f m\n",
                  *v3,
                  v52,
                  v53 * 57.2957795,
                  v70);
                printf("TSIP_decode: unit %d\n", *v3);
                v50 = dword_7CF4C;
              }
              v54 = v3[12] & 0x80;
              *(_BYTE *)(v2 + 32) = v54 != 0;
              if ( v50 > 1 )
              {
                printf(
                  "TSIP_decode: unit %d: 0x%02x leap %d\n",
                  *v3,
                  *((unsigned __int8 *)v3 + 13),
                  *(unsigned __int8 *)(v2 + 32));
                if ( dword_7CF4C > 1 )
                {
                  printf("Receiver MODE: 0x%02X\n", *((unsigned __int8 *)v3 + 14));
                  v55 = *((unsigned __int8 *)v3 + 14);
                  if ( !*((_BYTE *)v3 + 14) )
                  {
                    puts("                AUTOMATIC");
                    v55 = *((unsigned __int8 *)v3 + 14);
                  }
                  if ( v55 == 1 )
                  {
                    puts("                SINGLE SATELLITE");
                    v55 = *((unsigned __int8 *)v3 + 14);
                  }
                  if ( v55 == 3 )
                  {
                    puts("                HORIZONTAL(2D)");
                    v55 = *((unsigned __int8 *)v3 + 14);
                  }
                  if ( v55 == 4 )
                  {
                    puts("                FULL POSITION(3D)");
                    v55 = *((unsigned __int8 *)v3 + 14);
                  }
                  if ( v55 == 5 )
                  {
                    puts("                DGPR REFERENCE");
                    v55 = *((unsigned __int8 *)v3 + 14);
                  }
                  if ( v55 == 6 )
                  {
                    puts("                CLOCK HOLD(2D)");
                    v55 = *((unsigned __int8 *)v3 + 14);
                  }
                  if ( v55 == 7 )
                    puts("                OVERDETERMINED CLOCK");
                  printf("\n** Disciplining MODE 0x%02X:\n", *((unsigned __int8 *)v3 + 15));
                  v56 = *((unsigned __int8 *)v3 + 15);
                  if ( !*((_BYTE *)v3 + 15) )
                  {
                    puts("                NORMAL");
                    v56 = *((unsigned __int8 *)v3 + 15);
                  }
                  if ( v56 == 1 )
                  {
                    puts("                POWER-UP");
                    v56 = *((unsigned __int8 *)v3 + 15);
                  }
                  if ( v56 == 2 )
                  {
                    puts("                AUTO HOLDOVER");
                    v56 = *((unsigned __int8 *)v3 + 15);
                  }
                  if ( v56 == 3 )
                  {
                    puts("                MANUAL HOLDOVER");
                    v56 = *((unsigned __int8 *)v3 + 15);
                  }
                  if ( v56 == 4 )
                  {
                    puts("                RECOVERY");
                    v56 = *((unsigned __int8 *)v3 + 15);
                  }
                  if ( v56 == 6 )
                  {
                    puts("                DISCIPLINING DISABLED");
                    return 0;
                  }
                }
              }
            }
            return 0;
          }
          if ( v14 != 173 )
            return 0;
          if ( v3[5] != 22 )
            goto LABEL_22;
          v15 = *((_DWORD *)v3 + 1);
          v16 = *((unsigned __int8 *)v3 + 32);
          *((_BYTE *)v3 + 8) = v16;
          if ( v15 <= 0 )
            return 0;
          v17 = *((unsigned __int8 *)v3 + 31);
          if ( v17 > 0xE )
          {
            v18 = 14;
          }
          else
          {
            v18 = *((unsigned __int8 *)v3 + 31);
            v19 = v17 > 0xB;
            if ( v17 != 11 )
              v19 = v17 - 2 > 5;
            if ( !v19 || v17 == 12 )
            {
              printf("TSIP_decode: Not Tracking Sats : %s\n", (&off_7A7B0)[15 * v17]);
              sub_27040(a1, 6);
              *((_DWORD *)v3 + 1) = -1;
              return 0;
            }
          }
          if ( (v16 & 2) != 0 )
          {
            if ( (v16 & 1) != 0 )
              v59 = 1;
            else
              v59 = 2;
            *(_BYTE *)(v2 + 32) = v59;
          }
          else
          {
            if ( !v16 )
            {
              *(_BYTE *)(v2 + 32) = 3;
              printf("TSIP_decode: UTC Almanac unavailable: %d\n", *((unsigned __int8 *)v3 + 32));
              sub_27040(a1, 6);
              *((_DWORD *)v3 + 1) = -1;
              return 0;
            }
            *(_BYTE *)(v2 + 32) = 0;
          }
          BYTE5(v71) = *((_BYTE *)v3 + 18);
          HIBYTE(v71) = *((_BYTE *)v3 + 16);
          BYTE6(v71) = *((_BYTE *)v3 + 17);
          BYTE4(v71) = *((_BYTE *)v3 + 19);
          BYTE3(v71) = *((_BYTE *)v3 + 20);
          BYTE2(v71) = *((_BYTE *)v3 + 21);
          BYTE1(v71) = *((_BYTE *)v3 + 22);
          LOBYTE(v71) = *((_BYTE *)v3 + 23);
          v60 = (int)(v71 * 1000000000.0);
          *(_DWORD *)(v2 + 192) = v60;
          v61 = sub_36608((unsigned __int8 *)v3 + 27);
          *(_DWORD *)(v2 + 176) = v61;
          if ( v61 < 0 )
            goto LABEL_22;
          v62 = (__int16)(*((unsigned __int8 *)v3 + 30) + (*((unsigned __int8 *)v3 + 29) << 8));
          *(_DWORD *)(v2 + 172) = v62;
          v63 = *((unsigned __int8 *)v3 + 24);
          v64 = dword_7CF4C;
          *(_DWORD *)(v2 + 180) = v63;
          v65 = *((unsigned __int8 *)v3 + 25);
          *(_DWORD *)(v2 + 184) = v65;
          v66 = *((unsigned __int8 *)v3 + 26);
          *(_DWORD *)(v2 + 188) = v66;
          if ( v64 > 1 )
            printf(
              "TSIP_decode: unit %d: %02X #%d %02d:%02d:%02d.%06ld %02d/%02d/%04d UTC %02x %s\n",
              *v3,
              *((unsigned __int8 *)v3 + 13),
              v9,
              v63,
              v65,
              v66,
              v60,
              *((unsigned __int8 *)v3 + 28),
              *((unsigned __int8 *)v3 + 27),
              v62,
              *((unsigned __int8 *)v3 + 32),
              (&off_7A7B0)[15 * v18]);
          return 1;
        }
        if ( v14 != 11 || *((int *)v3 + 1) <= 0 )
          return 0;
        if ( v3[5] != 74 )
          goto LABEL_22;
        if ( dword_7CF4C > 1 )
        {
          v21 = *(_DWORD *)(v2 + 28);
          v22 = 66;
          BYTE4(v68) = *((_BYTE *)v3 + 58);
          HIBYTE(v68) = *((_BYTE *)v3 + 55);
          BYTE3(v68) = *((_BYTE *)v3 + 59);
          LOBYTE(v68) = *((_BYTE *)v3 + 62);
          BYTE6(v68) = *((_BYTE *)v3 + 56);
          BYTE5(v68) = *((_BYTE *)v3 + 57);
          BYTE2(v68) = *((_BYTE *)v3 + 60);
          BYTE1(v68) = *((_BYTE *)v3 + 61);
          v23 = v68 * 57.2957795;
          BYTE6(v68) = *((_BYTE *)v3 + 64);
          HIBYTE(v68) = *((_BYTE *)v3 + 63);
          BYTE5(v68) = *((_BYTE *)v3 + 65);
          BYTE4(v68) = *((_BYTE *)v3 + 66);
          BYTE3(v68) = *((_BYTE *)v3 + 67);
          BYTE2(v68) = *((_BYTE *)v3 + 68);
          BYTE1(v68) = *((_BYTE *)v3 + 69);
          LOBYTE(v68) = *((_BYTE *)v3 + 70);
          v24 = v68 * 57.2957795;
          HIBYTE(v68) = *((_BYTE *)v3 + 71);
          BYTE6(v68) = *((_BYTE *)v3 + 72);
          BYTE5(v68) = *((_BYTE *)v3 + 73);
          BYTE4(v68) = *((_BYTE *)v3 + 74);
          BYTE3(v68) = *((_BYTE *)v3 + 75);
          BYTE1(v68) = *((_BYTE *)v3 + 77);
          BYTE2(v68) = *((_BYTE *)v3 + 76);
          LOBYTE(v68) = *((_BYTE *)v3 + 78);
          printf("TSIP_decode: unit %d: Latitude: %03.4f Longitude: %03.4f Alt: %05.2f m\n", *v3, v23, v24, v68);
          printf("TSIP_decode: unit %d: Sats:", *v3);
          v25 = 0;
          do
          {
            v26 = *(unsigned __int8 *)(v21 + 79);
            ++v22;
            ++v21;
            if ( v26 )
            {
              ++v25;
              printf(" %02d", v26);
            }
          }
          while ( v22 != 74 );
          printf(" : Tracking %d\n", v25);
        }
        v27 = *((unsigned __int8 *)v3 + 30);
        v28 = (__int16)(v27 + (*((unsigned __int8 *)v3 + 29) << 8));
        if ( v27 + (*((unsigned __int8 *)v3 + 29) << 8) )
        {
          HIBYTE(v69) = *((_BYTE *)v3 + 16);
          BYTE6(v69) = *((_BYTE *)v3 + 17);
          BYTE4(v69) = *((_BYTE *)v3 + 19);
          BYTE5(v69) = *((_BYTE *)v3 + 18);
          BYTE3(v69) = *((_BYTE *)v3 + 20);
          BYTE2(v69) = *((_BYTE *)v3 + 21);
          BYTE1(v69) = *((_BYTE *)v3 + 22);
          LOBYTE(v69) = *((_BYTE *)v3 + 23);
          v29 = (v69 - (double)(int)v69) * 1000000000.0;
          v30 = (int)v69 - (_DWORD)&loc_15180 * ((int)v69 / 86400);
          v31 = v30 / 3600;
          *(_DWORD *)(v2 + 180) = v30 / 3600;
          v30 %= 3600;
          *(_DWORD *)(v2 + 192) = (int)v29;
          v32 = v30 / 60;
          *(_DWORD *)(v2 + 184) = v32;
          v33 = (v30 - 60 * v32) % 60;
          *(_DWORD *)(v2 + 188) = v33;
          v67 = v32;
          v34 = sub_36608((unsigned __int8 *)v3 + 24);
          *(_DWORD *)(v2 + 176) = v34;
          if ( v34 < 0 )
            goto LABEL_22;
          v19 = dword_7CF4C <= 1;
          v35 = (__int16)(*((unsigned __int8 *)v3 + 27) + (*((unsigned __int8 *)v3 + 26) << 8));
          *(_DWORD *)(v2 + 172) = v35;
          if ( !v19 )
            printf(
              "TSIP_decode: unit %d: %02X #%d %02d:%02d:%02d.%06ld %02d/%02d/%04d UTC %02d\n",
              *v3,
              *((unsigned __int8 *)v3 + 13),
              v9,
              v31,
              v67,
              v33,
              (int)v29,
              *((unsigned __int8 *)v3 + 25),
              *((unsigned __int8 *)v3 + 24),
              v35,
              v28);
          if ( !*((_BYTE *)v3 + 8) )
            return 2;
          *((_BYTE *)v3 + 8) = 0;
          return 0;
        }
      }
      puts("TSIP_decode: UTC Offset Unknown");
      goto LABEL_22;
    case 66:
      puts("0x42");
      return 0;
    case 67:
      puts("0x43");
      return 0;
  }
  if ( v4 == 2 && v5 == 65 )
  {
    puts("Undocumented 0x41 packet on Thunderbolt");
    return 0;
  }
  v8 = v4 == 3;
  if ( v5 == 65 && v8 )
  {
    printf("GPS TOW: %ld\n", _byteswap_ulong(*(_DWORD *)((char *)v3 + 13)));
    printf("GPS WN: %d\n", (__int16)(*((unsigned __int8 *)v3 + 18) + (*((unsigned __int8 *)v3 + 17) << 8)));
    printf("GPS UTC-GPS Offser: %ld\n", _byteswap_ulong(*(_DWORD *)((char *)v3 + 19)));
    return 0;
  }
  if ( v5 != 70 )
    v8 = 0;
  if ( v8 )
  {
    if ( dword_7CF4C > 1 )
    {
      switch ( *((_BYTE *)v3 + 13) )
      {
        case 0:
          puts("Doing Position Fixes");
          break;
        case 1:
          puts("Do no have GPS time yet");
          break;
        case 3:
          puts("PDOP is too high");
          break;
        case 8:
          puts("No usable satellites");
          break;
        case 9:
          puts("Only 1 usable satellite");
          break;
        case 0xA:
          puts("Only 2 usable satellites");
          break;
        case 0xB:
          puts("Only 3 usable satellites");
          break;
        case 0xC:
          puts("The Chosen satellite is unusable");
          break;
        default:
          break;
      }
    }
    if ( !*((_BYTE *)v3 + 14) )
      goto LABEL_21;
    sub_27040(a1, 6);
    v20 = dword_7CF4C;
    *((_DWORD *)v3 + 1) = -1;
    if ( v20 > 1 )
    {
      if ( *((_BYTE *)v3 + 14) )
      {
        puts("Signal Processor Error, reset unit.");
        if ( *((_BYTE *)v3 + 14) )
        {
          puts("Alignment error, channel or chip 1, reset unit.");
          if ( *((_BYTE *)v3 + 14) )
          {
            puts("Alignment error, channel or chip 2, reset unit.");
            if ( *((_BYTE *)v3 + 14) )
            {
              puts("Antenna feed line fault (open or short)");
              if ( *((_BYTE *)v3 + 14) )
              {
                puts(
                  "Excessive reference frequency error, refer to packet 0x2D and packet 0x4D documentation for further information");
                return 0;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  if ( v5 == 84 )
    return 0;
  if ( v5 != 109 )
  {
LABEL_21:
    v9 = 0;
LABEL_22:
    sub_27040(a1, 2);
    v10 = *v3;
    v11 = *((unsigned __int8 *)v3 + 12);
    *((_DWORD *)v3 + 1) = -1;
    printf(
      "TSIP_decode: unit %d: bad packet %02x-%02x event %d len %d\n",
      v10,
      v11,
      *((unsigned __int8 *)v3 + 13),
      v9,
      v3[5]);
    return 0;
  }
  v57 = *((_BYTE *)v3 + 13);
  if ( (v57 & 3) == 3 )
  {
    puts("2d Fix Dimension");
    v57 = *((_BYTE *)v3 + 13);
  }
  if ( (v57 & 4) != 0 )
  {
    puts("3d Fix Dimension");
    v57 = *((_BYTE *)v3 + 13);
  }
  if ( (v57 & 8) != 0 )
    v58 = "Fix Mode is MANUAL";
  else
    v58 = "Fix Mode is AUTO";
  puts(v58);
  printf("Tracking %d Satellites\n", *((unsigned __int8 *)v3 + 13) >> 4);
  return 0;
}
