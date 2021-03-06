//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CLNotifierServiceProtocol-Protocol.h>

@class NSString;

@protocol CLCompassDatabaseProtocol <CLNotifierServiceProtocol>
- (_Bool)syncgetLookupBiasWithMagneticField:(CDStruct_03942939)arg1 acceleration:(CDStruct_03942939)arg2 bias:(CDStruct_03942939 *)arg3 level:(int *)arg4 noResults:(_Bool *)arg5;
- (void)getBiasWithMagneticField:(CDStruct_03942939)arg1 acceleration:(CDStruct_03942939)arg2;
- (int)syncgetPendingSetBiasCount;
- (void)setBias:(CDStruct_03942939)arg1 withMagneticField:(CDStruct_03942939)arg2 level:(int)arg3 magnitude:(float)arg4 inclination:(float)arg5;
- (void)dumpDatabase:(NSString *)arg1 onCompletion:(void (^)(NSString *))arg2;
- (_Bool)syncgetDoSync:(void (^)(struct CLCompassDatabase *))arg1;
- (void)doAsync:(void (^)(struct CLCompassDatabase *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(struct CLCompassDatabase *))arg1;
@end

