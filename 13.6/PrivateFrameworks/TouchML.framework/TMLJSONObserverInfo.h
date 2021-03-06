//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMLJSONObserverInfo : NSObject
{
    unsigned long long _hash;
    NSString *_keyPath;
    id _targetUnsafe;
    id _target;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) id targetUnsafe; // @synthesize targetUnsafe=_targetUnsafe;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)notify:(id)arg1;
- (id)initWithObserver:(id)arg1 keyPath:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

