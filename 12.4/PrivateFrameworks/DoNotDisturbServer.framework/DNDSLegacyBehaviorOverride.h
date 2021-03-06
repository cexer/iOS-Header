//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSSecureCoding-Protocol.h>

@class NSArray;

@interface DNDSLegacyBehaviorOverride : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _overrideType;
    unsigned long long _mode;
    NSArray *_effectiveIntervals;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *effectiveIntervals; // @synthesize effectiveIntervals=_effectiveIntervals;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) unsigned long long overrideType; // @synthesize overrideType=_overrideType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOverrideType:(unsigned long long)arg1 mode:(unsigned long long)arg2 effectiveIntervals:(id)arg3;

@end

