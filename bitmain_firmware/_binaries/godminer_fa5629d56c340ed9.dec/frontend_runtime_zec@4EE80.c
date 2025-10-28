_DWORD *frontend_runtime_zec()
{
  _DWORD *result; // r0

  result = calloc(1u, 0x54u);
  *result = stratum_connect;
  result[1] = stratum_disconnect;
  result[2] = stratum_recv_line;
  result[3] = stratum_send_line;
  result[4] = stratum_login_base;
  result[5] = stratum_handle_method_base;
  result[6] = pre_stratum_handle_method_base;
  result[7] = stratum_handle_response_zec;
  result[8] = sub_4E4A8;
  result[9] = sub_4DD84;
  result[10] = stratum_subscribe_zec;
  result[11] = stratum_authorize_base;
  result[12] = sub_4DDBC;
  result[13] = sub_4DB50;
  result[14] = stratum_set_diff_or_target_base;
  result[15] = target_to_diff_zec;
  result[16] = diff_to_target_zec;
  result[17] = target_to_double_diff_zec;
  return result;
}
