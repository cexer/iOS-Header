//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityRingsUI/ARUICountdownDefaultAnimation.h>

#import <ActivityRingsUI/ARUICountdownAnimation-Protocol.h>

__attribute__((visibility("hidden")))
@interface ARUICountdownPreCancel : ARUICountdownDefaultAnimation <ARUICountdownAnimation>
{
}

+ (id)identifier;
- (void)applyToCountdownView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)identifier;
- (_Bool)cancelable;
- (id)timingFunction;
- (double)duration;
- (double)delay;

@end

