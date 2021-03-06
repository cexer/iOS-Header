//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/CXCallObserverDelegate-Protocol.h>

@class CXCallObserver, NSString;

@interface _ASIncomingCallObserver : NSObject <CXCallObserverDelegate>
{
    CXCallObserver *_callObserver;
    CDUnknownBlockType _incomingCallHandler;
}

+ (id)callObserverWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)_initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

