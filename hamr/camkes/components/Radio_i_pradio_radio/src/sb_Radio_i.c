// This file will be regenerated, do not edit

#include <sb_Radio_i.h>
#include <sb_queue_union_art_DataContent_1.h>
#include <Radio_i_pradio_radio_adapter.h>
#include <string.h>
#include <camkes.h>

bool sb_write_port_enqueue(const union_art_DataContent *data) {
  sb_queue_union_art_DataContent_1_enqueue(sb_write_port_queue_1, (union_art_DataContent*) data);
  sb_write_port_1_notification_emit();

  return true;
}

// send write_port: Out EventDataPort Data_Types__Temp_i
Unit t_AttestationGate_Radio_i_pradio_radio_seL4Nix_write_port_Send(
  STACK_FRAME
  art_DataContent d) {
  DeclNewStackFrame(caller, "sb_Radio_i.c", "", "t_AttestationGate_Radio_i_pradio_radio_seL4Nix_write_port_Send", 0);

  sb_write_port_enqueue(d);
}

void pre_init(void) {
  DeclNewStackFrame(NULL, "sb_Radio_i.c", "", "pre_init", 0);

  printf("Entering pre-init of Radio_i_pradio_radio\n");

  // initialise data structure for outgoing event data port write_port
  sb_queue_union_art_DataContent_1_init(sb_write_port_queue_1);

  // initialise slang-embedded components/ports
  t_AttestationGate_Radio_i_pradio_radio_adapter_initialiseArchitecture(SF_LAST);

  // call the component's initialise entrypoint
  t_AttestationGate_Radio_i_pradio_radio_adapter_initialiseEntryPoint(SF_LAST);

  printf("Leaving pre-init of Radio_i_pradio_radio\n");
}

/************************************************************************
 * int run(void)
 * Main active thread function.
 ************************************************************************/
int run(void) {
  DeclNewStackFrame(NULL, "sb_Radio_i.c", "", "run", 0);

  sb_self_pacer_tick_emit();
  for(;;) {
    sb_self_pacer_tock_wait();
    // call the component's compute entrypoint
    t_AttestationGate_Radio_i_pradio_radio_adapter_computeEntryPoint(SF_LAST);
    sb_self_pacer_tick_emit();
  }
  return 0;
}
