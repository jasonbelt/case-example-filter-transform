// #Sireum

package t.AttestationGate

import org.sireum._
import art._
import t._

@sig trait Radio_i_Api {
  def id: Art.BridgeId
  def write_port_Id : Art.PortId

  def put_write_port(value : Base_Types.Bits) : Unit = {
    Art.putValue(write_port_Id, Base_Types.Bits_Payload(value))
  }

  def logInfo(msg: String): Unit = {
    Art.logInfo(id, msg)
  }

  def logDebug(msg: String): Unit = {
    Art.logDebug(id, msg)
  }

  def logError(msg: String): Unit = {
    Art.logError(id, msg)
  }
}

@datatype class Radio_i_Initialization_Api (
  val id: Art.BridgeId,
  val write_port_Id : Art.PortId) extends Radio_i_Api

@datatype class Radio_i_Operational_Api (
  val id: Art.BridgeId,
  val write_port_Id : Art.PortId) extends Radio_i_Api {

}
