#include <Radio_i_pradio_radio_api.h>
#include <Radio_i_pradio_radio.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit

static char* component_id = "s_impl_Instance_pradio_radio";

int32_t sent;

Unit t_AttestationGate_Radio_i_pradio_radio_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio.c", "", "t_AttestationGate_Radio_i_pradio_radio_initialise_", 0);

  printf("%s: t_AttestationGate_Radio_i_pradio_radio_initialise_ called\n", component_id);

  sent = 60;

  //uint8_t t0[numBytes_t_Data_Types_Temp_i];
  //byte_array_default(SF t0, numBits_t_Data_Types_Temp_i, numBytes_t_Data_Types_Temp_i);
  //api_put_write_port__t_AttestationGate_Radio_i_pradio_radio(SF numBits_t_Data_Types_Temp_i, t0);

  /* example usage of api loggers. Commented out as the constructed String may be too long
  api_logInfo__t_AttestationGate_Radio_i_pradio_radio(SF string("Example logInfo"));

  api_logDebug__t_AttestationGate_Radio_i_pradio_radio(SF string("Example logDebug"));

  api_logError__t_AttestationGate_Radio_i_pradio_radio(SF string("Example logError"));
  */
}

Unit t_AttestationGate_Radio_i_pradio_radio_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio.c", "", "t_AttestationGate_Radio_i_pradio_radio_finalise_", 0);
}

Unit t_AttestationGate_Radio_i_pradio_radio_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "Radio_i_pradio_radio.c", "", "t_AttestationGate_Radio_i_pradio_radio_timeTriggered_", 0);

  uint8_t t0[numBytes_t_Data_Types_Temp_i];
  t0[3] = (sent >> 24) & 0xFF;
  t0[2] = (sent >> 16) & 0xFF;
  t0[1] = (sent >> 8) & 0xFF;
  t0[0] = sent & 0xFF;
  
  printf("[%s] Sent %i\n", component_id, sent);
  hex_dump(t0, 4);
  printf("\n");
  
  api_put_write_port__t_AttestationGate_Radio_i_pradio_radio(SF numBits_t_Data_Types_Temp_i, t0);
  
  sent++;
}
