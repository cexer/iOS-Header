//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GraphRenderer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _cancelled;
}

+ (void)clearSharedRenderer;
+ (id)sharedRenderer;
- (void).cxx_destruct;
- (void)performRenderOperation:(id)arg1;
- (id)init;

@end

