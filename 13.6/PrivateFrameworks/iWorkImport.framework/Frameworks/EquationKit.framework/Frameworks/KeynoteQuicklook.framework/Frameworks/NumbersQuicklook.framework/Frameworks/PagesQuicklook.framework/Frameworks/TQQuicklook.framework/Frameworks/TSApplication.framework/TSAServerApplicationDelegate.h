//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSABaseApplicationDelegate;

@interface TSAServerApplicationDelegate : NSObject
{
    TSABaseApplicationDelegate *_baseApplicationDelegate;
}

+ (id)sharedDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) TSABaseApplicationDelegate *baseApplicationDelegate; // @synthesize baseApplicationDelegate=_baseApplicationDelegate;
- (id)createBaseApplicationDelegate;
- (id)init;

@end

