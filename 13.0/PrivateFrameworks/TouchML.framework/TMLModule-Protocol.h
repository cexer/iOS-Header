//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchML/NSObject-Protocol.h>

@class JSValue;

@protocol TMLModule <NSObject>
+ (_Bool)loadModule;

@optional
+ (void)initializeJSContext:(JSValue *)arg1;
@end

