// Alternative name is 'axi_fpga_dev_init'
int __fastcall init_module(int a1, int a2)
{
  int v2; // r5
  const char *v3; // r0
  int v4; // r0
  const char *v5; // r0
  int v7; // r1
  int v8; // r1
  unsigned int v9; // r0

  printk("In axi fpga driver!\n");
  v2 = alloc_chrdev_region(&axi_fpga_dev_num, 0, 1, "axi_fpga_dev", a1, a2);
  if ( v2 < 0 )
  {
    v3 = "alloc axi_fpga_dev fail!\n";
LABEL_7:
    printk(v3);
    return v2;
  }
  v4 = kmem_cache_alloc(kmalloc_caches[6], 37748928);
  p_axi_fpga_dev = v4;
  if ( !v4 )
  {
    v5 = "kmalloc cdev fail!\n";
LABEL_10:
    printk(v5);
    return 1;
  }
  cdev_init(v4, &axi_fpga_dev_fops);
  *(_DWORD *)(p_axi_fpga_dev + 36) = &_this_module;
  v2 = cdev_add();
  if ( v2 )
  {
    v3 = "add axi_fpga_dev fail!\n";
    goto LABEL_7;
  }
  base_vir_mem_addr = _request_region(&iomem_resource, 0x40000000, 5120, "axi_fpga_vir_mem", 0);
  if ( !base_vir_mem_addr )
  {
    v5 = "request_mem_region failed!\n";
    goto LABEL_10;
  }
  printk("request_mem_region OK!\n");
  v7 = ioremap(0x40000000, 5120);
  base_vir_addr = v7;
  if ( !v7 )
  {
    printk("ioremap fail!\n");
    printk("!!!*base_vir_addr = 0x%x\n", base_vir_addr);
    return -1;
  }
  printk("AXI fpga dev virtual address is 0x%x\n", v7);
  v8 = *(_DWORD *)base_vir_addr;
  __dsb(0xFu);
  printk("*base_vir_addr = 0x%x\n", v8);
  v9 = _class_create(&_this_module, "axi_fpga_dev", &axi_fpga_class);
  axi_fpga_class = v9;
  if ( v9 > 0xFFFFF000 )
  {
    printk("Err:failed in creating axi fpga class.\n");
    return -1;
  }
  device_create(v9);
  return 0;
}
