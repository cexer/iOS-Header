//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SiriDismissalOptions, SiriPresentationOptions, SiriPunchoutRequest;
@protocol SiriPresentation;

@protocol SiriPresentationControllerDelegate <NSObject>
- (void)siriPresentation:(id <SiriPresentation>)arg1 requestsPunchout:(SiriPunchoutRequest *)arg2 withHandler:(void (^)(_Bool, NSError *))arg3;
- (void)siriPresentation:(id <SiriPresentation>)arg1 isEnabledDidChange:(_Bool)arg2;
- (void)siriPresentation:(id <SiriPresentation>)arg1 requestsDismissalWithOptions:(SiriDismissalOptions *)arg2 withHandler:(void (^)(_Bool, NSError *))arg3;
- (void)siriPresentation:(id <SiriPresentation>)arg1 requestsPresentationWithOptions:(SiriPresentationOptions *)arg2 withHandler:(void (^)(_Bool, NSError *))arg3;
@end

