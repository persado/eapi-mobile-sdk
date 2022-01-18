#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MobilesdkEnvironment, MobilesdkPSDClient, MobilesdkPSDClientBuilder, MobilesdkVariantResponse, MobilesdkTouchpointVariantResponse, MobilesdkPSDTrack, MobilesdkTrackAction, MobilesdkKotlinEnumCompanion, MobilesdkKotlinEnum<E>, MobilesdkKotlinArray<T>, MobilesdkPSDResponseCompanion, MobilesdkPSDResponse, MobilesdkTouchpointVariantResponseCompanion, MobilesdkVariantResponseCompanion, MobilesdkKotlinx_serialization_coreSerializersModule, MobilesdkKotlinx_serialization_coreSerialKind, MobilesdkKotlinNothing, MobilesdkKotlinThrowable, MobilesdkKotlinException, MobilesdkKotlinRuntimeException, MobilesdkKotlinIllegalStateException;

@protocol MobilesdkKotlinComparable, MobilesdkKotlinx_serialization_coreKSerializer, MobilesdkKotlinSuspendFunction0, MobilesdkKotlinIterator, MobilesdkKotlinx_serialization_coreEncoder, MobilesdkKotlinx_serialization_coreSerialDescriptor, MobilesdkKotlinx_serialization_coreSerializationStrategy, MobilesdkKotlinx_serialization_coreDecoder, MobilesdkKotlinx_serialization_coreDeserializationStrategy, MobilesdkKotlinFunction, MobilesdkKotlinx_serialization_coreCompositeEncoder, MobilesdkKotlinAnnotation, MobilesdkKotlinx_serialization_coreCompositeDecoder, MobilesdkKotlinx_serialization_coreSerializersModuleCollector, MobilesdkKotlinKClass, MobilesdkKotlinKDeclarationContainer, MobilesdkKotlinKAnnotatedElement, MobilesdkKotlinKClassifier;

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
- (instancetype)initWithAppId:(NSString *)appId qaMode:(BOOL)qaMode env:(MobilesdkEnvironment *)env __attribute__((swift_name("init(appId:qaMode:env:)"))) __attribute__((objc_designated_initializer));
- (void)initialize __attribute__((swift_name("initialize()")));
- (void)initializeCallback:(void (^)(void))callback __attribute__((swift_name("initialize(callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDClient.Builder")))
@interface MobilesdkPSDClientBuilder : MobilesdkBase
- (instancetype)initWithAppId:(NSString *)appId __attribute__((swift_name("init(appId:)"))) __attribute__((objc_designated_initializer));
- (MobilesdkPSDClient *)build __attribute__((swift_name("build()")));
- (MobilesdkPSDClientBuilder *)envValue:(MobilesdkEnvironment *)value __attribute__((swift_name("env(value:)")));
- (MobilesdkPSDClientBuilder *)qaModeValue:(BOOL)value __attribute__((swift_name("qaMode(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDContent")))
@interface MobilesdkPSDContent : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MobilesdkVariantResponse * _Nullable)getCampaignContentCampaignId:(NSString *)campaignId __attribute__((swift_name("getCampaignContent(campaignId:)")));
- (MobilesdkTouchpointVariantResponse * _Nullable)getTouchpointContentCampaignId:(NSString *)campaignId touchpointName:(NSString *)touchpointName __attribute__((swift_name("getTouchpointContent(campaignId:touchpointName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PSDTrack")))
@interface MobilesdkPSDTrack : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MobilesdkPSDTrack *)envEnv:(MobilesdkEnvironment *)env __attribute__((swift_name("env(env:)")));
- (void)trackAction:(MobilesdkTrackAction *)action campaignId:(NSString *)campaignId __attribute__((swift_name("track(action:campaignId:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface MobilesdkPlatform : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Preferences")))
@interface MobilesdkPreferences : MobilesdkBase
- (instancetype)initWithName:(NSString * _Nullable)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (NSString * _Nullable)getStringKey:(NSString *)key __attribute__((swift_name("getString(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
- (void)setStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("setString(key:value:)")));
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
@property (class, readonly) MobilesdkEnvironment *dev __attribute__((swift_name("dev")));
@property (class, readonly) MobilesdkEnvironment *local __attribute__((swift_name("local")));
+ (MobilesdkKotlinArray<MobilesdkEnvironment *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *env __attribute__((swift_name("env")));
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
- (instancetype)initWithVariantCode:(NSString * _Nullable)variantCode genoId:(NSString * _Nullable)genoId languageSegment:(NSString * _Nullable)languageSegment touchpoints:(NSArray<id> * _Nullable)touchpoints params:(NSDictionary<id, id> * _Nullable)params defaultParams:(NSDictionary<id, id> * _Nullable)defaultParams __attribute__((swift_name("init(variantCode:genoId:languageSegment:touchpoints:params:defaultParams:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MobilesdkVariantResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<id> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSDictionary<id, id> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSDictionary<id, id> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MobilesdkVariantResponse *)doCopyVariantCode:(NSString * _Nullable)variantCode genoId:(NSString * _Nullable)genoId languageSegment:(NSString * _Nullable)languageSegment touchpoints:(NSArray<id> * _Nullable)touchpoints params:(NSDictionary<id, id> * _Nullable)params defaultParams:(NSDictionary<id, id> * _Nullable)defaultParams __attribute__((swift_name("doCopy(variantCode:genoId:languageSegment:touchpoints:params:defaultParams:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<id, id> * _Nullable defaultParams __attribute__((swift_name("defaultParams")));
@property (readonly) NSString * _Nullable genoId __attribute__((swift_name("genoId")));
@property (readonly) NSString * _Nullable languageSegment __attribute__((swift_name("languageSegment")));
@property (readonly) NSDictionary<id, id> * _Nullable params __attribute__((swift_name("params")));
@property (readonly) NSArray<id> * _Nullable touchpoints __attribute__((swift_name("touchpoints")));
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
__attribute__((swift_name("RunBlockingKt")))
@interface MobilesdkRunBlockingKt : MobilesdkBase
+ (id _Nullable)runBlockingBlock:(id<MobilesdkKotlinSuspendFunction0>)block __attribute__((swift_name("runBlocking(block:)")));
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

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MobilesdkKotlinx_serialization_coreSerializersModule : MobilesdkBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<MobilesdkKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<MobilesdkKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MobilesdkKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MobilesdkKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<MobilesdkKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MobilesdkKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<MobilesdkKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MobilesdkKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
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

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
