/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.bitcoin.libconsensus;

public class consensus implements consensusConstants {
  public static verify_result verify_script(SWIGTYPE_p_uint8_t transaction, long transaction_size, SWIGTYPE_p_uint8_t prevout_script, long prevout_script_size, SWIGTYPE_p_uint32_t tx_input_index, SWIGTYPE_p_uint32_t flags) {
    return verify_result.swigToEnum(consensusJNI.verify_script(SWIGTYPE_p_uint8_t.getCPtr(transaction), transaction_size, SWIGTYPE_p_uint8_t.getCPtr(prevout_script), prevout_script_size, SWIGTYPE_p_uint32_t.getCPtr(tx_input_index), SWIGTYPE_p_uint32_t.getCPtr(flags)));
  }

}