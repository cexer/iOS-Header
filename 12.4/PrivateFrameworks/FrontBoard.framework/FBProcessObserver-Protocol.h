//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBProcess, FBProcessState;

@protocol FBProcessObserver <NSObject>

@optional
- (void)process:(FBProcess *)arg1 stateDidChangeFromState:(FBProcessState *)arg2 toState:(FBProcessState *)arg3;
- (void)processDidExit:(FBProcess *)arg1;
@end

