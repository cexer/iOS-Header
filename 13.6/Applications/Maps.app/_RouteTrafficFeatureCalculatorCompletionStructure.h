//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _RouteTrafficFeatureCalculatorCompletionStructure : NSObject
{
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
- (id)initWithQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

