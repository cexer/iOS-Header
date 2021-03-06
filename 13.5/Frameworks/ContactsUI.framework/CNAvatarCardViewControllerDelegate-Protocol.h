//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNAvatarCardViewController, NSArray, NSString;

@protocol CNAvatarCardViewControllerDelegate <NSObject>

@optional
- (void)cardViewControllerDidUpdatePreferredSize:(CNAvatarCardViewController *)arg1;
- (void)cardViewControllerDidDismiss:(CNAvatarCardViewController *)arg1;
- (void)cardViewControllerWillDismiss:(CNAvatarCardViewController *)arg1;
- (NSArray *)cardViewController:(CNAvatarCardViewController *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
@end

