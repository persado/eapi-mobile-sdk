#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MobilesdkEnvironment, MobilesdkPSDClient, MobilesdkPSDClientBuilder, MobilesdkVariantResponse, MobilesdkPSDResponse, MobilesdkTouchpointVariantResponse, MobilesdkPSDTrack, MobilesdkTrackAction, MobilesdkPlatformCompanion, MobilesdkKotlinThrowable, MobilesdkKotlinEnumCompanion, MobilesdkKotlinEnum<E>, MobilesdkKotlinArray<T>, MobilesdkLibraryProperties, MobilesdkLoggingCompanion, MobilesdkPSDResponseCompanion, MobilesdkState, MobilesdkTouchpointVariantResponseCompanion, MobilesdkVariantResponseCompanion, MobilesdkCustomHttpClient, MobilesdkKtor_client_coreHttpClient, MobilesdkErrorMessageUtilsCompanion, MobilesdkErrorMessageUtilsErrorMesage, MobilesdkHashUtils, MobilesdkLoggingUtilsCompanion, MobilesdkPreferencesUtils, MobilesdkKotlinx_serialization_jsonJson, MobilesdkPreferences, MobilesdkUserAgentUtilsCompanion, MobilesdkKotlinException, MobilesdkPSDException, MobilesdkKotlinRuntimeException, MobilesdkKotlinIllegalStateException, MobilesdkKtor_client_coreHttpClientEngineConfig, MobilesdkKtor_client_coreHttpClientConfig<T>, MobilesdkKtor_client_coreHttpRequestBuilder, MobilesdkKtor_client_coreHttpClientCall, MobilesdkKotlinx_coroutines_coreCoroutineDispatcher, MobilesdkKtor_client_coreHttpReceivePipeline, MobilesdkKtor_client_coreHttpRequestPipeline, MobilesdkKtor_client_coreHttpResponsePipeline, MobilesdkKtor_client_coreHttpSendPipeline, MobilesdkKotlinx_serialization_coreSerializersModule, MobilesdkKotlinx_serialization_jsonJsonConfiguration, MobilesdkKotlinx_serialization_jsonJsonDefault, MobilesdkKotlinx_serialization_jsonJsonElement, MobilesdkKotlinx_serialization_coreSerialKind, MobilesdkKotlinNothing, MobilesdkKtor_client_coreHttpRequestData, MobilesdkKtor_client_coreHttpResponseData, MobilesdkKtor_client_coreProxyConfig, MobilesdkKtor_httpHeadersBuilder, MobilesdkKtor_client_coreHttpRequestBuilderCompanion, MobilesdkKtor_httpURLBuilder, MobilesdkKtor_httpHttpMethod, MobilesdkKtor_client_coreHttpClientCallCompanion, MobilesdkKtor_client_coreTypeInfo, MobilesdkKtor_client_coreHttpResponse, MobilesdkKtor_utilsAttributeKey<T>, MobilesdkKotlinAbstractCoroutineContextElement, MobilesdkKotlinx_coroutines_coreCoroutineDispatcherKey, MobilesdkKtor_utilsPipelinePhase, MobilesdkKtor_utilsPipeline<TSubject, TContext>, MobilesdkKtor_client_coreHttpReceivePipelinePhases, MobilesdkKtor_client_coreHttpRequestPipelinePhases, MobilesdkKtor_client_coreHttpResponsePipelinePhases, MobilesdkKtor_client_coreHttpResponseContainer, MobilesdkKtor_client_coreHttpSendPipelinePhases, MobilesdkKotlinx_serialization_jsonJsonElementCompanion, MobilesdkKtor_httpUrl, MobilesdkKtor_httpOutgoingContent, MobilesdkKtor_httpHttpStatusCode, MobilesdkKtor_utilsGMTDate, MobilesdkKtor_httpHttpProtocolVersion, MobilesdkKtor_utilsStringValuesBuilder, MobilesdkKtor_httpURLProtocol, MobilesdkKtor_httpParametersBuilder, MobilesdkKtor_httpURLBuilderCompanion, MobilesdkKotlinCancellationException, MobilesdkKotlinUnit, MobilesdkKtor_httpHttpMethodCompanion, MobilesdkKtor_ioMemory, MobilesdkKtor_ioIoBuffer, MobilesdkKotlinByteArray, MobilesdkKtor_ioByteReadPacket, MobilesdkKtor_ioByteOrder, MobilesdkKotlinAbstractCoroutineContextKey<B, E>, MobilesdkKtor_httpUrlCompanion, MobilesdkKtor_httpContentType, MobilesdkKtor_httpHttpStatusCodeCompanion, MobilesdkKtor_utilsGMTDateCompanion, MobilesdkKtor_utilsWeekDay, MobilesdkKtor_utilsMonth, MobilesdkKtor_httpHttpProtocolVersionCompanion, MobilesdkKtor_httpURLProtocolCompanion, MobilesdkKtor_httpUrlEncodingOption, MobilesdkKtor_ioMemoryCompanion, MobilesdkKtor_ioBufferCompanion, MobilesdkKtor_ioBuffer, MobilesdkKtor_ioChunkBuffer, MobilesdkKtor_ioChunkBufferCompanion, MobilesdkKotlinCharArray, MobilesdkKtor_ioIoBufferCompanion, MobilesdkKotlinByteIterator, MobilesdkKtor_ioAbstractInputCompanion, MobilesdkKtor_ioAbstractInput, MobilesdkKtor_ioByteReadPacketBaseCompanion, MobilesdkKtor_ioByteReadPacketBase, MobilesdkKtor_ioByteReadPacketPlatformBase, MobilesdkKtor_ioByteReadPacketCompanion, MobilesdkKtor_ioByteOrderCompanion, MobilesdkKotlinKTypeProjection, MobilesdkKtor_httpHeaderValueParam, MobilesdkKtor_httpHeaderValueWithParametersCompanion, MobilesdkKtor_httpHeaderValueWithParameters, MobilesdkKtor_httpContentTypeCompanion, MobilesdkKtor_utilsWeekDayCompanion, MobilesdkKtor_utilsMonthCompanion, MobilesdkKotlinx_coroutines_coreAtomicDesc, MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, MobilesdkKotlinCharIterator, MobilesdkKotlinKVariance, MobilesdkKotlinKTypeProjectionCompanion, MobilesdkKotlinx_coroutines_coreAtomicOp<__contravariant T>, MobilesdkKotlinx_coroutines_coreOpDescriptor, MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode, MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol MobilesdkKotlinComparable, MobilesdkKotlinx_serialization_coreKSerializer, MobilesdkKotlinSuspendFunction0, MobilesdkKotlinIterator, MobilesdkKotlinx_serialization_coreEncoder, MobilesdkKotlinx_serialization_coreSerialDescriptor, MobilesdkKotlinx_serialization_coreSerializationStrategy, MobilesdkKotlinx_serialization_coreDecoder, MobilesdkKotlinx_serialization_coreDeserializationStrategy, MobilesdkKotlinCoroutineContext, MobilesdkKotlinx_coroutines_coreCoroutineScope, MobilesdkKtor_ioCloseable, MobilesdkKtor_client_coreHttpClientEngine, MobilesdkKtor_client_coreHttpClientEngineCapability, MobilesdkKtor_utilsAttributes, MobilesdkKotlinx_serialization_coreSerialFormat, MobilesdkKotlinx_serialization_coreStringFormat, MobilesdkKotlinFunction, MobilesdkKotlinx_serialization_coreCompositeEncoder, MobilesdkKotlinAnnotation, MobilesdkKotlinx_serialization_coreCompositeDecoder, MobilesdkKotlinCoroutineContextElement, MobilesdkKotlinCoroutineContextKey, MobilesdkKtor_client_coreHttpClientFeature, MobilesdkKtor_httpHttpMessageBuilder, MobilesdkKotlinx_coroutines_coreJob, MobilesdkKtor_ioByteReadChannel, MobilesdkKtor_utilsTypeInfo, MobilesdkKtor_client_coreHttpRequest, MobilesdkKotlinContinuation, MobilesdkKotlinContinuationInterceptor, MobilesdkKotlinx_coroutines_coreRunnable, MobilesdkKotlinSuspendFunction2, MobilesdkKotlinx_serialization_coreSerializersModuleCollector, MobilesdkKotlinKClass, MobilesdkKtor_httpHeaders, MobilesdkKtor_utilsStringValues, MobilesdkKotlinMapEntry, MobilesdkKotlinx_coroutines_coreChildHandle, MobilesdkKotlinx_coroutines_coreChildJob, MobilesdkKotlinx_coroutines_coreDisposableHandle, MobilesdkKotlinSequence, MobilesdkKotlinx_coroutines_coreSelectClause0, MobilesdkKtor_ioReadSession, MobilesdkKotlinSuspendFunction1, MobilesdkKotlinAppendable, MobilesdkKotlinKType, MobilesdkKtor_httpHttpMessage, MobilesdkKotlinKDeclarationContainer, MobilesdkKotlinKAnnotatedElement, MobilesdkKotlinKClassifier, MobilesdkKtor_httpParameters, MobilesdkKotlinx_coroutines_coreParentJob, MobilesdkKotlinx_coroutines_coreSelectInstance, MobilesdkKtor_ioObjectPool, MobilesdkKtor_ioInput, MobilesdkKtor_ioOutput;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MobilesdkBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MobilesdkBase (MobilesdkBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MobilesdkMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MobilesdkMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMobilesdkKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MobilesdkNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface MobilesdkByte : MobilesdkNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MobilesdkUByte : MobilesdkNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MobilesdkShort : MobilesdkNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MobilesdkUShort : MobilesdkNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MobilesdkInt : MobilesdkNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MobilesdkUInt : MobilesdkNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MobilesdkLong : MobilesdkNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MobilesdkULong : MobilesdkNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MobilesdkFloat : MobilesdkNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MobilesdkDouble : MobilesdkNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MobilesdkBoolean : MobilesdkNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Expectation")))
@interface MobilesdkExpectation<T> : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)fulfillResult:(T _Nullable)result __attribute__((swift_name("fulfill(result:)")));
- (T _Nullable)wait __attribute__((swift_name("wait()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDClient")))
@interface MobilesdkPSDClient : MobilesdkBase
- (instancetype)initWithAppId:(NSString *)appId qaMode:(BOOL)qaMode env:(MobilesdkEnvironment *)env userAttributes:(NSDictionary<NSString *, NSString *> *)userAttributes __attribute__((swift_name("init(appId:qaMode:env:userAttributes:)"))) __attribute__((objc_designated_initializer));
- (void)initializeCallback:(void (^)(MobilesdkBoolean *, NSString * _Nullable))callback __attribute__((swift_name("initialize(callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDClient.Builder")))
@interface MobilesdkPSDClientBuilder : MobilesdkBase
- (instancetype)initWithAppId:(NSString *)appId __attribute__((swift_name("init(appId:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkPSDClient *)build __attribute__((swift_name("build()")));
- (MobilesdkPSDClientBuilder *)envValue:(MobilesdkEnvironment *)value __attribute__((swift_name("env(value:)")));
- (MobilesdkPSDClientBuilder *)qaModeValue:(BOOL)value __attribute__((swift_name("qaMode(value:)")));
- (MobilesdkPSDClientBuilder *)userAttributesValue:(NSDictionary<NSString *, NSString *> *)value __attribute__((swift_name("userAttributes(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDContent")))
@interface MobilesdkPSDContent : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MobilesdkVariantResponse * _Nullable)getCampaignContentCampaignId:(NSString *)campaignId __attribute__((swift_name("getCampaignContent(campaignId:)")));
- (MobilesdkVariantResponse * _Nullable)getCampaignContentByLabelCampaignLabel:(NSString *)campaignLabel __attribute__((swift_name("getCampaignContentByLabel(campaignLabel:)")));
- (NSSet<NSString *> *)getCampaignLabels __attribute__((swift_name("getCampaignLabels()")));
- (MobilesdkPSDResponse * _Nullable)getPSDResponse __attribute__((swift_name("getPSDResponse()")));
- (MobilesdkTouchpointVariantResponse * _Nullable)getTouchpointContentCampaignId:(NSString *)campaignId touchpointName:(NSString *)touchpointName __attribute__((swift_name("getTouchpointContent(campaignId:touchpointName:)")));
- (MobilesdkTouchpointVariantResponse * _Nullable)getTouchpointContentByLabelCampaignLabel:(NSString *)campaignLabel touchpointName:(NSString *)touchpointName __attribute__((swift_name("getTouchpointContentByLabel(campaignLabel:touchpointName:)")));
- (NSDictionary<NSString *, MobilesdkVariantResponse *> * _Nullable)getVariantMapCampaignId:(NSString *)campaignId __attribute__((swift_name("getVariantMap(campaignId:)")));
- (NSDictionary<NSString *, MobilesdkVariantResponse *> * _Nullable)getVariantMapByLabelCampaignLabel:(NSString *)campaignLabel __attribute__((swift_name("getVariantMapByLabel(campaignLabel:)")));
- (BOOL)isQaMode __attribute__((swift_name("isQaMode()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDTrack")))
@interface MobilesdkPSDTrack : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MobilesdkPSDTrack *)envEnv:(MobilesdkEnvironment *)env __attribute__((swift_name("env(env:)")));
- (void)trackAction:(MobilesdkTrackAction *)action campaignId:(NSString *)campaignId __attribute__((swift_name("track(action:campaignId:)")));
- (void)trackAction:(MobilesdkTrackAction *)action campaignId:(NSString *)campaignId callback:(void (^)(MobilesdkBoolean *, NSString * _Nullable))callback __attribute__((swift_name("track(action:campaignId:callback:)")));
- (void)trackByCampaignLabelAction:(MobilesdkTrackAction *)action campaignLabel:(NSString *)campaignLabel __attribute__((swift_name("trackByCampaignLabel(action:campaignLabel:)")));
- (void)trackByCampaignLabelAction:(MobilesdkTrackAction *)action campaignLabel:(NSString *)campaignLabel callback:(void (^)(MobilesdkBoolean *, NSString * _Nullable))callback __attribute__((swift_name("trackByCampaignLabel(action:campaignLabel:callback:)")));
- (MobilesdkPSDTrack *)userAttributesValue:(NSDictionary<NSString *, NSString *> *)value __attribute__((swift_name("userAttributes(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface MobilesdkPlatform : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MobilesdkPlatformCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform.Companion")))
@interface MobilesdkPlatformCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPlatformCompanion *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserIdWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserId(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)isTrackingEnabledWithCompletionHandler:(void (^)(MobilesdkBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isTrackingEnabled(completionHandler:)")));
- (BOOL)networkUnavailableCause:(MobilesdkKotlinThrowable *)cause __attribute__((swift_name("networkUnavailable(cause:)")));
- (BOOL)serverUnavailableCause:(MobilesdkKotlinThrowable *)cause __attribute__((swift_name("serverUnavailable(cause:)")));
@property (readonly) NSString *userAgent __attribute__((swift_name("userAgent")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MobilesdkKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MobilesdkKotlinEnum<E> : MobilesdkBase <MobilesdkKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Environment")))
@interface MobilesdkEnvironment : MobilesdkKotlinEnum<MobilesdkEnvironment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MobilesdkEnvironment *prod __attribute__((swift_name("prod")));
@property (class, readonly) MobilesdkEnvironment *stg __attribute__((swift_name("stg")));
@property (class, readonly) MobilesdkEnvironment *qa __attribute__((swift_name("qa")));
@property (class, readonly) MobilesdkEnvironment *qaaws __attribute__((swift_name("qaaws")));
@property (class, readonly) MobilesdkEnvironment *dev __attribute__((swift_name("dev")));
@property (class, readonly) MobilesdkEnvironment *local __attribute__((swift_name("local")));
+ (MobilesdkKotlinArray<MobilesdkEnvironment *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *env __attribute__((swift_name("env")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryProperties")))
@interface MobilesdkLibraryProperties : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)libraryProperties __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkLibraryProperties *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logging")))
@interface MobilesdkLogging : MobilesdkBase
- (instancetype)initWithUA:(NSString *)UA appId:(NSString *)appId isError:(BOOL)isError message:(NSString *)message qaMode:(BOOL)qaMode __attribute__((swift_name("init(UA:appId:isError:message:qaMode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkLoggingCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *UA __attribute__((swift_name("UA")));
@property (readonly) NSString *appId __attribute__((swift_name("appId")));
@property (readonly) BOOL isError __attribute__((swift_name("isError")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) BOOL qaMode __attribute__((swift_name("qaMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Logging.Companion")))
@interface MobilesdkLoggingCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkLoggingCompanion *shared __attribute__((swift_name("shared")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDResponse")))
@interface MobilesdkPSDResponse : MobilesdkBase
- (instancetype)initWithGeneratedAt:(int64_t)generatedAt variantResponseMap:(NSDictionary<NSString *, MobilesdkVariantResponse *> *)variantResponseMap __attribute__((swift_name("init(generatedAt:variantResponseMap:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkPSDResponseCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, MobilesdkVariantResponse *> *)component2 __attribute__((swift_name("component2()")));
- (MobilesdkPSDResponse *)doCopyGeneratedAt:(int64_t)generatedAt variantResponseMap:(NSDictionary<NSString *, MobilesdkVariantResponse *> *)variantResponseMap __attribute__((swift_name("doCopy(generatedAt:variantResponseMap:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t generatedAt __attribute__((swift_name("generatedAt")));
@property (readonly) NSDictionary<NSString *, MobilesdkVariantResponse *> *variantResponseMap __attribute__((swift_name("variantResponseMap")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDResponse.Companion")))
@interface MobilesdkPSDResponseCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPSDResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("State")))
@interface MobilesdkState : MobilesdkKotlinEnum<MobilesdkState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MobilesdkState *initialization __attribute__((swift_name("initialization")));
@property (class, readonly) MobilesdkState *tracking __attribute__((swift_name("tracking")));
+ (MobilesdkKotlinArray<MobilesdkState *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchpointVariantResponse")))
@interface MobilesdkTouchpointVariantResponse : MobilesdkBase
- (instancetype)initWithName:(NSString * _Nullable)name content:(NSString * _Nullable)content type:(NSString * _Nullable)type __attribute__((swift_name("init(name:content:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkTouchpointVariantResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MobilesdkTouchpointVariantResponse *)doCopyName:(NSString * _Nullable)name content:(NSString * _Nullable)content type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(name:content:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable content __attribute__((swift_name("content")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TouchpointVariantResponse.Companion")))
@interface MobilesdkTouchpointVariantResponseCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkTouchpointVariantResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackAction")))
@interface MobilesdkTrackAction : MobilesdkKotlinEnum<MobilesdkTrackAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MobilesdkTrackAction *click __attribute__((swift_name("click")));
@property (class, readonly) MobilesdkTrackAction *convert __attribute__((swift_name("convert")));
@property (class, readonly) MobilesdkTrackAction *view __attribute__((swift_name("view")));
+ (MobilesdkKotlinArray<MobilesdkTrackAction *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VariantResponse")))
@interface MobilesdkVariantResponse : MobilesdkBase
- (instancetype)initWithVariantCode:(NSString * _Nullable)variantCode genoId:(NSString * _Nullable)genoId languageSegment:(NSString * _Nullable)languageSegment touchpoints:(NSArray<id> * _Nullable)touchpoints params:(NSDictionary<id, id> * _Nullable)params defaultParams:(NSDictionary<id, id> * _Nullable)defaultParams campaignLabel:(NSString * _Nullable)campaignLabel psdTracking:(BOOL)psdTracking serving:(BOOL)serving useCaseCampaign:(NSString * _Nullable)useCaseCampaign message:(NSString * _Nullable)message __attribute__((swift_name("init(variantCode:genoId:languageSegment:touchpoints:params:defaultParams:campaignLabel:psdTracking:serving:useCaseCampaign:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkVariantResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<id> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSDictionary<id, id> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSDictionary<id, id> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (BOOL)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (MobilesdkVariantResponse *)doCopyVariantCode:(NSString * _Nullable)variantCode genoId:(NSString * _Nullable)genoId languageSegment:(NSString * _Nullable)languageSegment touchpoints:(NSArray<id> * _Nullable)touchpoints params:(NSDictionary<id, id> * _Nullable)params defaultParams:(NSDictionary<id, id> * _Nullable)defaultParams campaignLabel:(NSString * _Nullable)campaignLabel psdTracking:(BOOL)psdTracking serving:(BOOL)serving useCaseCampaign:(NSString * _Nullable)useCaseCampaign message:(NSString * _Nullable)message __attribute__((swift_name("doCopy(variantCode:genoId:languageSegment:touchpoints:params:defaultParams:campaignLabel:psdTracking:serving:useCaseCampaign:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable campaignLabel __attribute__((swift_name("campaignLabel")));
@property (readonly) NSDictionary<id, id> * _Nullable defaultParams __attribute__((swift_name("defaultParams")));
@property (readonly) NSString * _Nullable genoId __attribute__((swift_name("genoId")));
@property (readonly) NSString * _Nullable languageSegment __attribute__((swift_name("languageSegment")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSDictionary<id, id> * _Nullable params __attribute__((swift_name("params")));
@property (readonly) BOOL psdTracking __attribute__((swift_name("psdTracking")));
@property (readonly) BOOL serving __attribute__((swift_name("serving")));
@property (readonly) NSArray<id> * _Nullable touchpoints __attribute__((swift_name("touchpoints")));
@property (readonly) NSString * _Nullable useCaseCampaign __attribute__((swift_name("useCaseCampaign")));
@property (readonly) NSString * _Nullable variantCode __attribute__((swift_name("variantCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VariantResponse.Companion")))
@interface MobilesdkVariantResponseCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkVariantResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CustomHttpClient")))
@interface MobilesdkCustomHttpClient : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)customHttpClient __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkCustomHttpClient *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorMessageUtils")))
@interface MobilesdkErrorMessageUtils : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MobilesdkErrorMessageUtilsCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorMessageUtils.Companion")))
@interface MobilesdkErrorMessageUtilsCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkErrorMessageUtilsCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)getErrorMessageCause:(MobilesdkKotlinThrowable *)cause state:(MobilesdkState *)state tracking:(BOOL)tracking __attribute__((swift_name("getErrorMessage(cause:state:tracking:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorMessageUtils.ErrorMesage")))
@interface MobilesdkErrorMessageUtilsErrorMesage : MobilesdkKotlinEnum<MobilesdkErrorMessageUtilsErrorMesage *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MobilesdkErrorMessageUtilsErrorMesage *internetUnavailable __attribute__((swift_name("internetUnavailable")));
@property (class, readonly) MobilesdkErrorMessageUtilsErrorMesage *serverUnavailable __attribute__((swift_name("serverUnavailable")));
@property (class, readonly) MobilesdkErrorMessageUtilsErrorMesage *trkServerUnavailable __attribute__((swift_name("trkServerUnavailable")));
@property (class, readonly) MobilesdkErrorMessageUtilsErrorMesage *campaignsNotFound __attribute__((swift_name("campaignsNotFound")));
@property (class, readonly) MobilesdkErrorMessageUtilsErrorMesage *trkCampaignNotFound __attribute__((swift_name("trkCampaignNotFound")));
@property (class, readonly) MobilesdkErrorMessageUtilsErrorMesage *theInitGeneric __attribute__((swift_name("theInitGeneric")));
@property (class, readonly) MobilesdkErrorMessageUtilsErrorMesage *trkGeneric __attribute__((swift_name("trkGeneric")));
@property (class, readonly) MobilesdkErrorMessageUtilsErrorMesage *trkPersadoDisabled __attribute__((swift_name("trkPersadoDisabled")));
@property (class, readonly) MobilesdkErrorMessageUtilsErrorMesage *trkUserOptOut __attribute__((swift_name("trkUserOptOut")));
+ (MobilesdkKotlinArray<MobilesdkErrorMessageUtilsErrorMesage *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HashUtils")))
@interface MobilesdkHashUtils : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hashUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkHashUtils *shared __attribute__((swift_name("shared")));
- (NSString *)md5Text:(NSString *)text __attribute__((swift_name("md5(text:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggingUtils")))
@interface MobilesdkLoggingUtils : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MobilesdkLoggingUtilsCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggingUtils.Companion")))
@interface MobilesdkLoggingUtilsCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkLoggingUtilsCompanion *shared __attribute__((swift_name("shared")));
- (void)logNetworkErrorsTracking:(BOOL)tracking environment:(NSString *)environment __attribute__((swift_name("logNetworkErrors(tracking:environment:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkStatus")))
@interface MobilesdkNetworkStatus : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) BOOL isNetworkAvailable __attribute__((swift_name("isNetworkAvailable")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Preferences")))
@interface MobilesdkPreferences : MobilesdkBase
- (instancetype)initWithName:(NSString * _Nullable)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (NSMutableArray<NSString *> *)getListKey:(NSString *)key __attribute__((swift_name("getList(key:)")));
- (NSString * _Nullable)getStringKey:(NSString *)key __attribute__((swift_name("getString(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
- (void)setBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("setBoolean(key:value:)")));
- (void)setListKey:(NSString *)key value:(NSMutableArray<NSString *> *)value __attribute__((swift_name("setList(key:value:)")));
- (void)setStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("setString(key:value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesUtils")))
@interface MobilesdkPreferencesUtils : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)preferencesUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkPreferencesUtils *shared __attribute__((swift_name("shared")));
- (void)addErrorToListValue:(NSString *)value __attribute__((swift_name("addErrorToList(value:)")));
- (void)clearNonErrors __attribute__((swift_name("clearNonErrors()")));
@property (readonly) NSString *APP_ID __attribute__((swift_name("APP_ID")));
@property (readonly) NSString *NETWORK_ERRORS __attribute__((swift_name("NETWORK_ERRORS")));
@property (readonly) NSString *PERSADO_RESPONSE __attribute__((swift_name("PERSADO_RESPONSE")));
@property (readonly) NSString *QA_MODE __attribute__((swift_name("QA_MODE")));
@property (readonly) MobilesdkKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@property (readonly) MobilesdkPreferences *pref __attribute__((swift_name("pref")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAgentUtils")))
@interface MobilesdkUserAgentUtils : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MobilesdkUserAgentUtilsCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAgentUtils.Companion")))
@interface MobilesdkUserAgentUtilsCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkUserAgentUtilsCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)appNameAndVersion __attribute__((swift_name("appNameAndVersion()")));
- (NSString *)cfNetworkVersion __attribute__((swift_name("cfNetworkVersion()")));
- (NSString *)darwinVersion __attribute__((swift_name("darwinVersion()")));
- (NSString *)deviceName __attribute__((swift_name("deviceName()")));
- (NSString *)deviceVersion __attribute__((swift_name("deviceVersion()")));
- (NSString *)mobileAppName __attribute__((swift_name("mobileAppName()")));
- (NSString *)userAgentString __attribute__((swift_name("userAgentString()")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MobilesdkKotlinThrowable : MobilesdkBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MobilesdkKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface MobilesdkKotlinException : MobilesdkKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("PSDException")))
@interface MobilesdkPSDException : MobilesdkKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDAppIdNotFoundException")))
@interface MobilesdkPSDAppIdNotFoundException : MobilesdkPSDException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDNetworkException")))
@interface MobilesdkPSDNetworkException : MobilesdkPSDException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDUnavailableException")))
@interface MobilesdkPSDUnavailableException : MobilesdkPSDException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDUnsupportedOperationException")))
@interface MobilesdkPSDUnsupportedOperationException : MobilesdkPSDException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RunBlockingKt")))
@interface MobilesdkRunBlockingKt : MobilesdkBase
+ (id _Nullable)runBlockingBlock:(id<MobilesdkKotlinSuspendFunction0>)block __attribute__((swift_name("runBlocking(block:)")));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface MobilesdkKotlinRuntimeException : MobilesdkKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MobilesdkKotlinIllegalStateException : MobilesdkKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface MobilesdkKotlinCancellationException : MobilesdkKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MobilesdkKotlinEnumCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MobilesdkKotlinArray<T> : MobilesdkBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MobilesdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MobilesdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MobilesdkKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MobilesdkKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MobilesdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MobilesdkKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MobilesdkKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MobilesdkKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MobilesdkKotlinx_serialization_coreKSerializer <MobilesdkKotlinx_serialization_coreSerializationStrategy, MobilesdkKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MobilesdkKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MobilesdkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol MobilesdkKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface MobilesdkKtor_client_coreHttpClient : MobilesdkBase <MobilesdkKotlinx_coroutines_coreCoroutineScope, MobilesdkKtor_ioCloseable>
- (instancetype)initWithEngine:(id<MobilesdkKtor_client_coreHttpClientEngine>)engine userConfig:(MobilesdkKtor_client_coreHttpClientConfig<MobilesdkKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (MobilesdkKtor_client_coreHttpClient *)configBlock:(void (^)(MobilesdkKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeBuilder:(MobilesdkKtor_client_coreHttpRequestBuilder *)builder completionHandler:(void (^)(MobilesdkKtor_client_coreHttpClientCall * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(builder:completionHandler:)"))) __attribute__((unavailable("Unbound [HttpClientCall] is deprecated. Consider using [request<HttpResponse>(builder)] instead.")));
- (BOOL)isSupportedCapability:(id<MobilesdkKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MobilesdkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<MobilesdkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) MobilesdkKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher"))) __attribute__((unavailable("[dispatcher] is deprecated. Use coroutineContext instead.")));
@property (readonly) id<MobilesdkKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) MobilesdkKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) MobilesdkKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) MobilesdkKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) MobilesdkKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) MobilesdkKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol MobilesdkKotlinx_serialization_coreSerialFormat
@required
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol MobilesdkKotlinx_serialization_coreStringFormat <MobilesdkKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface MobilesdkKotlinx_serialization_jsonJson : MobilesdkBase <MobilesdkKotlinx_serialization_coreStringFormat>
- (instancetype)initWithConfiguration:(MobilesdkKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(MobilesdkKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(MobilesdkKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (MobilesdkKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (MobilesdkKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) MobilesdkKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol MobilesdkKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol MobilesdkKotlinSuspendFunction0 <MobilesdkKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MobilesdkKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MobilesdkKotlinx_serialization_coreEncoder
@required
- (id<MobilesdkKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MobilesdkKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MobilesdkKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MobilesdkKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<MobilesdkKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MobilesdkKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MobilesdkKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MobilesdkKotlinx_serialization_coreDecoder
@required
- (id<MobilesdkKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MobilesdkKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MobilesdkKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MobilesdkKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MobilesdkKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MobilesdkKotlinCoroutineContextElement> _Nullable)getKey:(id<MobilesdkKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MobilesdkKotlinCoroutineContext>)minusKeyKey:(id<MobilesdkKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MobilesdkKotlinCoroutineContext>)plusContext:(id<MobilesdkKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol MobilesdkKtor_client_coreHttpClientEngine <MobilesdkKotlinx_coroutines_coreCoroutineScope, MobilesdkKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(MobilesdkKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(MobilesdkKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(MobilesdkKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) MobilesdkKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) MobilesdkKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<MobilesdkKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface MobilesdkKtor_client_coreHttpClientEngineConfig : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property MobilesdkKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) MobilesdkKotlinNothing *response __attribute__((swift_name("response"))) __attribute__((unavailable("Response config is deprecated. See [HttpPlainText] feature for charset configuration")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface MobilesdkKtor_client_coreHttpClientConfig<T> : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MobilesdkKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(MobilesdkKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installFeature:(id<MobilesdkKtor_client_coreHttpClientFeature>)feature configure:(void (^)(id))configure __attribute__((swift_name("install(feature:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(MobilesdkKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(MobilesdkKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol MobilesdkKtor_httpHttpMessageBuilder
@required
@property (readonly) MobilesdkKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface MobilesdkKtor_client_coreHttpRequestBuilder : MobilesdkBase <MobilesdkKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MobilesdkKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<MobilesdkKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<MobilesdkKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<MobilesdkKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (MobilesdkKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(MobilesdkKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (MobilesdkKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(MobilesdkKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(MobilesdkKtor_httpURLBuilder *, MobilesdkKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<MobilesdkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property (readonly) id<MobilesdkKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) MobilesdkKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property MobilesdkKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MobilesdkKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface MobilesdkKtor_client_coreHttpClientCall : MobilesdkBase <MobilesdkKotlinx_coroutines_coreCoroutineScope>
@property (class, readonly, getter=companion) MobilesdkKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<MobilesdkKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(MobilesdkKtor_client_coreTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveInfo:(id<MobilesdkKtor_utilsTypeInfo>)info completionHandler_:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(info:completionHandler_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<MobilesdkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MobilesdkKtor_client_coreHttpClient * _Nullable client __attribute__((swift_name("client")));
@property (readonly) id<MobilesdkKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MobilesdkKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property (readonly) MobilesdkKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol MobilesdkKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol MobilesdkKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(MobilesdkKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(MobilesdkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(MobilesdkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(MobilesdkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(MobilesdkKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(MobilesdkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(MobilesdkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(MobilesdkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<MobilesdkKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MobilesdkKotlinCoroutineContextElement <MobilesdkKotlinCoroutineContext>
@required
@property (readonly) id<MobilesdkKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MobilesdkKotlinAbstractCoroutineContextElement : MobilesdkBase <MobilesdkKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<MobilesdkKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MobilesdkKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MobilesdkKotlinContinuationInterceptor <MobilesdkKotlinCoroutineContextElement>
@required
- (id<MobilesdkKotlinContinuation>)interceptContinuationContinuation:(id<MobilesdkKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MobilesdkKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface MobilesdkKotlinx_coroutines_coreCoroutineDispatcher : MobilesdkKotlinAbstractCoroutineContextElement <MobilesdkKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MobilesdkKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<MobilesdkKotlinCoroutineContext>)context block:(id<MobilesdkKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<MobilesdkKotlinCoroutineContext>)context block:(id<MobilesdkKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<MobilesdkKotlinContinuation>)interceptContinuationContinuation:(id<MobilesdkKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<MobilesdkKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (MobilesdkKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (MobilesdkKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(MobilesdkKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<MobilesdkKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface MobilesdkKtor_utilsPipeline<TSubject, TContext> : MobilesdkBase
- (instancetype)initWithPhase:(MobilesdkKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MobilesdkKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MobilesdkKotlinArray<MobilesdkKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(MobilesdkKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(MobilesdkKtor_utilsPipelinePhase *)reference phase:(MobilesdkKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(MobilesdkKtor_utilsPipelinePhase *)reference phase:(MobilesdkKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(MobilesdkKtor_utilsPipelinePhase *)phase block:(id<MobilesdkKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (void)mergeFrom:(MobilesdkKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
@property (readonly) id<MobilesdkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<MobilesdkKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface MobilesdkKtor_client_coreHttpReceivePipeline : MobilesdkKtor_utilsPipeline<MobilesdkKtor_client_coreHttpResponse *, MobilesdkKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MobilesdkKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MobilesdkKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MobilesdkKotlinArray<MobilesdkKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface MobilesdkKtor_client_coreHttpRequestPipeline : MobilesdkKtor_utilsPipeline<id, MobilesdkKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MobilesdkKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MobilesdkKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MobilesdkKotlinArray<MobilesdkKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface MobilesdkKtor_client_coreHttpResponsePipeline : MobilesdkKtor_utilsPipeline<MobilesdkKtor_client_coreHttpResponseContainer *, MobilesdkKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MobilesdkKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MobilesdkKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MobilesdkKotlinArray<MobilesdkKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface MobilesdkKtor_client_coreHttpSendPipeline : MobilesdkKtor_utilsPipeline<id, MobilesdkKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MobilesdkKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MobilesdkKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MobilesdkKotlinArray<MobilesdkKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MobilesdkKotlinx_serialization_coreSerializersModule : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<MobilesdkKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MobilesdkKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<MobilesdkKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MobilesdkKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<MobilesdkKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MobilesdkKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface MobilesdkKotlinx_serialization_jsonJsonConfiguration : MobilesdkBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface MobilesdkKotlinx_serialization_jsonJsonDefault : MobilesdkKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithConfiguration:(MobilesdkKotlinx_serialization_jsonJsonConfiguration *)configuration serializersModule:(MobilesdkKotlinx_serialization_coreSerializersModule *)serializersModule __attribute__((swift_name("init(configuration:serializersModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface MobilesdkKotlinx_serialization_jsonJsonElement : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) MobilesdkKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MobilesdkKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MobilesdkKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol MobilesdkKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MobilesdkKotlinx_serialization_coreSerialKind : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MobilesdkKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MobilesdkKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MobilesdkKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MobilesdkKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MobilesdkKotlinNothing : MobilesdkBase
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MobilesdkKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface MobilesdkKtor_client_coreHttpRequestData : MobilesdkBase
- (instancetype)initWithUrl:(MobilesdkKtor_httpUrl *)url method:(MobilesdkKtor_httpHttpMethod *)method headers:(id<MobilesdkKtor_httpHeaders>)headers body:(MobilesdkKtor_httpOutgoingContent *)body executionContext:(id<MobilesdkKotlinx_coroutines_coreJob>)executionContext attributes:(id<MobilesdkKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<MobilesdkKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MobilesdkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MobilesdkKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<MobilesdkKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<MobilesdkKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MobilesdkKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MobilesdkKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface MobilesdkKtor_client_coreHttpResponseData : MobilesdkBase
- (instancetype)initWithStatusCode:(MobilesdkKtor_httpHttpStatusCode *)statusCode requestTime:(MobilesdkKtor_utilsGMTDate *)requestTime headers:(id<MobilesdkKtor_httpHeaders>)headers version:(MobilesdkKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<MobilesdkKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<MobilesdkKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<MobilesdkKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MobilesdkKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) MobilesdkKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) MobilesdkKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface MobilesdkKtor_client_coreProxyConfig : MobilesdkBase
- (instancetype)initWithUrl:(MobilesdkKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MobilesdkKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientFeature")))
@protocol MobilesdkKtor_client_coreHttpClientFeature
@required
- (void)installFeature:(id)feature scope:(MobilesdkKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(feature:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) MobilesdkKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface MobilesdkKtor_utilsStringValuesBuilder : MobilesdkBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<MobilesdkKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<MobilesdkKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<MobilesdkKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MobilesdkKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property BOOL built __attribute__((swift_name("built")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) MobilesdkMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface MobilesdkKtor_httpHeadersBuilder : MobilesdkKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MobilesdkKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface MobilesdkKtor_client_coreHttpRequestBuilderCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface MobilesdkKtor_httpURLBuilder : MobilesdkBase
- (instancetype)initWithProtocol:(MobilesdkKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(MobilesdkKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (MobilesdkKtor_httpURLBuilder *)pathComponents:(MobilesdkKotlinArray<NSString *> *)components __attribute__((swift_name("path(components:)")));
- (MobilesdkKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) MobilesdkKtor_httpParametersBuilder *parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property int32_t port __attribute__((swift_name("port")));
@property MobilesdkKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol MobilesdkKotlinx_coroutines_coreJob <MobilesdkKotlinCoroutineContextElement>
@required
- (id<MobilesdkKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<MobilesdkKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(MobilesdkKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (MobilesdkKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<MobilesdkKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(MobilesdkKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<MobilesdkKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(MobilesdkKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(MobilesdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<MobilesdkKotlinx_coroutines_coreJob>)plusOther_:(id<MobilesdkKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<MobilesdkKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<MobilesdkKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface MobilesdkKtor_httpHttpMethod : MobilesdkBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MobilesdkKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface MobilesdkKtor_client_coreHttpClientCallCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((deprecated("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol MobilesdkKtor_ioByteReadChannel
@required
- (BOOL)cancelCause_:(MobilesdkKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(MobilesdkLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(MobilesdkKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(MobilesdkLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(MobilesdkKtor_ioIoBuffer *)dst completionHandler:(void (^)(MobilesdkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(MobilesdkKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(MobilesdkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(MobilesdkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(MobilesdkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(MobilesdkBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(MobilesdkByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(MobilesdkDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(MobilesdkFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(MobilesdkKtor_ioIoBuffer *)dst n:(int32_t)n completionHandler:(void (^)(MobilesdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(MobilesdkKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(MobilesdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(MobilesdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(MobilesdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(MobilesdkInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(MobilesdkLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(MobilesdkKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:headerSizeHint:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit headerSizeHint:(int32_t)headerSizeHint completionHandler:(void (^)(MobilesdkKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:headerSizeHint:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<MobilesdkKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(MobilesdkShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<MobilesdkKotlinSuspendFunction1>)consumer completionHandler:(void (^)(MobilesdkKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<MobilesdkKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(MobilesdkBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) MobilesdkKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property MobilesdkKtor_ioByteOrder *readByteOrder __attribute__((swift_name("readByteOrder"))) __attribute__((unavailable("Setting byte order is no longer supported. Read/write in big endian and use reverseByteOrder() extensions.")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((swift_name("Ktor_utilsTypeInfo")))
@protocol MobilesdkKtor_utilsTypeInfo
@required
@property (readonly) id<MobilesdkKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<MobilesdkKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<MobilesdkKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreTypeInfo")))
@interface MobilesdkKtor_client_coreTypeInfo : MobilesdkBase <MobilesdkKtor_utilsTypeInfo>
- (instancetype)initWithType:(id<MobilesdkKotlinKClass>)type reifiedType:(id<MobilesdkKotlinKType>)reifiedType kotlinType:(id<MobilesdkKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("This was moved to another package.")));
- (id<MobilesdkKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<MobilesdkKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<MobilesdkKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (MobilesdkKtor_client_coreTypeInfo *)doCopyType:(id<MobilesdkKotlinKClass>)type reifiedType:(id<MobilesdkKotlinKType>)reifiedType kotlinType:(id<MobilesdkKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MobilesdkKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<MobilesdkKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<MobilesdkKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol MobilesdkKtor_httpHttpMessage
@required
@property (readonly) id<MobilesdkKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol MobilesdkKtor_client_coreHttpRequest <MobilesdkKtor_httpHttpMessage, MobilesdkKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<MobilesdkKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MobilesdkKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) MobilesdkKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) MobilesdkKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MobilesdkKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface MobilesdkKtor_client_coreHttpResponse : MobilesdkBase <MobilesdkKtor_httpHttpMessage, MobilesdkKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MobilesdkKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<MobilesdkKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) MobilesdkKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) MobilesdkKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) MobilesdkKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface MobilesdkKtor_utilsAttributeKey<T> : MobilesdkBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol MobilesdkKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MobilesdkKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface MobilesdkKotlinAbstractCoroutineContextKey<B, E> : MobilesdkBase <MobilesdkKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<MobilesdkKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<MobilesdkKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface MobilesdkKotlinx_coroutines_coreCoroutineDispatcherKey : MobilesdkKotlinAbstractCoroutineContextKey<id<MobilesdkKotlinContinuationInterceptor>, MobilesdkKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<MobilesdkKotlinCoroutineContextKey>)baseKey safeCast:(id<MobilesdkKotlinCoroutineContextElement> _Nullable (^)(id<MobilesdkKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol MobilesdkKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface MobilesdkKtor_utilsPipelinePhase : MobilesdkBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol MobilesdkKotlinSuspendFunction2 <MobilesdkKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface MobilesdkKtor_client_coreHttpReceivePipelinePhases : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface MobilesdkKtor_client_coreHttpRequestPipelinePhases : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface MobilesdkKtor_client_coreHttpResponsePipelinePhases : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface MobilesdkKtor_client_coreHttpResponseContainer : MobilesdkBase
- (instancetype)initWithExpectedType:(id<MobilesdkKtor_utilsTypeInfo>)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithExpectedType:(MobilesdkKtor_client_coreTypeInfo *)expectedType response_:(id)response __attribute__((swift_name("init(expectedType:response_:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkKtor_client_coreTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (MobilesdkKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(MobilesdkKtor_client_coreTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MobilesdkKtor_client_coreTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface MobilesdkKtor_client_coreHttpSendPipelinePhases : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) MobilesdkKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MobilesdkKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MobilesdkKotlinKClass>)kClass provider:(id<MobilesdkKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MobilesdkKotlinKClass>)kClass serializer:(id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MobilesdkKotlinKClass>)baseClass actualClass:(id<MobilesdkKotlinKClass>)actualClass actualSerializer:(id<MobilesdkKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MobilesdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MobilesdkKotlinKClass>)baseClass defaultDeserializerProvider:(id<MobilesdkKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MobilesdkKotlinKClass>)baseClass defaultSerializerProvider:(id<MobilesdkKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MobilesdkKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MobilesdkKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MobilesdkKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol MobilesdkKotlinKClass <MobilesdkKotlinKDeclarationContainer, MobilesdkKotlinKAnnotatedElement, MobilesdkKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface MobilesdkKotlinx_serialization_jsonJsonElementCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface MobilesdkKtor_httpUrl : MobilesdkBase
- (instancetype)initWithProtocol:(MobilesdkKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<MobilesdkKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<MobilesdkKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (MobilesdkKtor_httpUrl *)doCopyProtocol:(MobilesdkKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<MobilesdkKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<MobilesdkKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) MobilesdkKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol MobilesdkKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MobilesdkKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol MobilesdkKtor_httpHeaders <MobilesdkKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface MobilesdkKtor_httpOutgoingContent : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)getPropertyKey:(MobilesdkKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(MobilesdkKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
@property (readonly) MobilesdkLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) MobilesdkKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<MobilesdkKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface MobilesdkKtor_httpHttpStatusCode : MobilesdkBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MobilesdkKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (MobilesdkKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface MobilesdkKtor_utilsGMTDate : MobilesdkBase <MobilesdkKotlinComparable>
@property (class, readonly, getter=companion) MobilesdkKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MobilesdkKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (MobilesdkKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (MobilesdkKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (MobilesdkKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(MobilesdkKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(MobilesdkKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) MobilesdkKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) MobilesdkKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface MobilesdkKtor_httpHttpProtocolVersion : MobilesdkBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (MobilesdkKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol MobilesdkKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface MobilesdkKtor_httpURLProtocol : MobilesdkBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (MobilesdkKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface MobilesdkKtor_httpParametersBuilder : MobilesdkKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size urlEncodingOption:(MobilesdkKtor_httpUrlEncodingOption *)urlEncodingOption __attribute__((swift_name("init(size:urlEncodingOption:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<MobilesdkKtor_httpParameters>)build __attribute__((swift_name("build()")));
@property MobilesdkKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface MobilesdkKtor_httpURLBuilderCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MobilesdkKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol MobilesdkKotlinx_coroutines_coreChildHandle <MobilesdkKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(MobilesdkKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<MobilesdkKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol MobilesdkKotlinx_coroutines_coreChildJob <MobilesdkKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<MobilesdkKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MobilesdkKotlinUnit : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol MobilesdkKotlinSequence
@required
- (id<MobilesdkKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol MobilesdkKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<MobilesdkKotlinx_coroutines_coreSelectInstance>)select block:(id<MobilesdkKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface MobilesdkKtor_httpHttpMethodCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (MobilesdkKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<MobilesdkKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) MobilesdkKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) MobilesdkKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) MobilesdkKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) MobilesdkKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) MobilesdkKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) MobilesdkKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) MobilesdkKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface MobilesdkKtor_ioMemory : MobilesdkBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(MobilesdkKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(MobilesdkKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (MobilesdkKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (MobilesdkKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface MobilesdkKtor_ioBuffer : MobilesdkBase
- (instancetype)initWithMemory:(MobilesdkKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (int32_t)discardCount:(int32_t)count __attribute__((swift_name("discard(count:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (int64_t)discardCount_:(int64_t)count __attribute__((swift_name("discard(count_:)"))) __attribute__((unavailable("Use discardExact instead.")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (MobilesdkKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(MobilesdkKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property id _Nullable attachment __attribute__((swift_name("attachment"))) __attribute__((deprecated("Will be removed. Inherit Buffer and add required fields instead.")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) MobilesdkKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface MobilesdkKtor_ioChunkBuffer : MobilesdkKtor_ioBuffer
- (instancetype)initWithMemory:(MobilesdkKtor_ioMemory *)memory origin:(MobilesdkKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<MobilesdkKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(MobilesdkKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (MobilesdkKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<MobilesdkKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) MobilesdkKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) MobilesdkKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@protocol MobilesdkKtor_ioInput <MobilesdkKtor_ioCloseable>
@required
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)peekToDestination:(MobilesdkKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property MobilesdkKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default. Use readXXXLittleEndian or readXXX then X.reverseByteOrder() instead.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol MobilesdkKotlinAppendable
@required
- (id<MobilesdkKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<MobilesdkKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<MobilesdkKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Ktor_ioOutput")))
@protocol MobilesdkKtor_ioOutput <MobilesdkKotlinAppendable, MobilesdkKtor_ioCloseable>
@required
- (id<MobilesdkKotlinAppendable>)appendCsq:(MobilesdkKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeByteV:(int8_t)v __attribute__((swift_name("writeByte(v:)")));
@property MobilesdkKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((deprecated("Write with writeXXXLittleEndian or do X.reverseByteOrder() and then writeXXX instead.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer")))
@interface MobilesdkKtor_ioIoBuffer : MobilesdkKtor_ioChunkBuffer <MobilesdkKtor_ioInput, MobilesdkKtor_ioOutput>
- (instancetype)initWithMemory:(MobilesdkKtor_ioMemory *)memory origin:(MobilesdkKtor_ioChunkBuffer * _Nullable)origin __attribute__((swift_name("init(memory:origin:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithContent:(void *)content contentCapacity:(int32_t)contentCapacity __attribute__((swift_name("init(content:contentCapacity:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use Buffer instead.")));
- (instancetype)initWithMemory:(MobilesdkKtor_ioMemory *)memory origin:(MobilesdkKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<MobilesdkKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKtor_ioIoBufferCompanion *companion __attribute__((swift_name("companion")));
- (id<MobilesdkKotlinAppendable>)appendValue:(unichar)c __attribute__((swift_name("append(value:)")));
- (id<MobilesdkKotlinAppendable>)appendCsq:(MobilesdkKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("append(csq:start:end:)")));
- (id<MobilesdkKotlinAppendable>)appendValue_:(id _Nullable)csq __attribute__((swift_name("append(value_:)")));
- (id<MobilesdkKotlinAppendable>)appendValue:(id _Nullable)csq startIndex:(int32_t)start endIndex:(int32_t)end __attribute__((swift_name("append(value:startIndex:endIndex:)")));
- (int32_t)appendCharsCsq:(MobilesdkKotlinCharArray *)csq start:(int32_t)start end:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end:)")));
- (int32_t)appendCharsCsq:(id)csq start:(int32_t)start end_:(int32_t)end __attribute__((swift_name("appendChars(csq:start:end_:)")));
- (void)close __attribute__((swift_name("close()")));
- (MobilesdkKtor_ioIoBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)flush __attribute__((swift_name("flush()")));
- (MobilesdkKtor_ioIoBuffer *)makeView __attribute__((swift_name("makeView()")));
- (int64_t)peekToDestination:(MobilesdkKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)readDirectBlock:(MobilesdkInt *(^)(id))block __attribute__((swift_name("readDirect(block:)")));
- (void)releasePool_:(id<MobilesdkKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool_:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (int32_t)writeDirectBlock:(MobilesdkInt *(^)(id))block __attribute__((swift_name("writeDirect(block:)")));
@property MobilesdkKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MobilesdkKotlinByteArray : MobilesdkBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MobilesdkByte *(^)(MobilesdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MobilesdkKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Ktor_ioAbstractInput")))
@interface MobilesdkKtor_ioAbstractInput : MobilesdkBase <MobilesdkKtor_ioInput>
- (instancetype)initWithHead:(MobilesdkKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<MobilesdkKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("AbstractInput is deprecated and will be merged with Input in 2.0.0")));
@property (class, readonly, getter=companion) MobilesdkKtor_ioAbstractInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (int64_t)discardN:(int64_t)n __attribute__((swift_name("discard(n:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (MobilesdkKtor_ioChunkBuffer * _Nullable)ensureNextHeadCurrent:(MobilesdkKtor_ioChunkBuffer *)current __attribute__((swift_name("ensureNextHead(current:)")));
- (MobilesdkKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(MobilesdkKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (void)fixGapAfterReadCurrent:(MobilesdkKtor_ioChunkBuffer *)current __attribute__((swift_name("fixGapAfterRead(current:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(MobilesdkKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (MobilesdkKtor_ioChunkBuffer * _Nullable)prepareReadHeadMinSize:(int32_t)minSize __attribute__((swift_name("prepareReadHead(minSize:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<MobilesdkKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<MobilesdkKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
- (void)updateHeadRemainingRemaining:(int32_t)remaining __attribute__((swift_name("updateHeadRemaining(remaining:)"))) __attribute__((unavailable("Not supported anymore.")));
@property MobilesdkKtor_ioByteOrder *byteOrder __attribute__((swift_name("byteOrder"))) __attribute__((unavailable("Not supported anymore. All operations are big endian by default.")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<MobilesdkKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketBase")))
@interface MobilesdkKtor_ioByteReadPacketBase : MobilesdkKtor_ioAbstractInput
- (instancetype)initWithHead:(MobilesdkKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<MobilesdkKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Will be removed in the future releases. Use Input or AbstractInput instead.")));
@property (class, readonly, getter=companion) MobilesdkKtor_ioByteReadPacketBaseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Ktor_ioByteReadPacketPlatformBase")))
@interface MobilesdkKtor_ioByteReadPacketPlatformBase : MobilesdkKtor_ioByteReadPacketBase
- (instancetype)initWithHead:(MobilesdkKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<MobilesdkKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("Will be removed in future releases.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface MobilesdkKtor_ioByteReadPacket : MobilesdkKtor_ioByteReadPacketPlatformBase <MobilesdkKtor_ioInput>
- (instancetype)initWithHead:(MobilesdkKtor_ioChunkBuffer *)head pool:(id<MobilesdkKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(MobilesdkKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<MobilesdkKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (MobilesdkKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (MobilesdkKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(MobilesdkKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol MobilesdkKtor_ioReadSession
@required
- (int32_t)discardN_:(int32_t)n __attribute__((swift_name("discard(n_:)")));
- (MobilesdkKtor_ioIoBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol MobilesdkKotlinSuspendFunction1 <MobilesdkKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder")))
@interface MobilesdkKtor_ioByteOrder : MobilesdkKotlinEnum<MobilesdkKtor_ioByteOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKtor_ioByteOrderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MobilesdkKtor_ioByteOrder *bigEndian __attribute__((swift_name("bigEndian")));
@property (class, readonly) MobilesdkKtor_ioByteOrder *littleEndian __attribute__((swift_name("littleEndian")));
+ (MobilesdkKotlinArray<MobilesdkKtor_ioByteOrder *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol MobilesdkKotlinKType
@required
@property (readonly) NSArray<MobilesdkKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<MobilesdkKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol MobilesdkKtor_httpParameters <MobilesdkKtor_utilsStringValues>
@required
@property (readonly) MobilesdkKtor_httpUrlEncodingOption *urlEncodingOption __attribute__((swift_name("urlEncodingOption")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface MobilesdkKtor_httpUrlCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface MobilesdkKtor_httpHeaderValueWithParameters : MobilesdkBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MobilesdkKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<MobilesdkKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface MobilesdkKtor_httpContentType : MobilesdkKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<MobilesdkKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MobilesdkKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(MobilesdkKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (MobilesdkKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (MobilesdkKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface MobilesdkKtor_httpHttpStatusCodeCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (MobilesdkKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) MobilesdkKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<MobilesdkKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface MobilesdkKtor_utilsGMTDateCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface MobilesdkKtor_utilsWeekDay : MobilesdkKotlinEnum<MobilesdkKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MobilesdkKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) MobilesdkKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) MobilesdkKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) MobilesdkKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) MobilesdkKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) MobilesdkKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) MobilesdkKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (MobilesdkKotlinArray<MobilesdkKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface MobilesdkKtor_utilsMonth : MobilesdkKotlinEnum<MobilesdkKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MobilesdkKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MobilesdkKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) MobilesdkKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) MobilesdkKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) MobilesdkKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) MobilesdkKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) MobilesdkKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) MobilesdkKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) MobilesdkKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) MobilesdkKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) MobilesdkKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) MobilesdkKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) MobilesdkKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (MobilesdkKotlinArray<MobilesdkKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface MobilesdkKtor_httpHttpProtocolVersionCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (MobilesdkKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (MobilesdkKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) MobilesdkKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) MobilesdkKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) MobilesdkKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) MobilesdkKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) MobilesdkKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface MobilesdkKtor_httpURLProtocolCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (MobilesdkKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) MobilesdkKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) MobilesdkKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) MobilesdkKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) MobilesdkKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) MobilesdkKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, MobilesdkKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrlEncodingOption")))
@interface MobilesdkKtor_httpUrlEncodingOption : MobilesdkKotlinEnum<MobilesdkKtor_httpUrlEncodingOption *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MobilesdkKtor_httpUrlEncodingOption *default_ __attribute__((swift_name("default_")));
@property (class, readonly) MobilesdkKtor_httpUrlEncodingOption *keyOnly __attribute__((swift_name("keyOnly")));
@property (class, readonly) MobilesdkKtor_httpUrlEncodingOption *valueOnly __attribute__((swift_name("valueOnly")));
@property (class, readonly) MobilesdkKtor_httpUrlEncodingOption *noEncoding __attribute__((swift_name("noEncoding")));
+ (MobilesdkKotlinArray<MobilesdkKtor_httpUrlEncodingOption *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol MobilesdkKotlinx_coroutines_coreParentJob <MobilesdkKotlinx_coroutines_coreJob>
@required
- (MobilesdkKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol MobilesdkKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<MobilesdkKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(MobilesdkKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(MobilesdkKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<MobilesdkKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface MobilesdkKtor_ioMemoryCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface MobilesdkKtor_ioBufferCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol MobilesdkKtor_ioObjectPool <MobilesdkKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface MobilesdkKtor_ioChunkBufferCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<MobilesdkKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<MobilesdkKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface MobilesdkKotlinCharArray : MobilesdkBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(MobilesdkInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MobilesdkKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioIoBuffer.Companion")))
@interface MobilesdkKtor_ioIoBufferCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_ioIoBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_ioIoBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<MobilesdkKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<MobilesdkKtor_ioObjectPool> NoPool __attribute__((swift_name("NoPool")));
@property (readonly) id<MobilesdkKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface MobilesdkKotlinByteIterator : MobilesdkBase <MobilesdkKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MobilesdkByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioAbstractInput.Companion")))
@interface MobilesdkKtor_ioAbstractInputCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_ioAbstractInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacketBase.Companion")))
@interface MobilesdkKtor_ioByteReadPacketBaseCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_ioByteReadPacketBaseCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty"))) __attribute__((unavailable("Use ByteReadPacket.Empty instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface MobilesdkKtor_ioByteReadPacketCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MobilesdkKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteOrder.Companion")))
@interface MobilesdkKtor_ioByteOrderCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_ioByteOrderCompanion *shared __attribute__((swift_name("shared")));
- (MobilesdkKtor_ioByteOrder *)nativeOrder __attribute__((swift_name("nativeOrder()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface MobilesdkKotlinKTypeProjection : MobilesdkBase
- (instancetype)initWithVariance:(MobilesdkKotlinKVariance * _Nullable)variance type:(id<MobilesdkKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (MobilesdkKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<MobilesdkKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (MobilesdkKotlinKTypeProjection *)doCopyVariance:(MobilesdkKotlinKVariance * _Nullable)variance type:(id<MobilesdkKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MobilesdkKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) MobilesdkKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface MobilesdkKtor_httpHeaderValueParam : MobilesdkBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (MobilesdkKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface MobilesdkKtor_httpHeaderValueWithParametersCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<MobilesdkKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface MobilesdkKtor_httpContentTypeCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (MobilesdkKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) MobilesdkKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface MobilesdkKtor_utilsWeekDayCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (MobilesdkKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MobilesdkKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface MobilesdkKtor_utilsMonthCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (MobilesdkKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MobilesdkKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface MobilesdkKotlinx_coroutines_coreAtomicDesc : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MobilesdkKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(MobilesdkKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property MobilesdkKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface MobilesdkKotlinx_coroutines_coreOpDescriptor : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(MobilesdkKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MobilesdkKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : MobilesdkKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) MobilesdkKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface MobilesdkKotlinCharIterator : MobilesdkBase <MobilesdkKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface MobilesdkKotlinKVariance : MobilesdkKotlinEnum<MobilesdkKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MobilesdkKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) MobilesdkKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) MobilesdkKotlinKVariance *out __attribute__((swift_name("out")));
+ (MobilesdkKotlinArray<MobilesdkKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface MobilesdkKotlinKTypeProjectionCompanion : MobilesdkBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MobilesdkKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (MobilesdkKotlinKTypeProjection *)contravariantType:(id<MobilesdkKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (MobilesdkKotlinKTypeProjection *)covariantType:(id<MobilesdkKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (MobilesdkKotlinKTypeProjection *)invariantType:(id<MobilesdkKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) MobilesdkKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface MobilesdkKotlinx_coroutines_coreAtomicOp<__contravariant T> : MobilesdkKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) MobilesdkKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(MobilesdkBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(MobilesdkBoolean *(^)(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(MobilesdkBoolean *(^)(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(MobilesdkBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(MobilesdkBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id _Nullable next __attribute__((swift_name("next")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : MobilesdkKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MobilesdkKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(MobilesdkKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MobilesdkKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MobilesdkKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MobilesdkKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MobilesdkKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
