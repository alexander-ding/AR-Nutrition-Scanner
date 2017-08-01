﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.Hashtable
struct Hashtable_t1319640966;
// System.UInt32[]
struct UInt32U5BU5D_t1622678856;
// System.Byte[]
struct ByteU5BU5D_t3397361946;
// System.UInt64[]
struct UInt64U5BU5D_t2560836482;
// System.String
struct String_t;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t694942106;
// System.Collections.ArrayList
struct ArrayList_t3144526867;
// System.Collections.IEnumerator
struct IEnumerator_t366691471;
// System.Reflection.Assembly
struct Assembly_t1657971740;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t1946055640;
// System.Version
struct Version_t1550354611;
// System.Char[]
struct CharU5BU5D_t3566599228;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t3290756104;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t426988061;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2627701567;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3064058489;
// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1094411340;
// System.IntPtr[]
struct IntPtrU5BU5D_t4009157424;
// System.Collections.IDictionary
struct IDictionary_t4216985205;
// System.Security.Cryptography.DESTransform
struct DESTransform_t1717224131;
// System.Void
struct Void_t3330652612;
// System.AppDomain
struct AppDomain_t2950528003;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.PermissionSet
struct PermissionSet_t4130617584;
// System.UInt16[]
struct UInt16U5BU5D_t4088472488;
// System.Security.Cryptography.RSA
struct RSA_t1909077667;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3020573895;
// System.Security.Cryptography.DSA
struct DSA_t1646273368;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t3921636539;
// System.Threading.CompressedStack
struct CompressedStack_t1995594175;
// System.Type
struct Type_t;
// System.Security.IPermission
struct IPermission_t4065966292;
// System.Security.Policy.Evidence
struct Evidence_t1639151813;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t4253147657;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t873475992;
// System.Security.Cryptography.TripleDES
struct TripleDES_t690740376;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t2402153245;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t2087545210;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t2506449781;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2264152275;
// System.Byte[,]
struct ByteU5BU2CU5D_t3397361947;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef CRYPTOCONFIG_T4120743379_H
#define CRYPTOCONFIG_T4120743379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t4120743379  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t4120743379_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t1319640966 * ___algorithms_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t1319640966 * ___oid_2;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t4120743379_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t4120743379_StaticFields, ___algorithms_1)); }
	inline Hashtable_t1319640966 * get_algorithms_1() const { return ___algorithms_1; }
	inline Hashtable_t1319640966 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Hashtable_t1319640966 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}

	inline static int32_t get_offset_of_oid_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t4120743379_StaticFields, ___oid_2)); }
	inline Hashtable_t1319640966 * get_oid_2() const { return ___oid_2; }
	inline Hashtable_t1319640966 ** get_address_of_oid_2() { return &___oid_2; }
	inline void set_oid_2(Hashtable_t1319640966 * value)
	{
		___oid_2 = value;
		Il2CppCodeGenWriteBarrier((&___oid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T4120743379_H
#ifndef SHA1INTERNAL_T2087545210_H
#define SHA1INTERNAL_T2087545210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t2087545210  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t1622678856* ____H_0;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_1;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t3397361946* ____ProcessingBuffer_2;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_3;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t1622678856* ___buff_4;

public:
	inline static int32_t get_offset_of__H_0() { return static_cast<int32_t>(offsetof(SHA1Internal_t2087545210, ____H_0)); }
	inline UInt32U5BU5D_t1622678856* get__H_0() const { return ____H_0; }
	inline UInt32U5BU5D_t1622678856** get_address_of__H_0() { return &____H_0; }
	inline void set__H_0(UInt32U5BU5D_t1622678856* value)
	{
		____H_0 = value;
		Il2CppCodeGenWriteBarrier((&____H_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(SHA1Internal_t2087545210, ___count_1)); }
	inline uint64_t get_count_1() const { return ___count_1; }
	inline uint64_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(uint64_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t2087545210, ____ProcessingBuffer_2)); }
	inline ByteU5BU5D_t3397361946* get__ProcessingBuffer_2() const { return ____ProcessingBuffer_2; }
	inline ByteU5BU5D_t3397361946** get_address_of__ProcessingBuffer_2() { return &____ProcessingBuffer_2; }
	inline void set__ProcessingBuffer_2(ByteU5BU5D_t3397361946* value)
	{
		____ProcessingBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_2), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t2087545210, ____ProcessingBufferCount_3)); }
	inline int32_t get__ProcessingBufferCount_3() const { return ____ProcessingBufferCount_3; }
	inline int32_t* get_address_of__ProcessingBufferCount_3() { return &____ProcessingBufferCount_3; }
	inline void set__ProcessingBufferCount_3(int32_t value)
	{
		____ProcessingBufferCount_3 = value;
	}

	inline static int32_t get_offset_of_buff_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t2087545210, ___buff_4)); }
	inline UInt32U5BU5D_t1622678856* get_buff_4() const { return ___buff_4; }
	inline UInt32U5BU5D_t1622678856** get_address_of_buff_4() { return &___buff_4; }
	inline void set_buff_4(UInt32U5BU5D_t1622678856* value)
	{
		___buff_4 = value;
		Il2CppCodeGenWriteBarrier((&___buff_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T2087545210_H
#ifndef ATTRIBUTE_T4010989168_H
#define ATTRIBUTE_T4010989168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t4010989168  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T4010989168_H
#ifndef SHACONSTANTS_T2807363053_H
#define SHACONSTANTS_T2807363053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHAConstants
struct  SHAConstants_t2807363053  : public RuntimeObject
{
public:

public:
};

struct SHAConstants_t2807363053_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHAConstants::K1
	UInt32U5BU5D_t1622678856* ___K1_0;
	// System.UInt64[] System.Security.Cryptography.SHAConstants::K2
	UInt64U5BU5D_t2560836482* ___K2_1;

public:
	inline static int32_t get_offset_of_K1_0() { return static_cast<int32_t>(offsetof(SHAConstants_t2807363053_StaticFields, ___K1_0)); }
	inline UInt32U5BU5D_t1622678856* get_K1_0() const { return ___K1_0; }
	inline UInt32U5BU5D_t1622678856** get_address_of_K1_0() { return &___K1_0; }
	inline void set_K1_0(UInt32U5BU5D_t1622678856* value)
	{
		___K1_0 = value;
		Il2CppCodeGenWriteBarrier((&___K1_0), value);
	}

	inline static int32_t get_offset_of_K2_1() { return static_cast<int32_t>(offsetof(SHAConstants_t2807363053_StaticFields, ___K2_1)); }
	inline UInt64U5BU5D_t2560836482* get_K2_1() const { return ___K2_1; }
	inline UInt64U5BU5D_t2560836482** get_address_of_K2_1() { return &___K2_1; }
	inline void set_K2_1(UInt64U5BU5D_t2560836482* value)
	{
		___K2_1 = value;
		Il2CppCodeGenWriteBarrier((&___K2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHACONSTANTS_T2807363053_H
#ifndef SIGNATUREDESCRIPTION_T3342594191_H
#define SIGNATUREDESCRIPTION_T3342594191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t3342594191  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_DeformatterAlgorithm
	String_t* ____DeformatterAlgorithm_0;
	// System.String System.Security.Cryptography.SignatureDescription::_DigestAlgorithm
	String_t* ____DigestAlgorithm_1;
	// System.String System.Security.Cryptography.SignatureDescription::_FormatterAlgorithm
	String_t* ____FormatterAlgorithm_2;
	// System.String System.Security.Cryptography.SignatureDescription::_KeyAlgorithm
	String_t* ____KeyAlgorithm_3;

public:
	inline static int32_t get_offset_of__DeformatterAlgorithm_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t3342594191, ____DeformatterAlgorithm_0)); }
	inline String_t* get__DeformatterAlgorithm_0() const { return ____DeformatterAlgorithm_0; }
	inline String_t** get_address_of__DeformatterAlgorithm_0() { return &____DeformatterAlgorithm_0; }
	inline void set__DeformatterAlgorithm_0(String_t* value)
	{
		____DeformatterAlgorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____DeformatterAlgorithm_0), value);
	}

	inline static int32_t get_offset_of__DigestAlgorithm_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t3342594191, ____DigestAlgorithm_1)); }
	inline String_t* get__DigestAlgorithm_1() const { return ____DigestAlgorithm_1; }
	inline String_t** get_address_of__DigestAlgorithm_1() { return &____DigestAlgorithm_1; }
	inline void set__DigestAlgorithm_1(String_t* value)
	{
		____DigestAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____DigestAlgorithm_1), value);
	}

	inline static int32_t get_offset_of__FormatterAlgorithm_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t3342594191, ____FormatterAlgorithm_2)); }
	inline String_t* get__FormatterAlgorithm_2() const { return ____FormatterAlgorithm_2; }
	inline String_t** get_address_of__FormatterAlgorithm_2() { return &____FormatterAlgorithm_2; }
	inline void set__FormatterAlgorithm_2(String_t* value)
	{
		____FormatterAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____FormatterAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__KeyAlgorithm_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t3342594191, ____KeyAlgorithm_3)); }
	inline String_t* get__KeyAlgorithm_3() const { return ____KeyAlgorithm_3; }
	inline String_t** get_address_of__KeyAlgorithm_3() { return &____KeyAlgorithm_3; }
	inline void set__KeyAlgorithm_3(String_t* value)
	{
		____KeyAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&____KeyAlgorithm_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T3342594191_H
#ifndef TOBASE64TRANSFORM_T946173044_H
#define TOBASE64TRANSFORM_T946173044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t946173044  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.ToBase64Transform::m_disposed
	bool ___m_disposed_0;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(ToBase64Transform_t946173044, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T946173044_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T1946055640_H
#define STRONGNAMEPUBLICKEYBLOB_T1946055640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t1946055640  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t3397361946* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t1946055640, ___pubkey_0)); }
	inline ByteU5BU5D_t3397361946* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t3397361946** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t3397361946* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T1946055640_H
#ifndef APPLICATIONTRUST_T1938271271_H
#define APPLICATIONTRUST_T1938271271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t1938271271  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_0;

public:
	inline static int32_t get_offset_of_fullTrustAssemblies_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t1938271271, ___fullTrustAssemblies_0)); }
	inline RuntimeObject* get_fullTrustAssemblies_0() const { return ___fullTrustAssemblies_0; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_0() { return &___fullTrustAssemblies_0; }
	inline void set_fullTrustAssemblies_0(RuntimeObject* value)
	{
		___fullTrustAssemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T1938271271_H
#ifndef EVIDENCE_T1639151813_H
#define EVIDENCE_T1639151813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t1639151813  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t3144526867 * ___hostEvidenceList_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t3144526867 * ___assemblyEvidenceList_1;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_2;

public:
	inline static int32_t get_offset_of_hostEvidenceList_0() { return static_cast<int32_t>(offsetof(Evidence_t1639151813, ___hostEvidenceList_0)); }
	inline ArrayList_t3144526867 * get_hostEvidenceList_0() const { return ___hostEvidenceList_0; }
	inline ArrayList_t3144526867 ** get_address_of_hostEvidenceList_0() { return &___hostEvidenceList_0; }
	inline void set_hostEvidenceList_0(ArrayList_t3144526867 * value)
	{
		___hostEvidenceList_0 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_0), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t1639151813, ___assemblyEvidenceList_1)); }
	inline ArrayList_t3144526867 * get_assemblyEvidenceList_1() const { return ___assemblyEvidenceList_1; }
	inline ArrayList_t3144526867 ** get_address_of_assemblyEvidenceList_1() { return &___assemblyEvidenceList_1; }
	inline void set_assemblyEvidenceList_1(ArrayList_t3144526867 * value)
	{
		___assemblyEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_1), value);
	}

	inline static int32_t get_offset_of__hashCode_2() { return static_cast<int32_t>(offsetof(Evidence_t1639151813, ____hashCode_2)); }
	inline int32_t get__hashCode_2() const { return ____hashCode_2; }
	inline int32_t* get_address_of__hashCode_2() { return &____hashCode_2; }
	inline void set__hashCode_2(int32_t value)
	{
		____hashCode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T1639151813_H
#ifndef EVIDENCEENUMERATOR_T36442134_H
#define EVIDENCEENUMERATOR_T36442134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t36442134  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t36442134, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t36442134, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t36442134, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T36442134_H
#ifndef HASH_T1256859700_H
#define HASH_T1256859700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t1256859700  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t1657971740 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t3397361946* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t1256859700, ___assembly_0)); }
	inline Assembly_t1657971740 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t1657971740 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t1657971740 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t1256859700, ___data_1)); }
	inline ByteU5BU5D_t3397361946* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3397361946** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3397361946* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T1256859700_H
#ifndef STRONGNAME_T1904646785_H
#define STRONGNAME_T1904646785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t1904646785  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t1946055640 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t1550354611 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t1904646785, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t1946055640 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t1946055640 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t1946055640 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t1904646785, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t1904646785, ___version_2)); }
	inline Version_t1550354611 * get_version_2() const { return ___version_2; }
	inline Version_t1550354611 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t1550354611 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T1904646785_H
#ifndef CODEACCESSPERMISSION_T1078280153_H
#define CODEACCESSPERMISSION_T1078280153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t1078280153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T1078280153_H
#ifndef PERMISSIONSET_T4130617584_H
#define PERMISSIONSET_T4130617584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t4130617584  : public RuntimeObject
{
public:
	// System.Boolean System.Security.PermissionSet::<DeclarativeSecurity>k__BackingField
	bool ___U3CDeclarativeSecurityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PermissionSet_t4130617584, ___U3CDeclarativeSecurityU3Ek__BackingField_0)); }
	inline bool get_U3CDeclarativeSecurityU3Ek__BackingField_0() const { return ___U3CDeclarativeSecurityU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CDeclarativeSecurityU3Ek__BackingField_0() { return &___U3CDeclarativeSecurityU3Ek__BackingField_0; }
	inline void set_U3CDeclarativeSecurityU3Ek__BackingField_0(bool value)
	{
		___U3CDeclarativeSecurityU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSET_T4130617584_H
#ifndef SECURITYELEMENT_T1196116845_H
#define SECURITYELEMENT_T1196116845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t1196116845  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t3144526867 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t3144526867 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t1196116845, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t1196116845, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t1196116845, ___attributes_2)); }
	inline ArrayList_t3144526867 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t3144526867 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t3144526867 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t1196116845, ___children_3)); }
	inline ArrayList_t3144526867 * get_children_3() const { return ___children_3; }
	inline ArrayList_t3144526867 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t3144526867 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}
};

struct SecurityElement_t1196116845_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t3566599228* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t3566599228* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t3566599228* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t3566599228* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t3566599228* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t1196116845_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t3566599228* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t3566599228** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t3566599228* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_tag_chars_4), value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t1196116845_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t3566599228* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t3566599228** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t3566599228* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_text_chars_5), value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t1196116845_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t3566599228* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t3566599228** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t3566599228* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_name_chars_6), value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t1196116845_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t3566599228* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t3566599228** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t3566599228* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_value_chars_7), value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t1196116845_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t3566599228* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t3566599228** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t3566599228* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_chars_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYELEMENT_T1196116845_H
#ifndef SECURITYATTRIBUTE_T3910628450_H
#define SECURITYATTRIBUTE_T3910628450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement/SecurityAttribute
struct  SecurityAttribute_t3910628450  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement/SecurityAttribute::_name
	String_t* ____name_0;
	// System.String System.Security.SecurityElement/SecurityAttribute::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3910628450, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t3910628450, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3910628450_H
#ifndef SECURITYMANAGER_T3985798016_H
#define SECURITYMANAGER_T3985798016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t3985798016  : public RuntimeObject
{
public:

public:
};

struct SecurityManager_t3985798016_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	RuntimeObject * ____lockObject_0;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t1319640966 * ____declsecCache_1;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t3290756104 * ____execution_2;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t3985798016_StaticFields, ____lockObject_0)); }
	inline RuntimeObject * get__lockObject_0() const { return ____lockObject_0; }
	inline RuntimeObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(RuntimeObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&____lockObject_0), value);
	}

	inline static int32_t get_offset_of__declsecCache_1() { return static_cast<int32_t>(offsetof(SecurityManager_t3985798016_StaticFields, ____declsecCache_1)); }
	inline Hashtable_t1319640966 * get__declsecCache_1() const { return ____declsecCache_1; }
	inline Hashtable_t1319640966 ** get_address_of__declsecCache_1() { return &____declsecCache_1; }
	inline void set__declsecCache_1(Hashtable_t1319640966 * value)
	{
		____declsecCache_1 = value;
		Il2CppCodeGenWriteBarrier((&____declsecCache_1), value);
	}

	inline static int32_t get_offset_of__execution_2() { return static_cast<int32_t>(offsetof(SecurityManager_t3985798016_StaticFields, ____execution_2)); }
	inline SecurityPermission_t3290756104 * get__execution_2() const { return ____execution_2; }
	inline SecurityPermission_t3290756104 ** get_address_of__execution_2() { return &____execution_2; }
	inline void set__execution_2(SecurityPermission_t3290756104 * value)
	{
		____execution_2 = value;
		Il2CppCodeGenWriteBarrier((&____execution_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYMANAGER_T3985798016_H
#ifndef SYMMETRICTRANSFORM_T3345582722_H
#define SYMMETRICTRANSFORM_T3345582722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3345582722  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t426988061 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t3397361946* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t3397361946* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t3397361946* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t3397361946* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t2627701567 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ___algo_0)); }
	inline SymmetricAlgorithm_t426988061 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t426988061 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t426988061 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ___temp_3)); }
	inline ByteU5BU5D_t3397361946* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t3397361946** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t3397361946* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ___temp2_4)); }
	inline ByteU5BU5D_t3397361946* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t3397361946** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t3397361946* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ___workBuff_5)); }
	inline ByteU5BU5D_t3397361946* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t3397361946** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t3397361946* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ___workout_6)); }
	inline ByteU5BU5D_t3397361946* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t3397361946** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t3397361946* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3345582722, ____rng_11)); }
	inline RandomNumberGenerator_t2627701567 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t2627701567 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t2627701567 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3345582722_H
#ifndef ASYMMETRICALGORITHM_T4253526706_H
#define ASYMMETRICALGORITHM_T4253526706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t4253526706  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t3064058489* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t4253526706, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t4253526706, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t3064058489* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t3064058489** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t3064058489* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T4253526706_H
#ifndef VALUETYPE_T2712619979_H
#define VALUETYPE_T2712619979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2712619979  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2712619979_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2712619979_marshaled_com
{
};
#endif // VALUETYPE_T2712619979_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T1076929403_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T1076929403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t1076929403  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T1076929403_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T2996736280_H
#define ASYMMETRICSIGNATUREFORMATTER_T2996736280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t2996736280  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T2996736280_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T1023617549_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T1023617549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t1023617549  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T1023617549_H
#ifndef RIJNDAELMANAGEDTRANSFORM_T3773063286_H
#define RIJNDAELMANAGEDTRANSFORM_T3773063286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransform
struct  RijndaelManagedTransform_t3773063286  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RijndaelTransform System.Security.Cryptography.RijndaelManagedTransform::_st
	RijndaelTransform_t1094411340 * ____st_0;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::_bs
	int32_t ____bs_1;

public:
	inline static int32_t get_offset_of__st_0() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t3773063286, ____st_0)); }
	inline RijndaelTransform_t1094411340 * get__st_0() const { return ____st_0; }
	inline RijndaelTransform_t1094411340 ** get_address_of__st_0() { return &____st_0; }
	inline void set__st_0(RijndaelTransform_t1094411340 * value)
	{
		____st_0 = value;
		Il2CppCodeGenWriteBarrier((&____st_0), value);
	}

	inline static int32_t get_offset_of__bs_1() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t3773063286, ____bs_1)); }
	inline int32_t get__bs_1() const { return ____bs_1; }
	inline int32_t* get_address_of__bs_1() { return &____bs_1; }
	inline void set__bs_1(int32_t value)
	{
		____bs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGEDTRANSFORM_T3773063286_H
#ifndef RANDOMNUMBERGENERATOR_T2627701567_H
#define RANDOMNUMBERGENERATOR_T2627701567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t2627701567  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T2627701567_H
#ifndef EXCEPTION_T682190877_H
#define EXCEPTION_T682190877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t682190877  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4009157424* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t682190877 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t682190877, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4009157424* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4009157424** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4009157424* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t682190877, ___inner_exception_1)); }
	inline Exception_t682190877 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t682190877 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t682190877 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t682190877, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t682190877, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t682190877, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t682190877, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t682190877, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t682190877, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t682190877, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t682190877, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t682190877, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T682190877_H
#ifndef HASHALGORITHM_T3020573895_H
#define HASHALGORITHM_T3020573895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t3020573895  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t3397361946* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3020573895, ___HashValue_0)); }
	inline ByteU5BU5D_t3397361946* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t3397361946** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t3397361946* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3020573895, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3020573895, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3020573895, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T3020573895_H
#ifndef KEYSIZES_T4161369320_H
#define KEYSIZES_T4161369320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t4161369320  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::_maxSize
	int32_t ____maxSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::_minSize
	int32_t ____minSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::_skipSize
	int32_t ____skipSize_2;

public:
	inline static int32_t get_offset_of__maxSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t4161369320, ____maxSize_0)); }
	inline int32_t get__maxSize_0() const { return ____maxSize_0; }
	inline int32_t* get_address_of__maxSize_0() { return &____maxSize_0; }
	inline void set__maxSize_0(int32_t value)
	{
		____maxSize_0 = value;
	}

	inline static int32_t get_offset_of__minSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t4161369320, ____minSize_1)); }
	inline int32_t get__minSize_1() const { return ____minSize_1; }
	inline int32_t* get_address_of__minSize_1() { return &____minSize_1; }
	inline void set__minSize_1(int32_t value)
	{
		____minSize_1 = value;
	}

	inline static int32_t get_offset_of__skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t4161369320, ____skipSize_2)); }
	inline int32_t get__skipSize_2() const { return ____skipSize_2; }
	inline int32_t* get_address_of__skipSize_2() { return &____skipSize_2; }
	inline void set__skipSize_2(int32_t value)
	{
		____skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T4161369320_H
#ifndef TRIPLEDESTRANSFORM_T1210516750_H
#define TRIPLEDESTRANSFORM_T1210516750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t1210516750  : public SymmetricTransform_t3345582722
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t1717224131 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t1717224131 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t1717224131 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t1717224131 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t1717224131 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t1717224131 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1210516750, ___E1_12)); }
	inline DESTransform_t1717224131 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t1717224131 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t1717224131 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1210516750, ___D2_13)); }
	inline DESTransform_t1717224131 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t1717224131 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t1717224131 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1210516750, ___E3_14)); }
	inline DESTransform_t1717224131 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t1717224131 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t1717224131 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1210516750, ___D1_15)); }
	inline DESTransform_t1717224131 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t1717224131 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t1717224131 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1210516750, ___E2_16)); }
	inline DESTransform_t1717224131 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t1717224131 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t1717224131 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1210516750, ___D3_17)); }
	inline DESTransform_t1717224131 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t1717224131 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t1717224131 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T1210516750_H
#ifndef ENUM_T3357960412_H
#define ENUM_T3357960412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3357960412  : public ValueType_t2712619979
{
public:

public:
};

struct Enum_t3357960412_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3566599228* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3357960412_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3566599228* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3566599228** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3566599228* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3357960412_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3357960412_marshaled_com
{
};
#endif // ENUM_T3357960412_H
#ifndef SYSTEMEXCEPTION_T693248299_H
#define SYSTEMEXCEPTION_T693248299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t693248299  : public Exception_t682190877
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T693248299_H
#ifndef DSA_T1646273368_H
#define DSA_T1646273368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t1646273368  : public AsymmetricAlgorithm_t4253526706
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T1646273368_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2735384773_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2735384773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t2735384773  : public SignatureDescription_t3342594191
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2735384773_H
#ifndef DSASIGNATUREDESCRIPTION_T1684526059_H
#define DSASIGNATUREDESCRIPTION_T1684526059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t1684526059  : public SignatureDescription_t3342594191
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T1684526059_H
#ifndef DSAPARAMETERS_T4293347583_H
#define DSAPARAMETERS_T4293347583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t4293347583 
{
public:
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t3397361946* ___G_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t3397361946* ___J_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t3397361946* ___P_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t3397361946* ___Q_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t3397361946* ___Seed_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t3397361946* ___X_6;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t3397361946* ___Y_7;

public:
	inline static int32_t get_offset_of_Counter_0() { return static_cast<int32_t>(offsetof(DSAParameters_t4293347583, ___Counter_0)); }
	inline int32_t get_Counter_0() const { return ___Counter_0; }
	inline int32_t* get_address_of_Counter_0() { return &___Counter_0; }
	inline void set_Counter_0(int32_t value)
	{
		___Counter_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(DSAParameters_t4293347583, ___G_1)); }
	inline ByteU5BU5D_t3397361946* get_G_1() const { return ___G_1; }
	inline ByteU5BU5D_t3397361946** get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(ByteU5BU5D_t3397361946* value)
	{
		___G_1 = value;
		Il2CppCodeGenWriteBarrier((&___G_1), value);
	}

	inline static int32_t get_offset_of_J_2() { return static_cast<int32_t>(offsetof(DSAParameters_t4293347583, ___J_2)); }
	inline ByteU5BU5D_t3397361946* get_J_2() const { return ___J_2; }
	inline ByteU5BU5D_t3397361946** get_address_of_J_2() { return &___J_2; }
	inline void set_J_2(ByteU5BU5D_t3397361946* value)
	{
		___J_2 = value;
		Il2CppCodeGenWriteBarrier((&___J_2), value);
	}

	inline static int32_t get_offset_of_P_3() { return static_cast<int32_t>(offsetof(DSAParameters_t4293347583, ___P_3)); }
	inline ByteU5BU5D_t3397361946* get_P_3() const { return ___P_3; }
	inline ByteU5BU5D_t3397361946** get_address_of_P_3() { return &___P_3; }
	inline void set_P_3(ByteU5BU5D_t3397361946* value)
	{
		___P_3 = value;
		Il2CppCodeGenWriteBarrier((&___P_3), value);
	}

	inline static int32_t get_offset_of_Q_4() { return static_cast<int32_t>(offsetof(DSAParameters_t4293347583, ___Q_4)); }
	inline ByteU5BU5D_t3397361946* get_Q_4() const { return ___Q_4; }
	inline ByteU5BU5D_t3397361946** get_address_of_Q_4() { return &___Q_4; }
	inline void set_Q_4(ByteU5BU5D_t3397361946* value)
	{
		___Q_4 = value;
		Il2CppCodeGenWriteBarrier((&___Q_4), value);
	}

	inline static int32_t get_offset_of_Seed_5() { return static_cast<int32_t>(offsetof(DSAParameters_t4293347583, ___Seed_5)); }
	inline ByteU5BU5D_t3397361946* get_Seed_5() const { return ___Seed_5; }
	inline ByteU5BU5D_t3397361946** get_address_of_Seed_5() { return &___Seed_5; }
	inline void set_Seed_5(ByteU5BU5D_t3397361946* value)
	{
		___Seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_5), value);
	}

	inline static int32_t get_offset_of_X_6() { return static_cast<int32_t>(offsetof(DSAParameters_t4293347583, ___X_6)); }
	inline ByteU5BU5D_t3397361946* get_X_6() const { return ___X_6; }
	inline ByteU5BU5D_t3397361946** get_address_of_X_6() { return &___X_6; }
	inline void set_X_6(ByteU5BU5D_t3397361946* value)
	{
		___X_6 = value;
		Il2CppCodeGenWriteBarrier((&___X_6), value);
	}

	inline static int32_t get_offset_of_Y_7() { return static_cast<int32_t>(offsetof(DSAParameters_t4293347583, ___Y_7)); }
	inline ByteU5BU5D_t3397361946* get_Y_7() const { return ___Y_7; }
	inline ByteU5BU5D_t3397361946** get_address_of_Y_7() { return &___Y_7; }
	inline void set_Y_7(ByteU5BU5D_t3397361946* value)
	{
		___Y_7 = value;
		Il2CppCodeGenWriteBarrier((&___Y_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t4293347583_marshaled_pinvoke
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t4293347583_marshaled_com
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
#endif // DSAPARAMETERS_T4293347583_H
#ifndef SECURITYFRAME_T2203999178_H
#define SECURITYFRAME_T2203999178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityFrame
struct  SecurityFrame_t2203999178 
{
public:
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t2950528003 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t4130617584 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t4130617584 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t4130617584 * ____permitonly_4;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(SecurityFrame_t2203999178, ____domain_0)); }
	inline AppDomain_t2950528003 * get__domain_0() const { return ____domain_0; }
	inline AppDomain_t2950528003 ** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(AppDomain_t2950528003 * value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier((&____domain_0), value);
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(SecurityFrame_t2203999178, ____method_1)); }
	inline MethodInfo_t * get__method_1() const { return ____method_1; }
	inline MethodInfo_t ** get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(MethodInfo_t * value)
	{
		____method_1 = value;
		Il2CppCodeGenWriteBarrier((&____method_1), value);
	}

	inline static int32_t get_offset_of__assert_2() { return static_cast<int32_t>(offsetof(SecurityFrame_t2203999178, ____assert_2)); }
	inline PermissionSet_t4130617584 * get__assert_2() const { return ____assert_2; }
	inline PermissionSet_t4130617584 ** get_address_of__assert_2() { return &____assert_2; }
	inline void set__assert_2(PermissionSet_t4130617584 * value)
	{
		____assert_2 = value;
		Il2CppCodeGenWriteBarrier((&____assert_2), value);
	}

	inline static int32_t get_offset_of__deny_3() { return static_cast<int32_t>(offsetof(SecurityFrame_t2203999178, ____deny_3)); }
	inline PermissionSet_t4130617584 * get__deny_3() const { return ____deny_3; }
	inline PermissionSet_t4130617584 ** get_address_of__deny_3() { return &____deny_3; }
	inline void set__deny_3(PermissionSet_t4130617584 * value)
	{
		____deny_3 = value;
		Il2CppCodeGenWriteBarrier((&____deny_3), value);
	}

	inline static int32_t get_offset_of__permitonly_4() { return static_cast<int32_t>(offsetof(SecurityFrame_t2203999178, ____permitonly_4)); }
	inline PermissionSet_t4130617584 * get__permitonly_4() const { return ____permitonly_4; }
	inline PermissionSet_t4130617584 ** get_address_of__permitonly_4() { return &____permitonly_4; }
	inline void set__permitonly_4(PermissionSet_t4130617584 * value)
	{
		____permitonly_4 = value;
		Il2CppCodeGenWriteBarrier((&____permitonly_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.SecurityFrame
struct SecurityFrame_t2203999178_marshaled_pinvoke
{
	AppDomain_t2950528003 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t4130617584 * ____assert_2;
	PermissionSet_t4130617584 * ____deny_3;
	PermissionSet_t4130617584 * ____permitonly_4;
};
// Native definition for COM marshalling of System.Security.SecurityFrame
struct SecurityFrame_t2203999178_marshaled_com
{
	AppDomain_t2950528003 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t4130617584 * ____assert_2;
	PermissionSet_t4130617584 * ____deny_3;
	PermissionSet_t4130617584 * ____permitonly_4;
};
#endif // SECURITYFRAME_T2203999178_H
#ifndef SHA512_T2085254558_H
#define SHA512_T2085254558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t2085254558  : public HashAlgorithm_t3020573895
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T2085254558_H
#ifndef KEYEDHASHALGORITHM_T1281792781_H
#define KEYEDHASHALGORITHM_T1281792781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t1281792781  : public HashAlgorithm_t3020573895
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t3397361946* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t1281792781, ___KeyValue_4)); }
	inline ByteU5BU5D_t3397361946* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t3397361946** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t3397361946* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T1281792781_H
#ifndef SHA384_T44229731_H
#define SHA384_T44229731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t44229731  : public HashAlgorithm_t3020573895
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T44229731_H
#ifndef SHA256_T3633591320_H
#define SHA256_T3633591320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t3633591320  : public HashAlgorithm_t3020573895
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T3633591320_H
#ifndef SHA1_T1243280877_H
#define SHA1_T1243280877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t1243280877  : public HashAlgorithm_t3020573895
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T1243280877_H
#ifndef DESTRANSFORM_T1717224131_H
#define DESTRANSFORM_T1717224131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t1717224131  : public SymmetricTransform_t3345582722
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t3397361946* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t3397361946* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t1622678856* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131, ___keySchedule_16)); }
	inline ByteU5BU5D_t3397361946* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t3397361946** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t3397361946* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131, ___byteBuff_17)); }
	inline ByteU5BU5D_t3397361946* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t3397361946** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t3397361946* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t1622678856* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t1622678856** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t1622678856* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t1717224131_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t1622678856* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t3397361946* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t3397361946* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t3397361946* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t1622678856* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t1622678856* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t1622678856* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t1622678856** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t1622678856* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t3397361946* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t3397361946** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t3397361946* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t3397361946* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t3397361946** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t3397361946* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t3397361946* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t3397361946** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t3397361946* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t1622678856* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t1622678856** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t1622678856* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t1717224131_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t1622678856* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t1622678856** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t1622678856* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T1717224131_H
#ifndef RIJNDAELTRANSFORM_T1094411340_H
#define RIJNDAELTRANSFORM_T1094411340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelTransform
struct  RijndaelTransform_t1094411340  : public SymmetricTransform_t3345582722
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::expandedKey
	UInt32U5BU5D_t1622678856* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nb
	int32_t ___Nb_13;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nk
	int32_t ___Nk_14;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nr
	int32_t ___Nr_15;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340, ___expandedKey_12)); }
	inline UInt32U5BU5D_t1622678856* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t1622678856** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t1622678856* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nb_13() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340, ___Nb_13)); }
	inline int32_t get_Nb_13() const { return ___Nb_13; }
	inline int32_t* get_address_of_Nb_13() { return &___Nb_13; }
	inline void set_Nb_13(int32_t value)
	{
		___Nb_13 = value;
	}

	inline static int32_t get_offset_of_Nk_14() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340, ___Nk_14)); }
	inline int32_t get_Nk_14() const { return ___Nk_14; }
	inline int32_t* get_address_of_Nk_14() { return &___Nk_14; }
	inline void set_Nk_14(int32_t value)
	{
		___Nk_14 = value;
	}

	inline static int32_t get_offset_of_Nr_15() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340, ___Nr_15)); }
	inline int32_t get_Nr_15() const { return ___Nr_15; }
	inline int32_t* get_address_of_Nr_15() { return &___Nr_15; }
	inline void set_Nr_15(int32_t value)
	{
		___Nr_15 = value;
	}
};

struct RijndaelTransform_t1094411340_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::Rcon
	UInt32U5BU5D_t1622678856* ___Rcon_16;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::SBox
	ByteU5BU5D_t3397361946* ___SBox_17;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::iSBox
	ByteU5BU5D_t3397361946* ___iSBox_18;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T0
	UInt32U5BU5D_t1622678856* ___T0_19;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T1
	UInt32U5BU5D_t1622678856* ___T1_20;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T2
	UInt32U5BU5D_t1622678856* ___T2_21;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T3
	UInt32U5BU5D_t1622678856* ___T3_22;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT0
	UInt32U5BU5D_t1622678856* ___iT0_23;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT1
	UInt32U5BU5D_t1622678856* ___iT1_24;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT2
	UInt32U5BU5D_t1622678856* ___iT2_25;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT3
	UInt32U5BU5D_t1622678856* ___iT3_26;

public:
	inline static int32_t get_offset_of_Rcon_16() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340_StaticFields, ___Rcon_16)); }
	inline UInt32U5BU5D_t1622678856* get_Rcon_16() const { return ___Rcon_16; }
	inline UInt32U5BU5D_t1622678856** get_address_of_Rcon_16() { return &___Rcon_16; }
	inline void set_Rcon_16(UInt32U5BU5D_t1622678856* value)
	{
		___Rcon_16 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_16), value);
	}

	inline static int32_t get_offset_of_SBox_17() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340_StaticFields, ___SBox_17)); }
	inline ByteU5BU5D_t3397361946* get_SBox_17() const { return ___SBox_17; }
	inline ByteU5BU5D_t3397361946** get_address_of_SBox_17() { return &___SBox_17; }
	inline void set_SBox_17(ByteU5BU5D_t3397361946* value)
	{
		___SBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_17), value);
	}

	inline static int32_t get_offset_of_iSBox_18() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340_StaticFields, ___iSBox_18)); }
	inline ByteU5BU5D_t3397361946* get_iSBox_18() const { return ___iSBox_18; }
	inline ByteU5BU5D_t3397361946** get_address_of_iSBox_18() { return &___iSBox_18; }
	inline void set_iSBox_18(ByteU5BU5D_t3397361946* value)
	{
		___iSBox_18 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_18), value);
	}

	inline static int32_t get_offset_of_T0_19() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340_StaticFields, ___T0_19)); }
	inline UInt32U5BU5D_t1622678856* get_T0_19() const { return ___T0_19; }
	inline UInt32U5BU5D_t1622678856** get_address_of_T0_19() { return &___T0_19; }
	inline void set_T0_19(UInt32U5BU5D_t1622678856* value)
	{
		___T0_19 = value;
		Il2CppCodeGenWriteBarrier((&___T0_19), value);
	}

	inline static int32_t get_offset_of_T1_20() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340_StaticFields, ___T1_20)); }
	inline UInt32U5BU5D_t1622678856* get_T1_20() const { return ___T1_20; }
	inline UInt32U5BU5D_t1622678856** get_address_of_T1_20() { return &___T1_20; }
	inline void set_T1_20(UInt32U5BU5D_t1622678856* value)
	{
		___T1_20 = value;
		Il2CppCodeGenWriteBarrier((&___T1_20), value);
	}

	inline static int32_t get_offset_of_T2_21() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340_StaticFields, ___T2_21)); }
	inline UInt32U5BU5D_t1622678856* get_T2_21() const { return ___T2_21; }
	inline UInt32U5BU5D_t1622678856** get_address_of_T2_21() { return &___T2_21; }
	inline void set_T2_21(UInt32U5BU5D_t1622678856* value)
	{
		___T2_21 = value;
		Il2CppCodeGenWriteBarrier((&___T2_21), value);
	}

	inline static int32_t get_offset_of_T3_22() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340_StaticFields, ___T3_22)); }
	inline UInt32U5BU5D_t1622678856* get_T3_22() const { return ___T3_22; }
	inline UInt32U5BU5D_t1622678856** get_address_of_T3_22() { return &___T3_22; }
	inline void set_T3_22(UInt32U5BU5D_t1622678856* value)
	{
		___T3_22 = value;
		Il2CppCodeGenWriteBarrier((&___T3_22), value);
	}

	inline static int32_t get_offset_of_iT0_23() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340_StaticFields, ___iT0_23)); }
	inline UInt32U5BU5D_t1622678856* get_iT0_23() const { return ___iT0_23; }
	inline UInt32U5BU5D_t1622678856** get_address_of_iT0_23() { return &___iT0_23; }
	inline void set_iT0_23(UInt32U5BU5D_t1622678856* value)
	{
		___iT0_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_23), value);
	}

	inline static int32_t get_offset_of_iT1_24() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340_StaticFields, ___iT1_24)); }
	inline UInt32U5BU5D_t1622678856* get_iT1_24() const { return ___iT1_24; }
	inline UInt32U5BU5D_t1622678856** get_address_of_iT1_24() { return &___iT1_24; }
	inline void set_iT1_24(UInt32U5BU5D_t1622678856* value)
	{
		___iT1_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_24), value);
	}

	inline static int32_t get_offset_of_iT2_25() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340_StaticFields, ___iT2_25)); }
	inline UInt32U5BU5D_t1622678856* get_iT2_25() const { return ___iT2_25; }
	inline UInt32U5BU5D_t1622678856** get_address_of_iT2_25() { return &___iT2_25; }
	inline void set_iT2_25(UInt32U5BU5D_t1622678856* value)
	{
		___iT2_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_25), value);
	}

	inline static int32_t get_offset_of_iT3_26() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1094411340_StaticFields, ___iT3_26)); }
	inline UInt32U5BU5D_t1622678856* get_iT3_26() const { return ___iT3_26; }
	inline UInt32U5BU5D_t1622678856** get_address_of_iT3_26() { return &___iT3_26; }
	inline void set_iT3_26(UInt32U5BU5D_t1622678856* value)
	{
		___iT3_26 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELTRANSFORM_T1094411340_H
#ifndef SECURITYATTRIBUTE_T2289572587_H
#define SECURITYATTRIBUTE_T2289572587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t2289572587  : public Attribute_t4010989168
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T2289572587_H
#ifndef RC2TRANSFORM_T3182853409_H
#define RC2TRANSFORM_T3182853409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t3182853409  : public SymmetricTransform_t3345582722
{
public:
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t4088472488* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t3182853409, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t3182853409, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t3182853409, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t3182853409, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t3182853409, ___K_16)); }
	inline UInt16U5BU5D_t4088472488* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t4088472488** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t4088472488* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((&___K_16), value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t3182853409, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t3182853409_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t3397361946* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t3182853409_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_t3397361946* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_t3397361946** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_t3397361946* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((&___pitable_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2TRANSFORM_T3182853409_H
#ifndef RIPEMD160_T551569107_H
#define RIPEMD160_T551569107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160
struct  RIPEMD160_t551569107  : public HashAlgorithm_t3020573895
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160_T551569107_H
#ifndef RSA_T1909077667_H
#define RSA_T1909077667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t1909077667  : public AsymmetricAlgorithm_t4253526706
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T1909077667_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T2361327088_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T2361327088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t2361327088  : public AsymmetricKeyExchangeFormatter_t1023617549
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t1909077667 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t2627701567 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2361327088, ___rsa_0)); }
	inline RSA_t1909077667 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t1909077667 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t1909077667 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2361327088, ___random_1)); }
	inline RandomNumberGenerator_t2627701567 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t2627701567 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t2627701567 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T2361327088_H
#ifndef MD5_T2071519431_H
#define MD5_T2071519431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t2071519431  : public HashAlgorithm_t3020573895
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T2071519431_H
#ifndef RSAPKCS1SIGNATUREFORMATTER_T1139705126_H
#define RSAPKCS1SIGNATUREFORMATTER_T1139705126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t1139705126  : public AsymmetricSignatureFormatter_t2996736280
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t1909077667 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t3020573895 * ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t1139705126, ___rsa_0)); }
	inline RSA_t1909077667 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t1909077667 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t1909077667 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t1139705126, ___hash_1)); }
	inline HashAlgorithm_t3020573895 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t3020573895 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t3020573895 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREFORMATTER_T1139705126_H
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T3569926127_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T3569926127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t3569926127  : public AsymmetricSignatureDeformatter_t1076929403
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t1909077667 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3569926127, ___rsa_0)); }
	inline RSA_t1909077667 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t1909077667 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t1909077667 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t3569926127, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T3569926127_H
#ifndef DSASIGNATUREDEFORMATTER_T278173625_H
#define DSASIGNATUREDEFORMATTER_T278173625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t278173625  : public AsymmetricSignatureDeformatter_t1076929403
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t1646273368 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t278173625, ___dsa_0)); }
	inline DSA_t1646273368 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t1646273368 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t1646273368 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T278173625_H
#ifndef DSASIGNATUREFORMATTER_T3635949704_H
#define DSASIGNATUREFORMATTER_T3635949704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t3635949704  : public AsymmetricSignatureFormatter_t2996736280
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::dsa
	DSA_t1646273368 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t3635949704, ___dsa_0)); }
	inline DSA_t1646273368 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t1646273368 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t1646273368 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREFORMATTER_T3635949704_H
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T2573557873_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T2573557873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t2573557873  : public Attribute_t4010989168
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T2573557873_H
#ifndef RSAPARAMETERS_T3025826843_H
#define RSAPARAMETERS_T3025826843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t3025826843 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t3397361946* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t3397361946* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t3397361946* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t3397361946* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t3397361946* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t3397361946* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t3397361946* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t3397361946* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t3025826843, ___P_0)); }
	inline ByteU5BU5D_t3397361946* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t3397361946** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t3397361946* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t3025826843, ___Q_1)); }
	inline ByteU5BU5D_t3397361946* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t3397361946** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t3397361946* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t3025826843, ___D_2)); }
	inline ByteU5BU5D_t3397361946* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t3397361946** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t3397361946* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t3025826843, ___DP_3)); }
	inline ByteU5BU5D_t3397361946* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t3397361946** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t3397361946* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t3025826843, ___DQ_4)); }
	inline ByteU5BU5D_t3397361946* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t3397361946** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t3397361946* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t3025826843, ___InverseQ_5)); }
	inline ByteU5BU5D_t3397361946* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t3397361946** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t3397361946* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t3025826843, ___Modulus_6)); }
	inline ByteU5BU5D_t3397361946* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t3397361946** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t3397361946* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t3025826843, ___Exponent_7)); }
	inline ByteU5BU5D_t3397361946* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t3397361946** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t3397361946* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t3025826843_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t3025826843_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T3025826843_H
#ifndef HMAC_T1158936799_H
#define HMAC_T1158936799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t1158936799  : public KeyedHashAlgorithm_t1281792781
{
public:
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed_5;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t3020573895 * ____algo_7;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t3921636539 * ____block_8;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue_9;

public:
	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(HMAC_t1158936799, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t1158936799, ____hashName_6)); }
	inline String_t* get__hashName_6() const { return ____hashName_6; }
	inline String_t** get_address_of__hashName_6() { return &____hashName_6; }
	inline void set__hashName_6(String_t* value)
	{
		____hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_6), value);
	}

	inline static int32_t get_offset_of__algo_7() { return static_cast<int32_t>(offsetof(HMAC_t1158936799, ____algo_7)); }
	inline HashAlgorithm_t3020573895 * get__algo_7() const { return ____algo_7; }
	inline HashAlgorithm_t3020573895 ** get_address_of__algo_7() { return &____algo_7; }
	inline void set__algo_7(HashAlgorithm_t3020573895 * value)
	{
		____algo_7 = value;
		Il2CppCodeGenWriteBarrier((&____algo_7), value);
	}

	inline static int32_t get_offset_of__block_8() { return static_cast<int32_t>(offsetof(HMAC_t1158936799, ____block_8)); }
	inline BlockProcessor_t3921636539 * get__block_8() const { return ____block_8; }
	inline BlockProcessor_t3921636539 ** get_address_of__block_8() { return &____block_8; }
	inline void set__block_8(BlockProcessor_t3921636539 * value)
	{
		____block_8 = value;
		Il2CppCodeGenWriteBarrier((&____block_8), value);
	}

	inline static int32_t get_offset_of__blockSizeValue_9() { return static_cast<int32_t>(offsetof(HMAC_t1158936799, ____blockSizeValue_9)); }
	inline int32_t get__blockSizeValue_9() const { return ____blockSizeValue_9; }
	inline int32_t* get_address_of__blockSizeValue_9() { return &____blockSizeValue_9; }
	inline void set__blockSizeValue_9(int32_t value)
	{
		____blockSizeValue_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T1158936799_H
#ifndef SECURITYCONTEXT_T4050579935_H
#define SECURITYCONTEXT_T4050579935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityContext
struct  SecurityContext_t4050579935  : public RuntimeObject
{
public:
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture_0;
	// System.IntPtr System.Security.SecurityContext::_winid
	IntPtr_t ____winid_1;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t1995594175 * ____stack_2;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow_3;

public:
	inline static int32_t get_offset_of__capture_0() { return static_cast<int32_t>(offsetof(SecurityContext_t4050579935, ____capture_0)); }
	inline bool get__capture_0() const { return ____capture_0; }
	inline bool* get_address_of__capture_0() { return &____capture_0; }
	inline void set__capture_0(bool value)
	{
		____capture_0 = value;
	}

	inline static int32_t get_offset_of__winid_1() { return static_cast<int32_t>(offsetof(SecurityContext_t4050579935, ____winid_1)); }
	inline IntPtr_t get__winid_1() const { return ____winid_1; }
	inline IntPtr_t* get_address_of__winid_1() { return &____winid_1; }
	inline void set__winid_1(IntPtr_t value)
	{
		____winid_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(SecurityContext_t4050579935, ____stack_2)); }
	inline CompressedStack_t1995594175 * get__stack_2() const { return ____stack_2; }
	inline CompressedStack_t1995594175 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(CompressedStack_t1995594175 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((&____stack_2), value);
	}

	inline static int32_t get_offset_of__suppressFlow_3() { return static_cast<int32_t>(offsetof(SecurityContext_t4050579935, ____suppressFlow_3)); }
	inline bool get__suppressFlow_3() const { return ____suppressFlow_3; }
	inline bool* get_address_of__suppressFlow_3() { return &____suppressFlow_3; }
	inline void set__suppressFlow_3(bool value)
	{
		____suppressFlow_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCONTEXT_T4050579935_H
#ifndef SECURITYEXCEPTION_T1116239675_H
#define SECURITYEXCEPTION_T1116239675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t1116239675  : public SystemException_t693248299
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t1639151813 * ____evidence_18;

public:
	inline static int32_t get_offset_of_permissionState_11() { return static_cast<int32_t>(offsetof(SecurityException_t1116239675, ___permissionState_11)); }
	inline String_t* get_permissionState_11() const { return ___permissionState_11; }
	inline String_t** get_address_of_permissionState_11() { return &___permissionState_11; }
	inline void set_permissionState_11(String_t* value)
	{
		___permissionState_11 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_11), value);
	}

	inline static int32_t get_offset_of_permissionType_12() { return static_cast<int32_t>(offsetof(SecurityException_t1116239675, ___permissionType_12)); }
	inline Type_t * get_permissionType_12() const { return ___permissionType_12; }
	inline Type_t ** get_address_of_permissionType_12() { return &___permissionType_12; }
	inline void set_permissionType_12(Type_t * value)
	{
		___permissionType_12 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_12), value);
	}

	inline static int32_t get_offset_of__granted_13() { return static_cast<int32_t>(offsetof(SecurityException_t1116239675, ____granted_13)); }
	inline String_t* get__granted_13() const { return ____granted_13; }
	inline String_t** get_address_of__granted_13() { return &____granted_13; }
	inline void set__granted_13(String_t* value)
	{
		____granted_13 = value;
		Il2CppCodeGenWriteBarrier((&____granted_13), value);
	}

	inline static int32_t get_offset_of__refused_14() { return static_cast<int32_t>(offsetof(SecurityException_t1116239675, ____refused_14)); }
	inline String_t* get__refused_14() const { return ____refused_14; }
	inline String_t** get_address_of__refused_14() { return &____refused_14; }
	inline void set__refused_14(String_t* value)
	{
		____refused_14 = value;
		Il2CppCodeGenWriteBarrier((&____refused_14), value);
	}

	inline static int32_t get_offset_of__demanded_15() { return static_cast<int32_t>(offsetof(SecurityException_t1116239675, ____demanded_15)); }
	inline RuntimeObject * get__demanded_15() const { return ____demanded_15; }
	inline RuntimeObject ** get_address_of__demanded_15() { return &____demanded_15; }
	inline void set__demanded_15(RuntimeObject * value)
	{
		____demanded_15 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_15), value);
	}

	inline static int32_t get_offset_of__firstperm_16() { return static_cast<int32_t>(offsetof(SecurityException_t1116239675, ____firstperm_16)); }
	inline RuntimeObject* get__firstperm_16() const { return ____firstperm_16; }
	inline RuntimeObject** get_address_of__firstperm_16() { return &____firstperm_16; }
	inline void set__firstperm_16(RuntimeObject* value)
	{
		____firstperm_16 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_16), value);
	}

	inline static int32_t get_offset_of__method_17() { return static_cast<int32_t>(offsetof(SecurityException_t1116239675, ____method_17)); }
	inline MethodInfo_t * get__method_17() const { return ____method_17; }
	inline MethodInfo_t ** get_address_of__method_17() { return &____method_17; }
	inline void set__method_17(MethodInfo_t * value)
	{
		____method_17 = value;
		Il2CppCodeGenWriteBarrier((&____method_17), value);
	}

	inline static int32_t get_offset_of__evidence_18() { return static_cast<int32_t>(offsetof(SecurityException_t1116239675, ____evidence_18)); }
	inline Evidence_t1639151813 * get__evidence_18() const { return ____evidence_18; }
	inline Evidence_t1639151813 ** get_address_of__evidence_18() { return &____evidence_18; }
	inline void set__evidence_18(Evidence_t1639151813 * value)
	{
		____evidence_18 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T1116239675_H
#ifndef SECURITYCRITICALSCOPE_T3975470865_H
#define SECURITYCRITICALSCOPE_T3975470865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalScope
struct  SecurityCriticalScope_t3975470865 
{
public:
	// System.Int32 System.Security.SecurityCriticalScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCriticalScope_t3975470865, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALSCOPE_T3975470865_H
#ifndef PRINCIPALPOLICY_T387568995_H
#define PRINCIPALPOLICY_T387568995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t387568995 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t387568995, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRINCIPALPOLICY_T387568995_H
#ifndef WINDOWSACCOUNTTYPE_T1129002906_H
#define WINDOWSACCOUNTTYPE_T1129002906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t1129002906 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t1129002906, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSACCOUNTTYPE_T1129002906_H
#ifndef SECURITYPERMISSIONFLAG_T1402382885_H
#define SECURITYPERMISSIONFLAG_T1402382885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t1402382885 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t1402382885, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONFLAG_T1402382885_H
#ifndef RUNTIMEDECLSECURITYENTRY_T2747092051_H
#define RUNTIMEDECLSECURITYENTRY_T2747092051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityEntry
struct  RuntimeDeclSecurityEntry_t2747092051 
{
public:
	// System.IntPtr System.Security.RuntimeDeclSecurityEntry::blob
	IntPtr_t ___blob_0;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::size
	int32_t ___size_1;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::index
	int32_t ___index_2;

public:
	inline static int32_t get_offset_of_blob_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t2747092051, ___blob_0)); }
	inline IntPtr_t get_blob_0() const { return ___blob_0; }
	inline IntPtr_t* get_address_of_blob_0() { return &___blob_0; }
	inline void set_blob_0(IntPtr_t value)
	{
		___blob_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t2747092051, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t2747092051, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYENTRY_T2747092051_H
#ifndef SHA384MANAGED_T1146903156_H
#define SHA384MANAGED_T1146903156_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t1146903156  : public SHA384_t44229731
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::xBuf
	ByteU5BU5D_t3397361946* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA384Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::W
	UInt64U5BU5D_t2560836482* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA384Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___xBuf_4)); }
	inline ByteU5BU5D_t3397361946* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t3397361946** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t3397361946* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___W_16)); }
	inline UInt64U5BU5D_t2560836482* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t2560836482** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t2560836482* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA384Managed_t1146903156, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T1146903156_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T476283259_H
#define CODEACCESSSECURITYATTRIBUTE_T476283259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t476283259  : public SecurityAttribute_t2289572587
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T476283259_H
#ifndef RIPEMD160MANAGED_T2222742473_H
#define RIPEMD160MANAGED_T2222742473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160Managed
struct  RIPEMD160Managed_t2222742473  : public RIPEMD160_t551569107
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_ProcessingBuffer
	ByteU5BU5D_t3397361946* ____ProcessingBuffer_4;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_X
	UInt32U5BU5D_t1622678856* ____X_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_HashValue
	UInt32U5BU5D_t1622678856* ____HashValue_6;
	// System.UInt64 System.Security.Cryptography.RIPEMD160Managed::_Length
	uint64_t ____Length_7;
	// System.Int32 System.Security.Cryptography.RIPEMD160Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__ProcessingBuffer_4() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2222742473, ____ProcessingBuffer_4)); }
	inline ByteU5BU5D_t3397361946* get__ProcessingBuffer_4() const { return ____ProcessingBuffer_4; }
	inline ByteU5BU5D_t3397361946** get_address_of__ProcessingBuffer_4() { return &____ProcessingBuffer_4; }
	inline void set__ProcessingBuffer_4(ByteU5BU5D_t3397361946* value)
	{
		____ProcessingBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_4), value);
	}

	inline static int32_t get_offset_of__X_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2222742473, ____X_5)); }
	inline UInt32U5BU5D_t1622678856* get__X_5() const { return ____X_5; }
	inline UInt32U5BU5D_t1622678856** get_address_of__X_5() { return &____X_5; }
	inline void set__X_5(UInt32U5BU5D_t1622678856* value)
	{
		____X_5 = value;
		Il2CppCodeGenWriteBarrier((&____X_5), value);
	}

	inline static int32_t get_offset_of__HashValue_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2222742473, ____HashValue_6)); }
	inline UInt32U5BU5D_t1622678856* get__HashValue_6() const { return ____HashValue_6; }
	inline UInt32U5BU5D_t1622678856** get_address_of__HashValue_6() { return &____HashValue_6; }
	inline void set__HashValue_6(UInt32U5BU5D_t1622678856* value)
	{
		____HashValue_6 = value;
		Il2CppCodeGenWriteBarrier((&____HashValue_6), value);
	}

	inline static int32_t get_offset_of__Length_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2222742473, ____Length_7)); }
	inline uint64_t get__Length_7() const { return ____Length_7; }
	inline uint64_t* get_address_of__Length_7() { return &____Length_7; }
	inline void set__Length_7(uint64_t value)
	{
		____Length_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2222742473, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160MANAGED_T2222742473_H
#ifndef RNGCRYPTOSERVICEPROVIDER_T3231912889_H
#define RNGCRYPTOSERVICEPROVIDER_T3231912889_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t3231912889  : public RandomNumberGenerator_t2627701567
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	IntPtr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t3231912889, ____handle_1)); }
	inline IntPtr_t get__handle_1() const { return ____handle_1; }
	inline IntPtr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(IntPtr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t3231912889_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t3231912889_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RNGCRYPTOSERVICEPROVIDER_T3231912889_H
#ifndef RSACRYPTOSERVICEPROVIDER_T3927460815_H
#define RSACRYPTOSERVICEPROVIDER_T3927460815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t3927460815  : public RSA_t1909077667
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t4253147657 * ___store_2;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t873475992 * ___rsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3927460815, ___store_2)); }
	inline KeyPairPersistence_t4253147657 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t4253147657 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t4253147657 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3927460815, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3927460815, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3927460815, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3927460815, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_rsa_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3927460815, ___rsa_7)); }
	inline RSAManaged_t873475992 * get_rsa_7() const { return ___rsa_7; }
	inline RSAManaged_t873475992 ** get_address_of_rsa_7() { return &___rsa_7; }
	inline void set_rsa_7(RSAManaged_t873475992 * value)
	{
		___rsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_7), value);
	}
};

struct RSACryptoServiceProvider_t3927460815_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3927460815_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSACRYPTOSERVICEPROVIDER_T3927460815_H
#ifndef MD5CRYPTOSERVICEPROVIDER_T2177020967_H
#define MD5CRYPTOSERVICEPROVIDER_T2177020967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t2177020967  : public MD5_t2071519431
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t1622678856* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t1622678856* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t3397361946* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2177020967, ____H_4)); }
	inline UInt32U5BU5D_t1622678856* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t1622678856** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t1622678856* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2177020967, ___buff_5)); }
	inline UInt32U5BU5D_t1622678856* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_t1622678856** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_t1622678856* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier((&___buff_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2177020967, ___count_6)); }
	inline uint64_t get_count_6() const { return ___count_6; }
	inline uint64_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(uint64_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2177020967, ____ProcessingBuffer_7)); }
	inline ByteU5BU5D_t3397361946* get__ProcessingBuffer_7() const { return ____ProcessingBuffer_7; }
	inline ByteU5BU5D_t3397361946** get_address_of__ProcessingBuffer_7() { return &____ProcessingBuffer_7; }
	inline void set__ProcessingBuffer_7(ByteU5BU5D_t3397361946* value)
	{
		____ProcessingBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_7), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2177020967, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

struct MD5CryptoServiceProvider_t2177020967_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t1622678856* ___K_9;

public:
	inline static int32_t get_offset_of_K_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t2177020967_StaticFields, ___K_9)); }
	inline UInt32U5BU5D_t1622678856* get_K_9() const { return ___K_9; }
	inline UInt32U5BU5D_t1622678856** get_address_of_K_9() { return &___K_9; }
	inline void set_K_9(UInt32U5BU5D_t1622678856* value)
	{
		___K_9 = value;
		Il2CppCodeGenWriteBarrier((&___K_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T2177020967_H
#ifndef CIPHERMODE_T1155567524_H
#define CIPHERMODE_T1155567524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t1155567524 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t1155567524, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERMODE_T1155567524_H
#ifndef CRYPTOGRAPHICEXCEPTION_T1939188067_H
#define CRYPTOGRAPHICEXCEPTION_T1939188067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t1939188067  : public SystemException_t693248299
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T1939188067_H
#ifndef MACTRIPLEDES_T1451331350_H
#define MACTRIPLEDES_T1451331350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t1451331350  : public KeyedHashAlgorithm_t1281792781
{
public:
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t690740376 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t2402153245 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;

public:
	inline static int32_t get_offset_of_tdes_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t1451331350, ___tdes_5)); }
	inline TripleDES_t690740376 * get_tdes_5() const { return ___tdes_5; }
	inline TripleDES_t690740376 ** get_address_of_tdes_5() { return &___tdes_5; }
	inline void set_tdes_5(TripleDES_t690740376 * value)
	{
		___tdes_5 = value;
		Il2CppCodeGenWriteBarrier((&___tdes_5), value);
	}

	inline static int32_t get_offset_of_mac_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t1451331350, ___mac_6)); }
	inline MACAlgorithm_t2402153245 * get_mac_6() const { return ___mac_6; }
	inline MACAlgorithm_t2402153245 ** get_address_of_mac_6() { return &___mac_6; }
	inline void set_mac_6(MACAlgorithm_t2402153245 * value)
	{
		___mac_6 = value;
		Il2CppCodeGenWriteBarrier((&___mac_6), value);
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t1451331350, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACTRIPLEDES_T1451331350_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T799458390_H
#define SHA1CRYPTOSERVICEPROVIDER_T799458390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t799458390  : public SHA1_t1243280877
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t2087545210 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t799458390, ___sha_4)); }
	inline SHA1Internal_t2087545210 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2087545210 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2087545210 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T799458390_H
#ifndef SHA1MANAGED_T911416155_H
#define SHA1MANAGED_T911416155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t911416155  : public SHA1_t1243280877
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t2087545210 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t911416155, ___sha_4)); }
	inline SHA1Internal_t2087545210 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2087545210 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2087545210 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T911416155_H
#ifndef SHA256MANAGED_T3543005469_H
#define SHA256MANAGED_T3543005469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t3543005469  : public SHA256_t3633591320
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t1622678856* ____H_4;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_5;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t3397361946* ____ProcessingBuffer_6;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_7;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t1622678856* ___buff_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(SHA256Managed_t3543005469, ____H_4)); }
	inline UInt32U5BU5D_t1622678856* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t1622678856** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t1622678856* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_t3543005469, ___count_5)); }
	inline uint64_t get_count_5() const { return ___count_5; }
	inline uint64_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(uint64_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t3543005469, ____ProcessingBuffer_6)); }
	inline ByteU5BU5D_t3397361946* get__ProcessingBuffer_6() const { return ____ProcessingBuffer_6; }
	inline ByteU5BU5D_t3397361946** get_address_of__ProcessingBuffer_6() { return &____ProcessingBuffer_6; }
	inline void set__ProcessingBuffer_6(ByteU5BU5D_t3397361946* value)
	{
		____ProcessingBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_6), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t3543005469, ____ProcessingBufferCount_7)); }
	inline int32_t get__ProcessingBufferCount_7() const { return ____ProcessingBufferCount_7; }
	inline int32_t* get_address_of__ProcessingBufferCount_7() { return &____ProcessingBufferCount_7; }
	inline void set__ProcessingBufferCount_7(int32_t value)
	{
		____ProcessingBufferCount_7 = value;
	}

	inline static int32_t get_offset_of_buff_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t3543005469, ___buff_8)); }
	inline UInt32U5BU5D_t1622678856* get_buff_8() const { return ___buff_8; }
	inline UInt32U5BU5D_t1622678856** get_address_of_buff_8() { return &___buff_8; }
	inline void set_buff_8(UInt32U5BU5D_t1622678856* value)
	{
		___buff_8 = value;
		Il2CppCodeGenWriteBarrier((&___buff_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T3543005469_H
#ifndef SHA512MANAGED_T1240097118_H
#define SHA512MANAGED_T1240097118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t1240097118  : public SHA512_t2085254558
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::xBuf
	ByteU5BU5D_t3397361946* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA512Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::W
	UInt64U5BU5D_t2560836482* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA512Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___xBuf_4)); }
	inline ByteU5BU5D_t3397361946* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t3397361946** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t3397361946* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___W_16)); }
	inline UInt64U5BU5D_t2560836482* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t2560836482** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t2560836482* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA512Managed_t1240097118, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T1240097118_H
#ifndef CSPPROVIDERFLAGS_T379571693_H
#define CSPPROVIDERFLAGS_T379571693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t379571693 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CspProviderFlags_t379571693, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPROVIDERFLAGS_T379571693_H
#ifndef PADDINGMODE_T922688086_H
#define PADDINGMODE_T922688086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t922688086 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t922688086, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDINGMODE_T922688086_H
#ifndef DSACRYPTOSERVICEPROVIDER_T1534922079_H
#define DSACRYPTOSERVICEPROVIDER_T1534922079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t1534922079  : public DSA_t1646273368
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t4253147657 * ___store_2;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t2506449781 * ___dsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t1534922079, ___store_2)); }
	inline KeyPairPersistence_t4253147657 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t4253147657 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t4253147657 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t1534922079, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t1534922079, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t1534922079, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t1534922079, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_dsa_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t1534922079, ___dsa_7)); }
	inline DSAManaged_t2506449781 * get_dsa_7() const { return ___dsa_7; }
	inline DSAManaged_t2506449781 ** get_address_of_dsa_7() { return &___dsa_7; }
	inline void set_dsa_7(DSAManaged_t2506449781 * value)
	{
		___dsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_7), value);
	}
};

struct DSACryptoServiceProvider_t1534922079_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t1534922079_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T1534922079_H
#ifndef RUNTIMESECURITYFRAME_T763259783_H
#define RUNTIMESECURITYFRAME_T763259783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t763259783  : public RuntimeObject
{
public:
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t2950528003 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t2747092051  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t2747092051  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t2747092051  ___permitonly_4;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t763259783, ___domain_0)); }
	inline AppDomain_t2950528003 * get_domain_0() const { return ___domain_0; }
	inline AppDomain_t2950528003 ** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(AppDomain_t2950528003 * value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((&___domain_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t763259783, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}

	inline static int32_t get_offset_of_assert_2() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t763259783, ___assert_2)); }
	inline RuntimeDeclSecurityEntry_t2747092051  get_assert_2() const { return ___assert_2; }
	inline RuntimeDeclSecurityEntry_t2747092051 * get_address_of_assert_2() { return &___assert_2; }
	inline void set_assert_2(RuntimeDeclSecurityEntry_t2747092051  value)
	{
		___assert_2 = value;
	}

	inline static int32_t get_offset_of_deny_3() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t763259783, ___deny_3)); }
	inline RuntimeDeclSecurityEntry_t2747092051  get_deny_3() const { return ___deny_3; }
	inline RuntimeDeclSecurityEntry_t2747092051 * get_address_of_deny_3() { return &___deny_3; }
	inline void set_deny_3(RuntimeDeclSecurityEntry_t2747092051  value)
	{
		___deny_3 = value;
	}

	inline static int32_t get_offset_of_permitonly_4() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t763259783, ___permitonly_4)); }
	inline RuntimeDeclSecurityEntry_t2747092051  get_permitonly_4() const { return ___permitonly_4; }
	inline RuntimeDeclSecurityEntry_t2747092051 * get_address_of_permitonly_4() { return &___permitonly_4; }
	inline void set_permitonly_4(RuntimeDeclSecurityEntry_t2747092051  value)
	{
		___permitonly_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESECURITYFRAME_T763259783_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3159478878_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3159478878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t3159478878  : public CryptographicException_t1939188067
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3159478878_H
#ifndef CSPPARAMETERS_T208841674_H
#define CSPPARAMETERS_T208841674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t208841674  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::_Flags
	int32_t ____Flags_0;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_1;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_2;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_3;
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_4;

public:
	inline static int32_t get_offset_of__Flags_0() { return static_cast<int32_t>(offsetof(CspParameters_t208841674, ____Flags_0)); }
	inline int32_t get__Flags_0() const { return ____Flags_0; }
	inline int32_t* get_address_of__Flags_0() { return &____Flags_0; }
	inline void set__Flags_0(int32_t value)
	{
		____Flags_0 = value;
	}

	inline static int32_t get_offset_of_KeyContainerName_1() { return static_cast<int32_t>(offsetof(CspParameters_t208841674, ___KeyContainerName_1)); }
	inline String_t* get_KeyContainerName_1() const { return ___KeyContainerName_1; }
	inline String_t** get_address_of_KeyContainerName_1() { return &___KeyContainerName_1; }
	inline void set_KeyContainerName_1(String_t* value)
	{
		___KeyContainerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_1), value);
	}

	inline static int32_t get_offset_of_KeyNumber_2() { return static_cast<int32_t>(offsetof(CspParameters_t208841674, ___KeyNumber_2)); }
	inline int32_t get_KeyNumber_2() const { return ___KeyNumber_2; }
	inline int32_t* get_address_of_KeyNumber_2() { return &___KeyNumber_2; }
	inline void set_KeyNumber_2(int32_t value)
	{
		___KeyNumber_2 = value;
	}

	inline static int32_t get_offset_of_ProviderName_3() { return static_cast<int32_t>(offsetof(CspParameters_t208841674, ___ProviderName_3)); }
	inline String_t* get_ProviderName_3() const { return ___ProviderName_3; }
	inline String_t** get_address_of_ProviderName_3() { return &___ProviderName_3; }
	inline void set_ProviderName_3(String_t* value)
	{
		___ProviderName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_3), value);
	}

	inline static int32_t get_offset_of_ProviderType_4() { return static_cast<int32_t>(offsetof(CspParameters_t208841674, ___ProviderType_4)); }
	inline int32_t get_ProviderType_4() const { return ___ProviderType_4; }
	inline int32_t* get_address_of_ProviderType_4() { return &___ProviderType_4; }
	inline void set_ProviderType_4(int32_t value)
	{
		___ProviderType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T208841674_H
#ifndef SECURITYPERMISSION_T3290756104_H
#define SECURITYPERMISSION_T3290756104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t3290756104  : public CodeAccessPermission_t1078280153
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t3290756104, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T3290756104_H
#ifndef WINDOWSIDENTITY_T209196073_H
#define WINDOWSIDENTITY_T209196073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t209196073  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	IntPtr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t2264152275 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t209196073, ____token_0)); }
	inline IntPtr_t get__token_0() const { return ____token_0; }
	inline IntPtr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(IntPtr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t209196073, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t209196073, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t209196073, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t209196073, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t209196073, ____info_5)); }
	inline SerializationInfo_t2264152275 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t2264152275 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t2264152275 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t209196073_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	IntPtr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t209196073_StaticFields, ___invalidWindows_6)); }
	inline IntPtr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline IntPtr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(IntPtr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T209196073_H
#ifndef HMACMD5_T3382869243_H
#define HMACMD5_T3382869243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t3382869243  : public HMAC_t1158936799
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T3382869243_H
#ifndef HMACRIPEMD160_T1199012090_H
#define HMACRIPEMD160_T1199012090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t1199012090  : public HMAC_t1158936799
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T1199012090_H
#ifndef HMACSHA1_T2096454143_H
#define HMACSHA1_T2096454143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA1
struct  HMACSHA1_t2096454143  : public HMAC_t1158936799
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA1_T2096454143_H
#ifndef HMACSHA256_T2227302147_H
#define HMACSHA256_T2227302147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256
struct  HMACSHA256_t2227302147  : public HMAC_t1158936799
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA256_T2227302147_H
#ifndef HMACSHA384_T2156793380_H
#define HMACSHA384_T2156793380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384
struct  HMACSHA384_t2156793380  : public HMAC_t1158936799
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA384_t2156793380, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA384_t2156793380_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA384_t2156793380_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA384_T2156793380_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T3861628228_H
#define SECURITYPERMISSIONATTRIBUTE_T3861628228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t3861628228  : public CodeAccessSecurityAttribute_t476283259
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_0;

public:
	inline static int32_t get_offset_of_m_Flags_0() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t3861628228, ___m_Flags_0)); }
	inline int32_t get_m_Flags_0() const { return ___m_Flags_0; }
	inline int32_t* get_address_of_m_Flags_0() { return &___m_Flags_0; }
	inline void set_m_Flags_0(int32_t value)
	{
		___m_Flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T3861628228_H
#ifndef SECURITYCRITICALATTRIBUTE_T2180426008_H
#define SECURITYCRITICALATTRIBUTE_T2180426008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalAttribute
struct  SecurityCriticalAttribute_t2180426008  : public Attribute_t4010989168
{
public:
	// System.Security.SecurityCriticalScope System.Security.SecurityCriticalAttribute::_scope
	int32_t ____scope_0;

public:
	inline static int32_t get_offset_of__scope_0() { return static_cast<int32_t>(offsetof(SecurityCriticalAttribute_t2180426008, ____scope_0)); }
	inline int32_t get__scope_0() const { return ____scope_0; }
	inline int32_t* get_address_of__scope_0() { return &____scope_0; }
	inline void set__scope_0(int32_t value)
	{
		____scope_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALATTRIBUTE_T2180426008_H
#ifndef SYMMETRICALGORITHM_T426988061_H
#define SYMMETRICALGORITHM_T426988061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t426988061  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3397361946* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3397361946* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t3064058489* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t3064058489* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t426988061, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t426988061, ___IVValue_1)); }
	inline ByteU5BU5D_t3397361946* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t3397361946** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t3397361946* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t426988061, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t426988061, ___KeyValue_3)); }
	inline ByteU5BU5D_t3397361946* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3397361946** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3397361946* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t426988061, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t3064058489* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t3064058489** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t3064058489* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t426988061, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t3064058489* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t3064058489** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t3064058489* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t426988061, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t426988061, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t426988061, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t426988061, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T426988061_H
#ifndef HMACSHA512_T1510559700_H
#define HMACSHA512_T1510559700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512
struct  HMACSHA512_t1510559700  : public HMAC_t1158936799
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA512_t1510559700, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA512_t1510559700_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA512_t1510559700_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA512_T1510559700_H
#ifndef RIJNDAEL_T1588974105_H
#define RIJNDAEL_T1588974105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t1588974105  : public SymmetricAlgorithm_t426988061
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T1588974105_H
#ifndef DES_T3903682667_H
#define DES_T3903682667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t3903682667  : public SymmetricAlgorithm_t426988061
{
public:

public:
};

struct DES_t3903682667_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t3397361947* ___weakKeys_10;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t3397361947* ___semiWeakKeys_11;

public:
	inline static int32_t get_offset_of_weakKeys_10() { return static_cast<int32_t>(offsetof(DES_t3903682667_StaticFields, ___weakKeys_10)); }
	inline ByteU5BU2CU5D_t3397361947* get_weakKeys_10() const { return ___weakKeys_10; }
	inline ByteU5BU2CU5D_t3397361947** get_address_of_weakKeys_10() { return &___weakKeys_10; }
	inline void set_weakKeys_10(ByteU5BU2CU5D_t3397361947* value)
	{
		___weakKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___weakKeys_10), value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_11() { return static_cast<int32_t>(offsetof(DES_t3903682667_StaticFields, ___semiWeakKeys_11)); }
	inline ByteU5BU2CU5D_t3397361947* get_semiWeakKeys_11() const { return ___semiWeakKeys_11; }
	inline ByteU5BU2CU5D_t3397361947** get_address_of_semiWeakKeys_11() { return &___semiWeakKeys_11; }
	inline void set_semiWeakKeys_11(ByteU5BU2CU5D_t3397361947* value)
	{
		___semiWeakKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&___semiWeakKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T3903682667_H
#ifndef TRIPLEDES_T690740376_H
#define TRIPLEDES_T690740376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t690740376  : public SymmetricAlgorithm_t426988061
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T690740376_H
#ifndef RC2_T3939677441_H
#define RC2_T3939677441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2
struct  RC2_t3939677441  : public SymmetricAlgorithm_t426988061
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_10;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_10() { return static_cast<int32_t>(offsetof(RC2_t3939677441, ___EffectiveKeySizeValue_10)); }
	inline int32_t get_EffectiveKeySizeValue_10() const { return ___EffectiveKeySizeValue_10; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_10() { return &___EffectiveKeySizeValue_10; }
	inline void set_EffectiveKeySizeValue_10(int32_t value)
	{
		___EffectiveKeySizeValue_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2_T3939677441_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T1760041917_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T1760041917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t1760041917  : public TripleDES_t690740376
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T1760041917_H
#ifndef RIJNDAELMANAGED_T236284835_H
#define RIJNDAELMANAGED_T236284835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t236284835  : public Rijndael_t1588974105
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T236284835_H
#ifndef DESCRYPTOSERVICEPROVIDER_T1895735042_H
#define DESCRYPTOSERVICEPROVIDER_T1895735042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t1895735042  : public DES_t3903682667
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T1895735042_H
#ifndef RC2CRYPTOSERVICEPROVIDER_T1762032587_H
#define RC2CRYPTOSERVICEPROVIDER_T1762032587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2CryptoServiceProvider
struct  RC2CryptoServiceProvider_t1762032587  : public RC2_t3939677441
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2CRYPTOSERVICEPROVIDER_T1762032587_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize600 = { sizeof (CryptoConfig_t4120743379), -1, sizeof(CryptoConfig_t4120743379_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable600[3] = 
{
	CryptoConfig_t4120743379_StaticFields::get_offset_of_lockObject_0(),
	CryptoConfig_t4120743379_StaticFields::get_offset_of_algorithms_1(),
	CryptoConfig_t4120743379_StaticFields::get_offset_of_oid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize601 = { sizeof (CryptographicException_t1939188067), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize602 = { sizeof (CryptographicUnexpectedOperationException_t3159478878), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize603 = { sizeof (CspParameters_t208841674), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable603[5] = 
{
	CspParameters_t208841674::get_offset_of__Flags_0(),
	CspParameters_t208841674::get_offset_of_KeyContainerName_1(),
	CspParameters_t208841674::get_offset_of_KeyNumber_2(),
	CspParameters_t208841674::get_offset_of_ProviderName_3(),
	CspParameters_t208841674::get_offset_of_ProviderType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize604 = { sizeof (CspProviderFlags_t379571693)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable604[9] = 
{
	CspProviderFlags_t379571693::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize605 = { sizeof (DES_t3903682667), -1, sizeof(DES_t3903682667_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable605[2] = 
{
	DES_t3903682667_StaticFields::get_offset_of_weakKeys_10(),
	DES_t3903682667_StaticFields::get_offset_of_semiWeakKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize606 = { sizeof (DESTransform_t1717224131), -1, sizeof(DESTransform_t1717224131_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable606[13] = 
{
	DESTransform_t1717224131_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t1717224131_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t1717224131_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t1717224131_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t1717224131::get_offset_of_keySchedule_16(),
	DESTransform_t1717224131::get_offset_of_byteBuff_17(),
	DESTransform_t1717224131::get_offset_of_dwordBuff_18(),
	DESTransform_t1717224131_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t1717224131_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t1717224131_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t1717224131_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t1717224131_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t1717224131_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize607 = { sizeof (DESCryptoServiceProvider_t1895735042), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize608 = { sizeof (DSA_t1646273368), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize609 = { sizeof (DSACryptoServiceProvider_t1534922079), -1, sizeof(DSACryptoServiceProvider_t1534922079_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable609[7] = 
{
	DSACryptoServiceProvider_t1534922079::get_offset_of_store_2(),
	DSACryptoServiceProvider_t1534922079::get_offset_of_persistKey_3(),
	DSACryptoServiceProvider_t1534922079::get_offset_of_persisted_4(),
	DSACryptoServiceProvider_t1534922079::get_offset_of_privateKeyExportable_5(),
	DSACryptoServiceProvider_t1534922079::get_offset_of_m_disposed_6(),
	DSACryptoServiceProvider_t1534922079::get_offset_of_dsa_7(),
	DSACryptoServiceProvider_t1534922079_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize610 = { sizeof (DSAParameters_t4293347583)+ sizeof (RuntimeObject), sizeof(DSAParameters_t4293347583_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable610[8] = 
{
	DSAParameters_t4293347583::get_offset_of_Counter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t4293347583::get_offset_of_G_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t4293347583::get_offset_of_J_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t4293347583::get_offset_of_P_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t4293347583::get_offset_of_Q_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t4293347583::get_offset_of_Seed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t4293347583::get_offset_of_X_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t4293347583::get_offset_of_Y_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize611 = { sizeof (DSASignatureDeformatter_t278173625), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable611[1] = 
{
	DSASignatureDeformatter_t278173625::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize612 = { sizeof (DSASignatureFormatter_t3635949704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable612[1] = 
{
	DSASignatureFormatter_t3635949704::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize613 = { sizeof (HMAC_t1158936799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable613[5] = 
{
	HMAC_t1158936799::get_offset_of__disposed_5(),
	HMAC_t1158936799::get_offset_of__hashName_6(),
	HMAC_t1158936799::get_offset_of__algo_7(),
	HMAC_t1158936799::get_offset_of__block_8(),
	HMAC_t1158936799::get_offset_of__blockSizeValue_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize614 = { sizeof (HMACMD5_t3382869243), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize615 = { sizeof (HMACRIPEMD160_t1199012090), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize616 = { sizeof (HMACSHA1_t2096454143), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize617 = { sizeof (HMACSHA256_t2227302147), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize618 = { sizeof (HMACSHA384_t2156793380), -1, sizeof(HMACSHA384_t2156793380_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable618[2] = 
{
	HMACSHA384_t2156793380_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA384_t2156793380::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize619 = { sizeof (HMACSHA512_t1510559700), -1, sizeof(HMACSHA512_t1510559700_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable619[2] = 
{
	HMACSHA512_t1510559700_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA512_t1510559700::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize620 = { sizeof (HashAlgorithm_t3020573895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable620[4] = 
{
	HashAlgorithm_t3020573895::get_offset_of_HashValue_0(),
	HashAlgorithm_t3020573895::get_offset_of_HashSizeValue_1(),
	HashAlgorithm_t3020573895::get_offset_of_State_2(),
	HashAlgorithm_t3020573895::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize621 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize622 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize623 = { sizeof (KeySizes_t4161369320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable623[3] = 
{
	KeySizes_t4161369320::get_offset_of__maxSize_0(),
	KeySizes_t4161369320::get_offset_of__minSize_1(),
	KeySizes_t4161369320::get_offset_of__skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize624 = { sizeof (KeyedHashAlgorithm_t1281792781), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable624[1] = 
{
	KeyedHashAlgorithm_t1281792781::get_offset_of_KeyValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize625 = { sizeof (MACTripleDES_t1451331350), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable625[3] = 
{
	MACTripleDES_t1451331350::get_offset_of_tdes_5(),
	MACTripleDES_t1451331350::get_offset_of_mac_6(),
	MACTripleDES_t1451331350::get_offset_of_m_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize626 = { sizeof (MD5_t2071519431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize627 = { sizeof (MD5CryptoServiceProvider_t2177020967), -1, sizeof(MD5CryptoServiceProvider_t2177020967_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable627[6] = 
{
	MD5CryptoServiceProvider_t2177020967::get_offset_of__H_4(),
	MD5CryptoServiceProvider_t2177020967::get_offset_of_buff_5(),
	MD5CryptoServiceProvider_t2177020967::get_offset_of_count_6(),
	MD5CryptoServiceProvider_t2177020967::get_offset_of__ProcessingBuffer_7(),
	MD5CryptoServiceProvider_t2177020967::get_offset_of__ProcessingBufferCount_8(),
	MD5CryptoServiceProvider_t2177020967_StaticFields::get_offset_of_K_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize628 = { sizeof (PaddingMode_t922688086)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable628[6] = 
{
	PaddingMode_t922688086::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize629 = { sizeof (RC2_t3939677441), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable629[1] = 
{
	RC2_t3939677441::get_offset_of_EffectiveKeySizeValue_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize630 = { sizeof (RC2CryptoServiceProvider_t1762032587), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize631 = { sizeof (RC2Transform_t3182853409), -1, sizeof(RC2Transform_t3182853409_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable631[7] = 
{
	RC2Transform_t3182853409::get_offset_of_R0_12(),
	RC2Transform_t3182853409::get_offset_of_R1_13(),
	RC2Transform_t3182853409::get_offset_of_R2_14(),
	RC2Transform_t3182853409::get_offset_of_R3_15(),
	RC2Transform_t3182853409::get_offset_of_K_16(),
	RC2Transform_t3182853409::get_offset_of_j_17(),
	RC2Transform_t3182853409_StaticFields::get_offset_of_pitable_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize632 = { sizeof (RIPEMD160_t551569107), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize633 = { sizeof (RIPEMD160Managed_t2222742473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable633[5] = 
{
	RIPEMD160Managed_t2222742473::get_offset_of__ProcessingBuffer_4(),
	RIPEMD160Managed_t2222742473::get_offset_of__X_5(),
	RIPEMD160Managed_t2222742473::get_offset_of__HashValue_6(),
	RIPEMD160Managed_t2222742473::get_offset_of__Length_7(),
	RIPEMD160Managed_t2222742473::get_offset_of__ProcessingBufferCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize634 = { sizeof (RNGCryptoServiceProvider_t3231912889), -1, sizeof(RNGCryptoServiceProvider_t3231912889_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable634[2] = 
{
	RNGCryptoServiceProvider_t3231912889_StaticFields::get_offset_of__lock_0(),
	RNGCryptoServiceProvider_t3231912889::get_offset_of__handle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize635 = { sizeof (RSA_t1909077667), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize636 = { sizeof (RSACryptoServiceProvider_t3927460815), -1, sizeof(RSACryptoServiceProvider_t3927460815_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable636[7] = 
{
	RSACryptoServiceProvider_t3927460815::get_offset_of_store_2(),
	RSACryptoServiceProvider_t3927460815::get_offset_of_persistKey_3(),
	RSACryptoServiceProvider_t3927460815::get_offset_of_persisted_4(),
	RSACryptoServiceProvider_t3927460815::get_offset_of_privateKeyExportable_5(),
	RSACryptoServiceProvider_t3927460815::get_offset_of_m_disposed_6(),
	RSACryptoServiceProvider_t3927460815::get_offset_of_rsa_7(),
	RSACryptoServiceProvider_t3927460815_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize637 = { sizeof (RSAPKCS1KeyExchangeFormatter_t2361327088), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable637[2] = 
{
	RSAPKCS1KeyExchangeFormatter_t2361327088::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeFormatter_t2361327088::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize638 = { sizeof (RSAPKCS1SignatureDeformatter_t3569926127), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable638[2] = 
{
	RSAPKCS1SignatureDeformatter_t3569926127::get_offset_of_rsa_0(),
	RSAPKCS1SignatureDeformatter_t3569926127::get_offset_of_hashName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize639 = { sizeof (RSAPKCS1SignatureFormatter_t1139705126), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable639[2] = 
{
	RSAPKCS1SignatureFormatter_t1139705126::get_offset_of_rsa_0(),
	RSAPKCS1SignatureFormatter_t1139705126::get_offset_of_hash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize640 = { sizeof (RSAParameters_t3025826843)+ sizeof (RuntimeObject), sizeof(RSAParameters_t3025826843_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable640[8] = 
{
	RSAParameters_t3025826843::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t3025826843::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t3025826843::get_offset_of_D_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t3025826843::get_offset_of_DP_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t3025826843::get_offset_of_DQ_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t3025826843::get_offset_of_InverseQ_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t3025826843::get_offset_of_Modulus_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t3025826843::get_offset_of_Exponent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize641 = { sizeof (RandomNumberGenerator_t2627701567), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize642 = { sizeof (Rijndael_t1588974105), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize643 = { sizeof (RijndaelManaged_t236284835), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize644 = { sizeof (RijndaelTransform_t1094411340), -1, sizeof(RijndaelTransform_t1094411340_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable644[15] = 
{
	RijndaelTransform_t1094411340::get_offset_of_expandedKey_12(),
	RijndaelTransform_t1094411340::get_offset_of_Nb_13(),
	RijndaelTransform_t1094411340::get_offset_of_Nk_14(),
	RijndaelTransform_t1094411340::get_offset_of_Nr_15(),
	RijndaelTransform_t1094411340_StaticFields::get_offset_of_Rcon_16(),
	RijndaelTransform_t1094411340_StaticFields::get_offset_of_SBox_17(),
	RijndaelTransform_t1094411340_StaticFields::get_offset_of_iSBox_18(),
	RijndaelTransform_t1094411340_StaticFields::get_offset_of_T0_19(),
	RijndaelTransform_t1094411340_StaticFields::get_offset_of_T1_20(),
	RijndaelTransform_t1094411340_StaticFields::get_offset_of_T2_21(),
	RijndaelTransform_t1094411340_StaticFields::get_offset_of_T3_22(),
	RijndaelTransform_t1094411340_StaticFields::get_offset_of_iT0_23(),
	RijndaelTransform_t1094411340_StaticFields::get_offset_of_iT1_24(),
	RijndaelTransform_t1094411340_StaticFields::get_offset_of_iT2_25(),
	RijndaelTransform_t1094411340_StaticFields::get_offset_of_iT3_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize645 = { sizeof (RijndaelManagedTransform_t3773063286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable645[2] = 
{
	RijndaelManagedTransform_t3773063286::get_offset_of__st_0(),
	RijndaelManagedTransform_t3773063286::get_offset_of__bs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize646 = { sizeof (SHA1_t1243280877), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize647 = { sizeof (SHA1Internal_t2087545210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable647[5] = 
{
	SHA1Internal_t2087545210::get_offset_of__H_0(),
	SHA1Internal_t2087545210::get_offset_of_count_1(),
	SHA1Internal_t2087545210::get_offset_of__ProcessingBuffer_2(),
	SHA1Internal_t2087545210::get_offset_of__ProcessingBufferCount_3(),
	SHA1Internal_t2087545210::get_offset_of_buff_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize648 = { sizeof (SHA1CryptoServiceProvider_t799458390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable648[1] = 
{
	SHA1CryptoServiceProvider_t799458390::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize649 = { sizeof (SHA1Managed_t911416155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable649[1] = 
{
	SHA1Managed_t911416155::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize650 = { sizeof (SHA256_t3633591320), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize651 = { sizeof (SHA256Managed_t3543005469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable651[5] = 
{
	SHA256Managed_t3543005469::get_offset_of__H_4(),
	SHA256Managed_t3543005469::get_offset_of_count_5(),
	SHA256Managed_t3543005469::get_offset_of__ProcessingBuffer_6(),
	SHA256Managed_t3543005469::get_offset_of__ProcessingBufferCount_7(),
	SHA256Managed_t3543005469::get_offset_of_buff_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize652 = { sizeof (SHA384_t44229731), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize653 = { sizeof (SHA384Managed_t1146903156), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable653[14] = 
{
	SHA384Managed_t1146903156::get_offset_of_xBuf_4(),
	SHA384Managed_t1146903156::get_offset_of_xBufOff_5(),
	SHA384Managed_t1146903156::get_offset_of_byteCount1_6(),
	SHA384Managed_t1146903156::get_offset_of_byteCount2_7(),
	SHA384Managed_t1146903156::get_offset_of_H1_8(),
	SHA384Managed_t1146903156::get_offset_of_H2_9(),
	SHA384Managed_t1146903156::get_offset_of_H3_10(),
	SHA384Managed_t1146903156::get_offset_of_H4_11(),
	SHA384Managed_t1146903156::get_offset_of_H5_12(),
	SHA384Managed_t1146903156::get_offset_of_H6_13(),
	SHA384Managed_t1146903156::get_offset_of_H7_14(),
	SHA384Managed_t1146903156::get_offset_of_H8_15(),
	SHA384Managed_t1146903156::get_offset_of_W_16(),
	SHA384Managed_t1146903156::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize654 = { sizeof (SHA512_t2085254558), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize655 = { sizeof (SHA512Managed_t1240097118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable655[14] = 
{
	SHA512Managed_t1240097118::get_offset_of_xBuf_4(),
	SHA512Managed_t1240097118::get_offset_of_xBufOff_5(),
	SHA512Managed_t1240097118::get_offset_of_byteCount1_6(),
	SHA512Managed_t1240097118::get_offset_of_byteCount2_7(),
	SHA512Managed_t1240097118::get_offset_of_H1_8(),
	SHA512Managed_t1240097118::get_offset_of_H2_9(),
	SHA512Managed_t1240097118::get_offset_of_H3_10(),
	SHA512Managed_t1240097118::get_offset_of_H4_11(),
	SHA512Managed_t1240097118::get_offset_of_H5_12(),
	SHA512Managed_t1240097118::get_offset_of_H6_13(),
	SHA512Managed_t1240097118::get_offset_of_H7_14(),
	SHA512Managed_t1240097118::get_offset_of_H8_15(),
	SHA512Managed_t1240097118::get_offset_of_W_16(),
	SHA512Managed_t1240097118::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize656 = { sizeof (SHAConstants_t2807363053), -1, sizeof(SHAConstants_t2807363053_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable656[2] = 
{
	SHAConstants_t2807363053_StaticFields::get_offset_of_K1_0(),
	SHAConstants_t2807363053_StaticFields::get_offset_of_K2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize657 = { sizeof (SignatureDescription_t3342594191), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable657[4] = 
{
	SignatureDescription_t3342594191::get_offset_of__DeformatterAlgorithm_0(),
	SignatureDescription_t3342594191::get_offset_of__DigestAlgorithm_1(),
	SignatureDescription_t3342594191::get_offset_of__FormatterAlgorithm_2(),
	SignatureDescription_t3342594191::get_offset_of__KeyAlgorithm_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize658 = { sizeof (DSASignatureDescription_t1684526059), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize659 = { sizeof (RSAPKCS1SHA1SignatureDescription_t2735384773), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize660 = { sizeof (SymmetricAlgorithm_t426988061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable660[10] = 
{
	SymmetricAlgorithm_t426988061::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t426988061::get_offset_of_IVValue_1(),
	SymmetricAlgorithm_t426988061::get_offset_of_KeySizeValue_2(),
	SymmetricAlgorithm_t426988061::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t426988061::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t426988061::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t426988061::get_offset_of_FeedbackSizeValue_6(),
	SymmetricAlgorithm_t426988061::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t426988061::get_offset_of_PaddingValue_8(),
	SymmetricAlgorithm_t426988061::get_offset_of_m_disposed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize661 = { sizeof (ToBase64Transform_t946173044), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable661[1] = 
{
	ToBase64Transform_t946173044::get_offset_of_m_disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize662 = { sizeof (TripleDES_t690740376), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize663 = { sizeof (TripleDESCryptoServiceProvider_t1760041917), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize664 = { sizeof (TripleDESTransform_t1210516750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable664[6] = 
{
	TripleDESTransform_t1210516750::get_offset_of_E1_12(),
	TripleDESTransform_t1210516750::get_offset_of_D2_13(),
	TripleDESTransform_t1210516750::get_offset_of_E3_14(),
	TripleDESTransform_t1210516750::get_offset_of_D1_15(),
	TripleDESTransform_t1210516750::get_offset_of_E2_16(),
	TripleDESTransform_t1210516750::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize665 = { sizeof (CodeAccessSecurityAttribute_t476283259), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize666 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize667 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize668 = { sizeof (SecurityPermission_t3290756104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable668[1] = 
{
	SecurityPermission_t3290756104::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize669 = { sizeof (SecurityPermissionAttribute_t3861628228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable669[1] = 
{
	SecurityPermissionAttribute_t3861628228::get_offset_of_m_Flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize670 = { sizeof (SecurityPermissionFlag_t1402382885)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable670[17] = 
{
	SecurityPermissionFlag_t1402382885::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize671 = { sizeof (StrongNamePublicKeyBlob_t1946055640), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable671[1] = 
{
	StrongNamePublicKeyBlob_t1946055640::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize672 = { sizeof (ApplicationTrust_t1938271271), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable672[1] = 
{
	ApplicationTrust_t1938271271::get_offset_of_fullTrustAssemblies_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize673 = { sizeof (Evidence_t1639151813), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable673[3] = 
{
	Evidence_t1639151813::get_offset_of_hostEvidenceList_0(),
	Evidence_t1639151813::get_offset_of_assemblyEvidenceList_1(),
	Evidence_t1639151813::get_offset_of__hashCode_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize674 = { sizeof (EvidenceEnumerator_t36442134), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable674[3] = 
{
	EvidenceEnumerator_t36442134::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t36442134::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t36442134::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize675 = { sizeof (Hash_t1256859700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable675[2] = 
{
	Hash_t1256859700::get_offset_of_assembly_0(),
	Hash_t1256859700::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize676 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize677 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize678 = { sizeof (StrongName_t1904646785), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable678[3] = 
{
	StrongName_t1904646785::get_offset_of_publickey_0(),
	StrongName_t1904646785::get_offset_of_name_1(),
	StrongName_t1904646785::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize679 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize680 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize681 = { sizeof (PrincipalPolicy_t387568995)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable681[4] = 
{
	PrincipalPolicy_t387568995::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize682 = { sizeof (WindowsAccountType_t1129002906)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable682[5] = 
{
	WindowsAccountType_t1129002906::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize683 = { sizeof (WindowsIdentity_t209196073), -1, sizeof(WindowsIdentity_t209196073_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable683[7] = 
{
	WindowsIdentity_t209196073::get_offset_of__token_0(),
	WindowsIdentity_t209196073::get_offset_of__type_1(),
	WindowsIdentity_t209196073::get_offset_of__account_2(),
	WindowsIdentity_t209196073::get_offset_of__authenticated_3(),
	WindowsIdentity_t209196073::get_offset_of__name_4(),
	WindowsIdentity_t209196073::get_offset_of__info_5(),
	WindowsIdentity_t209196073_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize684 = { sizeof (AllowPartiallyTrustedCallersAttribute_t2573557873), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize685 = { sizeof (CodeAccessPermission_t1078280153), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize686 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize687 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize688 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize689 = { sizeof (PermissionSet_t4130617584), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable689[1] = 
{
	PermissionSet_t4130617584::get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize690 = { sizeof (SecurityContext_t4050579935), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable690[4] = 
{
	SecurityContext_t4050579935::get_offset_of__capture_0(),
	SecurityContext_t4050579935::get_offset_of__winid_1(),
	SecurityContext_t4050579935::get_offset_of__stack_2(),
	SecurityContext_t4050579935::get_offset_of__suppressFlow_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize691 = { sizeof (SecurityCriticalAttribute_t2180426008), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable691[1] = 
{
	SecurityCriticalAttribute_t2180426008::get_offset_of__scope_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize692 = { sizeof (SecurityCriticalScope_t3975470865)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable692[3] = 
{
	SecurityCriticalScope_t3975470865::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize693 = { sizeof (SecurityElement_t1196116845), -1, sizeof(SecurityElement_t1196116845_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable693[9] = 
{
	SecurityElement_t1196116845::get_offset_of_text_0(),
	SecurityElement_t1196116845::get_offset_of_tag_1(),
	SecurityElement_t1196116845::get_offset_of_attributes_2(),
	SecurityElement_t1196116845::get_offset_of_children_3(),
	SecurityElement_t1196116845_StaticFields::get_offset_of_invalid_tag_chars_4(),
	SecurityElement_t1196116845_StaticFields::get_offset_of_invalid_text_chars_5(),
	SecurityElement_t1196116845_StaticFields::get_offset_of_invalid_attr_name_chars_6(),
	SecurityElement_t1196116845_StaticFields::get_offset_of_invalid_attr_value_chars_7(),
	SecurityElement_t1196116845_StaticFields::get_offset_of_invalid_chars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize694 = { sizeof (SecurityAttribute_t3910628450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable694[2] = 
{
	SecurityAttribute_t3910628450::get_offset_of__name_0(),
	SecurityAttribute_t3910628450::get_offset_of__value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize695 = { sizeof (SecurityException_t1116239675), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable695[8] = 
{
	SecurityException_t1116239675::get_offset_of_permissionState_11(),
	SecurityException_t1116239675::get_offset_of_permissionType_12(),
	SecurityException_t1116239675::get_offset_of__granted_13(),
	SecurityException_t1116239675::get_offset_of__refused_14(),
	SecurityException_t1116239675::get_offset_of__demanded_15(),
	SecurityException_t1116239675::get_offset_of__firstperm_16(),
	SecurityException_t1116239675::get_offset_of__method_17(),
	SecurityException_t1116239675::get_offset_of__evidence_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize696 = { sizeof (RuntimeDeclSecurityEntry_t2747092051)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityEntry_t2747092051 ), 0, 0 };
extern const int32_t g_FieldOffsetTable696[3] = 
{
	RuntimeDeclSecurityEntry_t2747092051::get_offset_of_blob_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t2747092051::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t2747092051::get_offset_of_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize697 = { sizeof (RuntimeSecurityFrame_t763259783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable697[5] = 
{
	RuntimeSecurityFrame_t763259783::get_offset_of_domain_0(),
	RuntimeSecurityFrame_t763259783::get_offset_of_method_1(),
	RuntimeSecurityFrame_t763259783::get_offset_of_assert_2(),
	RuntimeSecurityFrame_t763259783::get_offset_of_deny_3(),
	RuntimeSecurityFrame_t763259783::get_offset_of_permitonly_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize698 = { sizeof (SecurityFrame_t2203999178)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable698[5] = 
{
	SecurityFrame_t2203999178::get_offset_of__domain_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2203999178::get_offset_of__method_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2203999178::get_offset_of__assert_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2203999178::get_offset_of__deny_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2203999178::get_offset_of__permitonly_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize699 = { sizeof (SecurityManager_t3985798016), -1, sizeof(SecurityManager_t3985798016_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable699[3] = 
{
	SecurityManager_t3985798016_StaticFields::get_offset_of__lockObject_0(),
	SecurityManager_t3985798016_StaticFields::get_offset_of__declsecCache_1(),
	SecurityManager_t3985798016_StaticFields::get_offset_of__execution_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
