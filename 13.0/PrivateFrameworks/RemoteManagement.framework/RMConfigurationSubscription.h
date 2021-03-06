//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface RMConfigurationSubscription : NSObject
{
    NSObject *_notifyTokenLock;
    _Bool _hasResumed;
    int _notifyToken;
    NSString *_darwinNotificationName;
    NSArray *_types;
    CDUnknownBlockType _notificationHandler;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (unsigned int)_registerForDarwinNotificationWithName:(id)arg1 notifyToken:(int *)arg2 queue:(id)arg3 notificationHandler:(CDUnknownBlockType)arg4;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(nonatomic) _Bool hasResumed; // @synthesize hasResumed=_hasResumed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDUnknownBlockType notificationHandler; // @synthesize notificationHandler=_notificationHandler;
@property(readonly, copy, nonatomic) NSArray *types; // @synthesize types=_types;
@property(readonly, copy, nonatomic) NSString *darwinNotificationName; // @synthesize darwinNotificationName=_darwinNotificationName;
- (void).cxx_destruct;
- (void)resume;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)initWithDarwinNotificationName:(id)arg1 types:(id)arg2 notificationHandler:(CDUnknownBlockType)arg3;

@end

