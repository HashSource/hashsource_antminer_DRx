int sub_2D304()
{
  dword_CB540 = 0;
  dword_7FFE0 = 0;
  dword_7FFE4 = 0;
  dword_7FFE8 = 0;
  dword_7FFDC = 1;
  dword_CB570 = 0;
  dword_CB54C = 0;
  dword_CB548 = 0;
  dword_CB560 = 0;
  dword_CB544 = 0;
  sub_5131C(14, sub_2D244);
  new.it_value.tv_sec = 1;
  new.it_interval.tv_sec = 1;
  new.it_value.tv_usec = 0;
  new.it_interval.tv_usec = 0;
  return setitimer(0, &new, 0);
}
