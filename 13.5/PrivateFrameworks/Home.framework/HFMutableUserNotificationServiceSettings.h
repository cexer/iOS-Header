//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFUserNotificationServiceSettings.h>

@class NSPredicate;

@interface HFMutableUserNotificationServiceSettings : HFUserNotificationServiceSettings
{
}


// Remaining properties
@property(nonatomic, getter=areDoorbellNotificationsEnabled) _Bool doorbellNotificationsEnabled; // @dynamic doorbellNotificationsEnabled;
@property(nonatomic, getter=areMotionNotificationsEnabled) _Bool motionNotificationsEnabled;
@property(retain, nonatomic) NSPredicate *notificationCondition; // @dynamic notificationCondition;
@property(nonatomic, getter=areNotificationsEnabled) _Bool notificationsEnabled; // @dynamic notificationsEnabled;
@property(retain, nonatomic) NSPredicate *smartCameraNotificationCondition; // @dynamic smartCameraNotificationCondition;
@property(nonatomic, getter=areSmartDetectionNotificationsEnabled) _Bool smartDetectionNotificationsEnabled; // @dynamic smartDetectionNotificationsEnabled;
@end

