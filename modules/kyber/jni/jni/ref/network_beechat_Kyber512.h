#ifndef KEM_H
#define KEM_H

#include <jni.h>
#include <stdint.h>
#include "params.h"

#define UNUSED(x) (void)(x)

/* Header for class network_beechat_Kyber512 */

#ifndef _Included_com_beechat_network_Kyber512
#define _Included_com_beechat_network_Kyber512
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_beechat_network_Kyber512
 * Method:    crypto_kem_keypair
 * Signature: ([C[C)I
 */
JNIEXPORT jint JNICALL Java_com_beechat_network_Kyber512_crypto_1kem_1keypair
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_beechat_network_Kyber512
 * Method:    crypto_kem_enc
 * Signature: ([C[C[C)I
 */
JNIEXPORT jint JNICALL Java_com_beechat_network_Kyber512_crypto_1kem_1enc
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_beechat_network_Kyber512
 * Method:    crypto_kem_dec
 * Signature: ([C[C[C)I
 */
JNIEXPORT jint JNICALL Java_com_beechat_network_Kyber512_crypto_1kem_1dec
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
#endif

