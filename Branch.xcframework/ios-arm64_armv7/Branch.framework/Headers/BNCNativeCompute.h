//
//  BNCNativeCompute.h
//  Branch
//

#import <Foundation/Foundation.h>
@import NativeComputeSDK;


NS_ASSUME_NONNULL_BEGIN

@interface BNCNativeCompute : NSObject
@property (strong, nonatomic) NCSDKNativeCompute *native;

- (instancetype)init:(NSString *)branchKey;
- (void)syncSchema:(dispatch_group_t)group;
- (NSMutableDictionary *)checkNativeCapping:(NSDictionary<NSString *, id>*)event;
- (void)markEventAsCompleted:(NSDictionary<NSString *, id>*)event;
- (NSString *)getDebugHash;
- (void)runWorkflow:(NSDictionary<NSString *, id>*)input;
- (void)getDeviceSchemaState:(void (^)(NSDictionary *))completion;


@end

NS_ASSUME_NONNULL_END
