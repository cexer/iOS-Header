//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/WFComposeViewControllerDelegate-Protocol.h>

@class WFHomeComposeViewController, WFHomeWorkflow;

@protocol WFHomeComposeViewControllerDelegate <WFComposeViewControllerDelegate>

@optional
- (void)homeComposeViewController:(WFHomeComposeViewController *)arg1 didFinishWithHomeWorkflow:(WFHomeWorkflow *)arg2;
- (void)homeComposeViewController:(WFHomeComposeViewController *)arg1 didFinishWithHomeWorkflow:(WFHomeWorkflow *)arg2 includesSecureAccessory:(_Bool)arg3;
@end

