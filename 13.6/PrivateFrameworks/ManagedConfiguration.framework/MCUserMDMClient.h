//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MCUserMDMClient : NSObject
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionSyncQueue;
}

+ (id)sharedClient;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionSyncQueue; // @synthesize xpcConnectionSyncQueue=_xpcConnectionSyncQueue;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)getAssertionDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)processUserRequest:(id)arg1 encodeResponse:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)pushToken;
- (void)simulatePush;
- (void)scheduleTokenUpdate;
- (void)_queue_createAndStartMDMXPCConnection;
- (void)_destroyXPCConnectionAndInvalidate:(_Bool)arg1;
- (_Bool)supportsPerUserMDM;
- (void)dealloc;
- (id)init;

@end

