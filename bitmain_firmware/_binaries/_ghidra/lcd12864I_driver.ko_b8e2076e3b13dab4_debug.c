// Decompiled: lcd12864I_driver.ko_b8e2076e3b13dab4_debug


undefined4 bitmain_asic_close(void)

{
  printk("bitmain lcd closed!\n");
  return 0;
}




undefined4 bitmain_asic_open(void)

{
  printk("bitmain lcd opened!\n");
  return 0;
}




undefined4 bitmain_asic_ioctl(void)

{
  printk("bitmain lcd ioctl is not supported!\n");
  return 0;
}




void set_cs_direction(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_direction_addr & 0xfffeffff;
  }
  else {
    uVar1 = *gpio_direction_addr | 0x10000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_direction_addr = uVar1;
  return;
}




void set_sclk_direction(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_direction_addr & 0xffefffff;
  }
  else {
    uVar1 = *gpio_direction_addr | 0x100000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_direction_addr = uVar1;
  return;
}




void set_sid_direction(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_direction_addr & 0xfffdffff;
  }
  else {
    uVar1 = *gpio_direction_addr | 0x20000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_direction_addr = uVar1;
  return;
}




void set_reset_direction(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_direction_addr & 0xffdfffff;
  }
  else {
    uVar1 = *gpio_direction_addr | 0x200000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_direction_addr = uVar1;
  return;
}




void set_cs(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_value_addr & 0xfffeffff;
  }
  else {
    uVar1 = *gpio_value_addr | 0x10000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_value_addr = uVar1;
  return;
}




void set_sclk(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_value_addr & 0xffefffff;
  }
  else {
    uVar1 = *gpio_value_addr | 0x100000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_value_addr = uVar1;
  return;
}




void set_sid(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_value_addr & 0xfffdffff;
  }
  else {
    uVar1 = *gpio_value_addr | 0x20000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_value_addr = uVar1;
  return;
}




void set_reset(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_value_addr & 0xffdfffff;
  }
  else {
    uVar1 = *gpio_value_addr | 0x200000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_value_addr = uVar1;
  return;
}




void enable_gpios(void)

{
  uint uVar1;
  
  uVar1 = *gpio_enable_addr;
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_enable_addr = uVar1 | 0x330000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SendByte(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    set_sclk(0);
    uVar1 = uVar2 & 0xff;
    uVar2 = uVar2 + 1;
    set_sid((uint)((param_1 << uVar1) << 0x18) >> 0x1f);
    (*_ioremap)(0x1a36e);
    set_sclk(1);
    (*_ioremap)(0x1a36e);
    set_sclk(0);
  } while (uVar2 != 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ReceiveByte(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  set_sid_direction(0);
  uVar3 = 0;
  uVar5 = 0;
  do {
    set_sclk(0);
    (*_ioremap)(0x1a36e);
    set_sclk(1);
    (*_ioremap)(0x1a36e);
    set_sclk(0);
    iVar4 = *gpio_value_addr;
    DataSynchronizationBarrier(0xf);
    uVar2 = uVar5 << (uVar3 & 0xff);
    uVar3 = uVar3 + 1;
    (*_ioremap)(0x1a36e);
    uVar5 = (uint)(iVar4 << 6) >> 0x1f | uVar2 & 0xff;
  } while (uVar3 != 8);
  uVar3 = 0;
  uVar5 = 0;
  do {
    set_sclk(0);
    (*_ioremap)(0x1a36e);
    set_sclk(1);
    (*_ioremap)(0x1a36e);
    set_sclk(0);
    iVar4 = *gpio_value_addr;
    DataSynchronizationBarrier(0xf);
    uVar1 = uVar3 & 0xff;
    uVar3 = uVar3 + 1;
    (*_ioremap)(0x1a36e);
    uVar1 = uVar5 << uVar1 & 0xff;
    uVar5 = (uint)(iVar4 << 6) >> 0x1f | uVar1;
  } while (uVar3 != 8);
  set_sid_direction(1);
  return uVar2 & 0xf0 | uVar1 >> 4;
}




void CheckBusy(void)

{
  uint uVar1;
  
  do {
    SendByte(0xfc);
    uVar1 = ReceiveByte();
  } while ((uVar1 & 0x80) != 0);
  return;
}




void SendCommad(uint param_1)

{
  set_cs(1);
  CheckBusy();
  SendByte(0xf8);
  SendByte(param_1 & 0xf0);
  SendByte((param_1 & 0xf) << 4);
  set_cs(0);
  return;
}




void SendData(uint param_1)

{
  set_cs(1);
  CheckBusy();
  SendByte(0xfa);
  SendByte(param_1 & 0xf0);
  SendByte((param_1 & 0xf) << 4);
  set_cs(0);
  return;
}




uint bitmain_asic_write(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 local_58 [64];
  
  memset(local_58,0x20,0x40);
  uVar3 = *(uint *)(((uint)local_58 & 0xffffe000) + 8);
  bVar6 = CARRY4(param_2,param_3);
  uVar2 = param_2 + param_3;
  bVar7 = bVar6;
  if (!bVar6) {
    bVar7 = uVar3 < uVar2 || uVar2 - uVar3 < (uint)bVar6;
    uVar2 = uVar2 - (uVar3 + !bVar6);
  }
  if (!bVar7) {
    uVar3 = 0;
  }
  if (uVar3 == 0) {
    uVar3 = coproc_movefrom_Domain_Access_Control();
    uVar2 = uVar3 & 0xfffffff3 | 4;
    coproc_moveto_Domain_Access_Control(uVar2);
    InstructionSynchronizationBarrier(0xf);
    uVar8 = arm_copy_from_user(local_58,param_2,param_3,uVar2);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    coproc_moveto_Domain_Access_Control(uVar3);
    InstructionSynchronizationBarrier(0xf);
    if ((int)uVar8 == 0) {
LAB_000105b8:
      iVar4 = 0;
      do {
        iVar5 = 0;
        SendCommad((&addr_tab)[iVar4],uVar2);
        do {
          iVar1 = iVar5 + iVar4 * 2;
          iVar5 = iVar5 + 1;
          SendData(local_58[iVar1]);
        } while (iVar5 != 0x10);
        iVar4 = iVar4 + 8;
        uVar2 = extraout_r1;
      } while (iVar4 != 0x20);
      return param_3;
    }
  }
  else {
    if (param_3 == 0) goto LAB_000105b8;
    __memzero(local_58,param_3);
  }
  return 0xfffffff2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lcd_hw_init(void)

{
  int iVar1;
  
  enable_gpios();
  set_cs_direction(1);
  set_cs(0);
  set_sclk_direction(1);
  set_sclk(0);
  set_sid_direction(1);
  set_sid(0);
  set_reset_direction(1);
  set_reset(0);
  iVar1 = 0x65;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  set_reset(1);
  iVar1 = 0x65;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  SendCommad(0x30);
  iVar1 = 0xb;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  iVar1 = 0xb;
  printk(&DAT_00010b89);
  SendCommad(6);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  iVar1 = 0xb;
  printk(&DAT_00010b9e);
  SendCommad(0xf);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  iVar1 = 0xb;
  printk(&DAT_00010bb2);
  SendCommad(1);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  iVar1 = 0xb;
  printk(&DAT_00010bc5);
  SendCommad(2);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  iVar1 = 0xb;
  printk(&DAT_00010bd7);
  SendCommad(0x80);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  iVar1 = 0x65;
  printk(&DAT_00010bec);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lcd_display_init(void)

{
  int iVar1;
  
  SendCommad(0x30);
  iVar1 = 0xb;
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  iVar1 = 0xb;
  printk(&DAT_00010b89);
  SendCommad(0x30);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  iVar1 = 0xb;
  printk(&DAT_00010b89);
  SendCommad(0xc);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  iVar1 = 0xb;
  printk(&DAT_00010bb2);
  SendCommad(1);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  iVar1 = 0x65;
  printk(&DAT_00010bc5);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0x66665b0);
  }
  return;
}




void hanzi_Disp(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_3 + -1);
  SendCommad((&addr_tab)[param_2 + param_1 * 8]);
  while( true ) {
    pcVar1 = pcVar1 + 1;
    if (*pcVar1 == '\0') break;
    SendData();
  }
  return;
}




void Lcd_Fill(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = -0x80;
  do {
    cVar3 = -0x80;
    cVar1 = cVar4;
    do {
      do {
        SendCommad(0x36);
        SendCommad(cVar3);
        SendCommad(cVar1);
        cVar2 = cVar1 + '\x01';
        SendData(param_1);
        SendData(param_1);
        SendCommad(0x30);
        cVar1 = cVar2;
      } while (cVar2 != (char)(cVar4 + '\b'));
      cVar3 = cVar3 + '\x01';
      cVar1 = cVar4;
    } while (cVar3 != -0x60);
    cVar4 = cVar2;
  } while (cVar2 != -0x70);
  return;
}




undefined4 lcd_init(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gpio_direction_addr = ioremap(0xe000a244,1);
  gpio_value_addr = ioremap(0xe000a044,1);
  gpio_enable_addr = ioremap(0xe000a248,1);
  lcd_hw_init();
  iVar1 = misc_register(bitmain_lcd);
  if (iVar1 == 0) {
    printk(&DAT_00010c2f,"bitmain-lcd");
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    printk(&DAT_00010c02,"bitmain-lcd");
  }
  return uVar2;
}




void cleanup_module(void)

{
  printk(&DAT_00010c51);
  return;
}



