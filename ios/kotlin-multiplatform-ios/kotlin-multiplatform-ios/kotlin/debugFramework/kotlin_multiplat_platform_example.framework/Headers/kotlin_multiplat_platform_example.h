#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Kotlin_multiplat_platform_exampleUser, Kotlin_multiplat_platform_exampleApiClient, Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineDispatcher, Kotlin_multiplat_platform_exampleKotlinAbstractCoroutineContextElement, Kotlin_multiplat_platform_exampleKotlinThrowable, Kotlin_multiplat_platform_exampleKotlinArray, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialKind, Kotlin_multiplat_platform_exampleKotlinNothing, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeUpdateMode, Kotlin_multiplat_platform_exampleKotlinEnum;

@protocol Kotlin_multiplat_platform_exampleKotlinCoroutineContext, Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineScope, Kotlin_multiplat_platform_exampleGithubApiClient, Kotlin_multiplat_platform_exampleAppDispatchers, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeKSerializer, Kotlin_multiplat_platform_exampleKotlinCoroutineContextKey, Kotlin_multiplat_platform_exampleKotlinCoroutineContextElement, Kotlin_multiplat_platform_exampleKotlinContinuation, Kotlin_multiplat_platform_exampleKotlinContinuationInterceptor, Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreRunnable, Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreDisposableHandle, Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCancellableContinuation, Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreDelay, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeEncoder, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerializationStrategy, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDecoder, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDeserializationStrategy, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeCompositeEncoder, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialModule, Kotlin_multiplat_platform_exampleKotlinAnnotation, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeCompositeDecoder, Kotlin_multiplat_platform_exampleKotlinIterator, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialModuleCollector, Kotlin_multiplat_platform_exampleKotlinKClass, Kotlin_multiplat_platform_exampleKotlinComparable, Kotlin_multiplat_platform_exampleKotlinKDeclarationContainer, Kotlin_multiplat_platform_exampleKotlinKAnnotatedElement, Kotlin_multiplat_platform_exampleKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wnullability"

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface Kotlin_multiplat_platform_exampleMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface Kotlin_multiplat_platform_exampleMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface Kotlin_multiplat_platform_exampleNumber : NSNumber
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

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface Kotlin_multiplat_platform_exampleByte : Kotlin_multiplat_platform_exampleNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface Kotlin_multiplat_platform_exampleUByte : Kotlin_multiplat_platform_exampleNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface Kotlin_multiplat_platform_exampleShort : Kotlin_multiplat_platform_exampleNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface Kotlin_multiplat_platform_exampleUShort : Kotlin_multiplat_platform_exampleNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface Kotlin_multiplat_platform_exampleInt : Kotlin_multiplat_platform_exampleNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface Kotlin_multiplat_platform_exampleUInt : Kotlin_multiplat_platform_exampleNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface Kotlin_multiplat_platform_exampleLong : Kotlin_multiplat_platform_exampleNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface Kotlin_multiplat_platform_exampleULong : Kotlin_multiplat_platform_exampleNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface Kotlin_multiplat_platform_exampleFloat : Kotlin_multiplat_platform_exampleNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface Kotlin_multiplat_platform_exampleDouble : Kotlin_multiplat_platform_exampleNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface Kotlin_multiplat_platform_exampleBoolean : Kotlin_multiplat_platform_exampleNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<Kotlin_multiplat_platform_exampleKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPresentation")))
@interface Kotlin_multiplat_platform_exampleUserPresentation : KotlinBase <Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithGithubApiClient:(id<Kotlin_multiplat_platform_exampleGithubApiClient>)githubApiClient dispatchers:(id<Kotlin_multiplat_platform_exampleAppDispatchers>)dispatchers __attribute__((swift_name("init(githubApiClient:dispatchers:)"))) __attribute__((objc_designated_initializer));
- (void)fetchUsersWithTimeOutTimeoutInMillis:(int64_t)timeoutInMillis handler:(void (^)(Kotlin_multiplat_platform_exampleUser *))handler __attribute__((swift_name("fetchUsersWithTimeOut(timeoutInMillis:handler:)")));
- (void)fetchUsersWithoutTimeoutHandler:(void (^)(Kotlin_multiplat_platform_exampleUser *))handler __attribute__((swift_name("fetchUsersWithoutTimeout(handler:)")));
@property (readonly) id<Kotlin_multiplat_platform_exampleKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("ApiClient")))
@interface Kotlin_multiplat_platform_exampleApiClient : KotlinBase
- (instancetype)initWithDispatchers:(id<Kotlin_multiplat_platform_exampleAppDispatchers>)dispatchers __attribute__((swift_name("init(dispatchers:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<Kotlin_multiplat_platform_exampleAppDispatchers> dispatchers __attribute__((swift_name("dispatchers")));
@end;

__attribute__((swift_name("GithubApiClient")))
@protocol Kotlin_multiplat_platform_exampleGithubApiClient
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GithubApiClientImpl")))
@interface Kotlin_multiplat_platform_exampleGithubApiClientImpl : Kotlin_multiplat_platform_exampleApiClient <Kotlin_multiplat_platform_exampleGithubApiClient>
- (instancetype)initWithDispatchers:(id<Kotlin_multiplat_platform_exampleAppDispatchers>)dispatchers __attribute__((swift_name("init(dispatchers:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface Kotlin_multiplat_platform_exampleUser : KotlinBase
- (instancetype)initWithUserName:(NSString *)userName id:(int64_t)id userType:(NSString *)userType siteAdmin:(BOOL)siteAdmin __attribute__((swift_name("init(userName:id:userType:siteAdmin:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (Kotlin_multiplat_platform_exampleUser *)doCopyUserName:(NSString *)userName id:(int64_t)id userType:(NSString *)userType siteAdmin:(BOOL)siteAdmin __attribute__((swift_name("doCopy(userName:id:userType:siteAdmin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) BOOL siteAdmin __attribute__((swift_name("siteAdmin")));
@property (readonly) NSString *userName __attribute__((swift_name("userName")));
@property (readonly) NSString *userType __attribute__((swift_name("userType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Companion")))
@interface Kotlin_multiplat_platform_exampleUserCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("AppDispatchers")))
@protocol Kotlin_multiplat_platform_exampleAppDispatchers
@required
@property (readonly) Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineDispatcher *io __attribute__((swift_name("io")));
@property (readonly) Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineDispatcher *main __attribute__((swift_name("main")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol Kotlin_multiplat_platform_exampleKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<Kotlin_multiplat_platform_exampleKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<Kotlin_multiplat_platform_exampleKotlinCoroutineContextElement> _Nullable)getKey:(id<Kotlin_multiplat_platform_exampleKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<Kotlin_multiplat_platform_exampleKotlinCoroutineContext>)minusKeyKey:(id<Kotlin_multiplat_platform_exampleKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<Kotlin_multiplat_platform_exampleKotlinCoroutineContext>)plusContext:(id<Kotlin_multiplat_platform_exampleKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol Kotlin_multiplat_platform_exampleKotlinCoroutineContextElement <Kotlin_multiplat_platform_exampleKotlinCoroutineContext>
@required
@property (readonly) id<Kotlin_multiplat_platform_exampleKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface Kotlin_multiplat_platform_exampleKotlinAbstractCoroutineContextElement : KotlinBase <Kotlin_multiplat_platform_exampleKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<Kotlin_multiplat_platform_exampleKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<Kotlin_multiplat_platform_exampleKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol Kotlin_multiplat_platform_exampleKotlinContinuationInterceptor <Kotlin_multiplat_platform_exampleKotlinCoroutineContextElement>
@required
- (id<Kotlin_multiplat_platform_exampleKotlinContinuation>)interceptContinuationContinuation:(id<Kotlin_multiplat_platform_exampleKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<Kotlin_multiplat_platform_exampleKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineDispatcher : Kotlin_multiplat_platform_exampleKotlinAbstractCoroutineContextElement <Kotlin_multiplat_platform_exampleKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<Kotlin_multiplat_platform_exampleKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<Kotlin_multiplat_platform_exampleKotlinCoroutineContext>)context block:(id<Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<Kotlin_multiplat_platform_exampleKotlinCoroutineContext>)context block:(id<Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<Kotlin_multiplat_platform_exampleKotlinContinuation>)interceptContinuationContinuation:(id<Kotlin_multiplat_platform_exampleKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<Kotlin_multiplat_platform_exampleKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<Kotlin_multiplat_platform_exampleKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDelay")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreDelay
@required
- (id<Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreDisposableHandle>)invokeOnTimeoutTimeMillis:(int64_t)timeMillis block:(id<Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("invokeOnTimeout(timeMillis:block:)")));
- (void)scheduleResumeAfterDelayTimeMillis:(int64_t)timeMillis continuation:(id<Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCancellableContinuation>)continuation __attribute__((swift_name("scheduleResumeAfterDelay(timeMillis:continuation:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppDispatchersImpl")))
@interface Kotlin_multiplat_platform_exampleAppDispatchersImpl : Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineDispatcher <Kotlin_multiplat_platform_exampleAppDispatchers, Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreDelay>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dispatchContext:(id<Kotlin_multiplat_platform_exampleKotlinCoroutineContext>)context block:(id<Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)scheduleResumeAfterDelayTimeMillis:(int64_t)timeMillis continuation:(id<Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCancellableContinuation>)continuation __attribute__((swift_name("scheduleResumeAfterDelay(timeMillis:continuation:)")));
@property (readonly) Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineDispatcher *io __attribute__((swift_name("io")));
@property (readonly) Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineDispatcher *main __attribute__((swift_name("main")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface Kotlin_multiplat_platform_examplePlatform : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platform __attribute__((swift_name("init()")));
- (NSString *)name __attribute__((swift_name("name()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sample")))
@interface Kotlin_multiplat_platform_exampleSample : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)checkMe __attribute__((swift_name("checkMe()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleKt")))
@interface Kotlin_multiplat_platform_exampleSampleKt : KotlinBase
+ (NSString *)hello __attribute__((swift_name("hello()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerializationStrategy")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerializationStrategy
@required
- (void)serializeEncoder:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDeserializationStrategy")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeKSerializer")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeKSerializer <Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerializationStrategy, Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol Kotlin_multiplat_platform_exampleKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol Kotlin_multiplat_platform_exampleKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<Kotlin_multiplat_platform_exampleKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCancellableContinuation")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCancellableContinuation <Kotlin_multiplat_platform_exampleKotlinContinuation>
@required
- (BOOL)cancelCause:(Kotlin_multiplat_platform_exampleKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (void)completeResumeToken:(id)token __attribute__((swift_name("completeResume(token:)")));
- (void)invokeOnCancellationHandler:(void (^)(Kotlin_multiplat_platform_exampleKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCancellation(handler:)")));
- (void)resumeValue:(id _Nullable)value onCancellation:(void (^)(Kotlin_multiplat_platform_exampleKotlinThrowable *))onCancellation __attribute__((swift_name("resume(value:onCancellation:)")));
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent __attribute__((swift_name("tryResume(value:idempotent:)")));
- (id _Nullable)tryResumeWithExceptionException:(Kotlin_multiplat_platform_exampleKotlinThrowable *)exception __attribute__((swift_name("tryResumeWithException(exception:)")));
- (void)resumeUndispatched:(Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineDispatcher *)receiver value:(id _Nullable)value __attribute__((swift_name("resumeUndispatched(_:value:)")));
- (void)resumeUndispatchedWithException:(Kotlin_multiplat_platform_exampleKotlinx_coroutines_coreCoroutineDispatcher *)receiver exception:(Kotlin_multiplat_platform_exampleKotlinThrowable *)exception __attribute__((swift_name("resumeUndispatchedWithException(_:exception:)")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeEncoder")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeEncoder
@required
- (id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeCompositeEncoder>)beginCollectionDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(Kotlin_multiplat_platform_exampleKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeCompositeEncoder>)beginStructureDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(Kotlin_multiplat_platform_exampleKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialDescriptor")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor
@required
- (NSArray<id<Kotlin_multiplat_platform_exampleKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<Kotlin_multiplat_platform_exampleKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeDecoder")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDecoder
@required
- (id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeCompositeDecoder>)beginStructureDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc typeParams:(Kotlin_multiplat_platform_exampleKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (Kotlin_multiplat_platform_exampleKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface Kotlin_multiplat_platform_exampleKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(Kotlin_multiplat_platform_exampleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(Kotlin_multiplat_platform_exampleKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (Kotlin_multiplat_platform_exampleKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Kotlin_multiplat_platform_exampleKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeEncoder")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index serializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface Kotlin_multiplat_platform_exampleKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(Kotlin_multiplat_platform_exampleInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<Kotlin_multiplat_platform_exampleKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModule")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialModule
@required
- (void)dumpToCollector:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeKSerializer> _Nullable)getContextualKclass:(id<Kotlin_multiplat_platform_exampleKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<Kotlin_multiplat_platform_exampleKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeKSerializer> _Nullable)getPolymorphicBaseClass:(id<Kotlin_multiplat_platform_exampleKotlinKClass>)baseClass serializedClassName:(NSString *)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol Kotlin_multiplat_platform_exampleKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialKind")))
@interface Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialKind : KotlinBase
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeCompositeDecoder")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialModule> context __attribute__((swift_name("context")));
@property (readonly) Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeUpdateMode *updateMode __attribute__((swift_name("updateMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface Kotlin_multiplat_platform_exampleKotlinNothing : KotlinBase
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol Kotlin_multiplat_platform_exampleKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface Kotlin_multiplat_platform_exampleKotlinEnum : KotlinBase <Kotlin_multiplat_platform_exampleKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(Kotlin_multiplat_platform_exampleKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtimeUpdateMode")))
@interface Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeUpdateMode : Kotlin_multiplat_platform_exampleKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeUpdateMode *update __attribute__((swift_name("update")));
- (int32_t)compareToOther:(Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol Kotlin_multiplat_platform_exampleKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtimeSerialModuleCollector")))
@protocol Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeSerialModuleCollector
@required
- (void)contextualKClass:(id<Kotlin_multiplat_platform_exampleKotlinKClass>)kClass serializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<Kotlin_multiplat_platform_exampleKotlinKClass>)baseClass actualClass:(id<Kotlin_multiplat_platform_exampleKotlinKClass>)actualClass actualSerializer:(id<Kotlin_multiplat_platform_exampleKotlinx_serialization_runtimeKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol Kotlin_multiplat_platform_exampleKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol Kotlin_multiplat_platform_exampleKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol Kotlin_multiplat_platform_exampleKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol Kotlin_multiplat_platform_exampleKotlinKClass <Kotlin_multiplat_platform_exampleKotlinKDeclarationContainer, Kotlin_multiplat_platform_exampleKotlinKAnnotatedElement, Kotlin_multiplat_platform_exampleKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
