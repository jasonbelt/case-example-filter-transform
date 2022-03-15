package t.AttestationGate

import org.sireum._
import art.{ArtNative_Ext, Empty}
import t._

// This file was auto-generated.  Do not edit
abstract class Receiver_i_preceiver_receiver_TestApi extends BridgeTestSuite[Receiver_i_preceiver_receiver_Bridge](Arch.s_impl_Instance_preceiver_receiver) {

  /** helper function to set the values of all input ports.
   * @param read_port payloads for event data port read_port.
   *   ART currently supports single element event data queues so
   *   only the last element of read_port will be used
   */
  def put_concrete_inputs(read_port : ISZ[Base_Types.Bits]): Unit = {
    for(v <- read_port){
      put_read_port(v)
    }
  }


  // setter for in EventDataPort
  def put_read_port(value : Base_Types.Bits): Unit = {
    ArtNative_Ext.insertInPortValue(bridge.operational_api.read_port_Id, Base_Types.Bits_Payload(value))
  }

}
