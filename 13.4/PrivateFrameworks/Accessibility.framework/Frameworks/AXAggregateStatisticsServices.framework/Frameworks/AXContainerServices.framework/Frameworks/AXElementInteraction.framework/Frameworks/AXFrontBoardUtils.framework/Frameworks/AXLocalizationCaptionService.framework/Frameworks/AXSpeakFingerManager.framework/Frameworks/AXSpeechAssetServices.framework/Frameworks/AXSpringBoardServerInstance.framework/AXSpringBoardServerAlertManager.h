//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXSpringBoardServerInstance/AXViewServiceHandler-Protocol.h>
#import <AXSpringBoardServerInstance/SBSRemoteAlertHandleObserver-Protocol.h>

@class NSMutableDictionary, NSString;

@interface AXSpringBoardServerAlertManager : NSObject <SBSRemoteAlertHandleObserver, AXViewServiceHandler>
{
    NSMutableDictionary *_handlesByService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *handlesByService; // @synthesize handlesByService=_handlesByService;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (_Bool)isShowingAXUIViewService:(id)arg1;
- (void)hideAXUIViewService:(id)arg1;
- (void)showAXUIViewService:(id)arg1 withData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

