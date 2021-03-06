//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface CMKKeepDaemonAliveAssertion : NSObject
{
    NSObject<OS_xpc_object> *_keepaliveConnection;
}

+ (id)assertion;
- (void).cxx_destruct;
- (void)_setupHeartBeatForConnection:(id)arg1;
- (void)_tearDownConnection;
- (void)_setupConnection;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_unregisterForAppActiveNotifications;
- (void)_registerForAppActiveNotifications;
- (void)dealloc;
- (id)init;

@end

